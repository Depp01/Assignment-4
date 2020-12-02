// لتنظيم المطلوب وسهولة التعديل"Header" عمل ملف 
// "class.cpp & main.cpp"لايحتاج تعليق وشرح لكل سطر فهو مجرد وسيط بين 
#ifndef class_H
#define class_H
class Shapes
{
protected:
int length,width, height, redius;
float pi=3.14;
public:
void setlength();
void setwidth();
void setheight();
void setredius();
virtual int Area();
void printArea();
virtual int Perimeter();
void printPerimeter();
};
class Ellipse : public Shapes{
    public:
    int Ellipsearea();
    int EllipsePerimeter();
};
class Circle : public Ellipse{
    public:
    int Cirarea();
    int CirPerimeter();
};
class Polygon : public Shapes{
    public:
    int Polyarea();
    int PolyPerimeter();
};
class Square : public Polygon{
    public:
    int Squarea();
    int SquPerimeter();
};
class Rectangle : public Polygon{
    public:
    int Rectarea();
    int RectPerimeter();
};
class Triangle : public Polygon{
    public:
    int Triarea();
    int TriPerimeter();
};
#endif