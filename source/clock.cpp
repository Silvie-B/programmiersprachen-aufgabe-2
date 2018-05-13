#include "window.hpp"
#include <GLFW/glfw3.h>
#include <utility>
#include <cmath>
#include <vector>
#include "rectangle.hpp"
#include "circle.hpp"

int main(int argc, char* argv[])
{
    Window win{std::make_pair(800,800)};
    Vec2 center(400.0, 400.0);
    Circle uhr(200.0, center);
    Color color_uhr(1.0,1.0,1.0);
    
    // esc schließt Fenster, ansonsten bleibt Fenster offen
    while (!win.should_close()) {
        if (win.get_key(GLFW_KEY_ESCAPE) == GLFW_PRESS) {
            win.close();
        }

        //timer
        float t = win.get_time();
        //Umrechung in Stunden/Minuten/Sekunden mod Anzahl Stunden/Minuten/Sekunden auf Ziffernblatt mal Grad und Umrechnung in Bogenmaß für sin und cos
        float std = static_cast<float>(fmod((int)(t/3600), 12) * 12.0 * M_PI / 180.0);
        float min = static_cast<float>(fmod((int)(t/60), 60)* 6.0 * M_PI / 180.0);
        float sek = static_cast<float>(fmod((int)t, 60) * 6.0 * M_PI / 180.0);
        
        //center + radius * Zeitfunktion (negaitv für Urhzeigersinn) mal -1 für Stratpunkt oben
        int x1 = 400.0f + 200.0f * std::sin(-std)*-1;
        int y1 = 400.0f + 200.0f * std::cos(-std)*-1;
        int x2 = 400.0f + 200.0f * std::sin(-min)*-1;
        int y2 = 400.0f + 200.0f * std::cos(-min)*-1;
        int x3 = 400.0f + 200.0f * std::sin(-sek)*-1;
        int y3 = 400.0f + 200.0f * std::cos(-sek)*-1;
        
        uhr.draw(win);
        //Stundenzeiger
        win.draw_line(center.x, center.y, x1, y1, 0.0, 0.5, 0.8);
        //Minutenzeiger
        win.draw_line(center.x, center.y, x2, y2, 0.3, 0.0, 0.2);
        //Sekundenzeiger
        win.draw_line(center.x, center.y, x3, y3, 0.7, 0.3, 0.2);
        
        win.update();
    }
    return 0;
}
