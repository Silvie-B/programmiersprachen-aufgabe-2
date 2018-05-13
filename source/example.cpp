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
    //Aufgabe 2.10 - 2.13
    Vec2 v1(500.0,500.0);
    Vec2 v2(323.0, 323.0);
    Vec2 v3(222.0, 222.0);
    Vec2 v4(160.0, 160.00);
    Vec2 v5(700.0,660.0);
    Vec2 v6(350.0, 389.0);
    Vec2 v7(444.0, 444.00);
    Vec2 v8(256.0, 356.0);
    Rectangle rectangle1(v1,v2);
    Rectangle rectangle2(v3, v4);
    Rectangle rectangle3(v5, v6);
    Rectangle rectangle4(v7, v8);
    
    Vec2 center1(400.0,400.0);
    Vec2 center2(200.0,200.0);
    Vec2 center3(111.0,222.0);
    Vec2 center4(323.0,323.0);
    Circle circle1(200.0, center1);
    Circle circle2(200.0, center2);
    Circle circle3(400.0, center3);
    Circle circle4(125.0, center4);
    //Aufgabe 2.13
    std::vector<Rectangle> vec_rec;
    std::vector<Circle> vec_circ;
    
    vec_rec.push_back(rectangle1);
    vec_rec.push_back(rectangle3);
    vec_rec.push_back(rectangle4);
    vec_circ.push_back(circle1);
    vec_circ.push_back(circle3);
    vec_circ.push_back(circle4);
    
    Color color_violet(0.5, 0.0, 0.7);
    Color color_green(0.0, 0.9, 0.0);
    Color color_blue(0.0, 0.3, 1.0);
    

    // esc schließt Fenster, ansonsten bleibt Fenster offen
  while (!win.should_close()) {
    if (win.get_key(GLFW_KEY_ESCAPE) == GLFW_PRESS) {
      win.close();
    }

    // boolean ob linke Maustaste gedrückt
    bool left_pressed = win.get_mouse_button(GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS;

    //timer
    auto t = win.get_time();

    float x1{400 + 380 * std::sin(t)};
    float y1{400 + 380 * std::cos(t)};

    float x2{400 + 380 * std::sin(2.0f*t)};
    float y2{400 + 380 * std::cos(2.0f*t)};

    float x3{400 + 380 * std::sin(t-10.f)};
    float y3{400 + 380 * std::cos(t-10.f)};

    //Zeichnet Punkte, die im Kreis rotieren je nach vergangener Zeit
    // Koordinate + Farbe
    win.draw_point(x1, y1,
        1.0f, 0.0f, 0.0f);
    win.draw_point(x2, y2, 0.0f, 1.0f, 0.0f);
    win.draw_point(x3, y3, 0.0f, 0.0f, 1.0f);

    //Wenn linke Maustaste gedrückt => zeichne Linie von (30,30) zu Mausposition
    auto m = win.mouse_position();
    if (left_pressed) {
      win.draw_line(30, 30, // from
          m.first, m.second, // to
          1.0,0.0,0.0);
    }

    // Achsen Striche je Mausposition
    win.draw_line(0, m.second, 10, m.second, 0.0, 0.0, 0.0);
    win.draw_line(win.window_size().second - 10, m.second, win.window_size().second, m.second, 0.0, 0.0, 0.0);

    win.draw_line(m.first, 0, m.first, 10, 0.0, 0.0, 0.0);
    win.draw_line(m.first, win.window_size().second - 10, m.first, win.window_size().second, 0.0, 0.0, 0.0);

    // Ausgabe Maus Koordinaten
    std::string text = "mouse position: (" + std::to_string(m.first) + ", " + std::to_string(m.second) + ")";
    win.draw_text(10, 5, 35.0f, text);

    // Aufgabe 2.12, sind nicht im Vektor, damit noch zu erkennen
    rectangle1.draw(win);
    rectangle2.draw(win, color_violet);
    circle1.draw(win);
    circle2.draw(win, color_green);
    
    // Aufgabe 2.13
      Vec2 mouse_pos(m.first, m.second);
      // vector.size() gibt unsigned zurück, sonst Vergleich zwischen signed/unsigned
      for(unsigned i = 0; i < vec_rec.size(); i++)
      {
          if(vec_rec[i].is_inside(mouse_pos))
          {
              vec_rec[i].draw(win, color_blue);
          } else
          {
              vec_rec[i].draw(win);
          }
      }
          
      for(unsigned i = 0; i < vec_circ.size(); i++)
      {
          if(vec_circ[i].is_inside(mouse_pos))
          {
              vec_circ[i].draw(win, color_blue);
          } else
          {
              vec_circ[i].draw(win);
          }
      }
      
    win.update();
  }

  return 0;
}
