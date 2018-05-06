#ifndef mat2_hpp
#define mat2_hpp

struct Mat2{
    float x1;
    float x2;
    float y1;
    float y2;
    Mat2();
    Mat2(float x1, float x2, float y1, float y2);
    Mat2& operator*=(Mat2 const& m);
};

#endif 
