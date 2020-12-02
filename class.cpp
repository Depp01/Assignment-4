#include <iostream>
#include "class.h"
using namespace std;

class Shapes{     //تعريف كلاس لكي نخزن فيه خواص الأشكال
    protected:  //جعل الخواص private يجعل من غير الممكن الوصول اليها من خارج الكلاس
    
    int length,width, height, redius;//تعريف خواص الكلاس
    float pi= 3.14;// تعريف قيمة الثابت 
    
    public: //جعل الدوال "public" لكي نتمكن من استخدامها في أي موضع نريد خارج الكلاس
    void setlength(){ //دالة مهمتها ادخال قيمة للطول
        cin>> length;
    } 
    void setwidth(){ //دالة مهمتها ادخال قيمة للعرض
        cin>> width;
    }        
    void setheight(){ //دالة مهمتها ادخال قيمة للأرتفاع
        cin>> height;
    }        
    void setredius(){ //دالة مهمتها ادخال قيمة للقطر
        cin>> redius;
    }  

    virtual int Area()=0 // تعريف دالة للمساحة
    virtual printArea(){ //دالة مهمتها طباعة ناتج المساحة
        cout<< this -> Area() <<endl;
    }             
    virtual int Perimeter()=0 // تعريف دالة للمحيط
    void printPerimeter(){ // دالة مهمتها طباعة ناتج المحيط
        cout<< this -> Perimeter<<endl;
    }
};
class Ellipse : public Shapes{ // "Shapes" تعريف كلاس للشكل البيضاوي يرث وراثة هرمية من الكلاس 
    public:
    int Ellipsearea(){
        cout<< "Ellipse Area= ";
        return (pi * width * height); // ارجاع مساحة الشكل البيضاوي
    }
    int EllipsePerimeter(){
        cout<<"Ellipse Perimeter= ";
        return (pi*(redius*redius)); // ارجاع محيط الشكل البيضاوي
    }
};
class Circle : public Ellipse{ // "Ellipse"تعريف كلاس للدائرة يرث وراثة متتالية من الكلاس 
    public:
    int Cirarea(){
        cout<< "Circle Area= ";
        return (pi/4 *(redius * redius)); // ارجاع مساحة الدائرة
    }
    int CirPerimeter(){
        cout<<"Circle Perimeter= ";
        return (pi*redius); // ارجاع محيط الدائرة
    }
};

class Polygon : public Shapes{ // "Shapes" تعريف كلاس للخماسي يرث وراثة هرمية من الكلاس
    public:
    int Polyarea(){
        cout<< "Polygon Area= ";
        return (redius * height *width); // ارجاع مساحة الخماسي
    }
    int PolyPerimeter(){
        cout<<"Polygon Perimeter= ";
        return (width * height); // ارجاع محيط الخماسي
    }
};

class Square : public Polygon{ // "Polygon" تعريف كلاس خاص بالمربع يرث وراثة هرمية من الكلاس
    public:
    int Squarea(){
        cout<< "Square Area= ";
        return (height *height); // ارجاع مساحة المربع
    }
    int SquPerimeter(){
        cout<<"Square Perimeter= ";
        return (height*4); // ارجاع محيط المربع
    }
};

class Rectangle : public Polygon{ // "Polygon" تعريف كلاس خاص بالمستطيل يرث وراثة هرمية من الكلاس
    public:
    int Rectarea(){
        cout<< "Rectangle Area= "; // ارجاع مساحة المستطيل
        return (height *width); 
    }
    int RectPerimeter(){
        cout<<"Rectangle Perimeter= ";
        return (2*(height*width)); // ارجاع محيط المستطيل
    }
};

class Triangle : public Polygon{// "Polygon" تعريف كلاس خاص بالمثلث يرث وراثة هرمية من الكلاس}
    public:
    int Triarea(){
        cout<< "Triangle Area= ";
        return (width * height/2); // ارجاع مساحة المثلث
    }
    int TriPerimeter(){
        cout<<"Triangle Perimeter= ";
        return (2*(height*2 + width)); // ارجاع محيط المثلث
    }
};

