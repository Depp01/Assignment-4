/*
My name: Mohialdeen Alderdery
class: seconde year class
Department: computer engineering
*/
#include <iostream>
using namespace std;
#include "class.h"
#include <string>
 

int main(){
    Ellipse elli;
    Circle circ;
    Polygon poly;
    Square squa;
    Rectangle rect;
    Triangle tria;

    Shapes * p1 = &elli; // "Ellipse"وربطه بعنوان الكائن الخاص بالكلاس "Shapes"تعريف المؤشر الاول من الكلاس 
    Shapes * p2 = &poly; // "Polygon"وربطه بعنوان الكائن الخاص بالكلاس "Shapes"تعريف المؤشر الثاني من الكلاس
    Ellipse * p3 = &circ; // "Circle"وربطه بعنوان الكائن الخاص بالكلاس "Ellipse"تعريف المؤشر الثالث من الكلاس
    Polygon * p4 = &squa; // "Square"وربطه بعنوان الكائن الخاص بالكلاس "Polygon"تعريف المؤشر الرابع من الكلاس
    Polygon * p5 = &rect;// "Rectangle"وربطه بعنوان الكائن الخاص بالكلاس "Polygon"تعريف المؤشر الخامس من الكلاس
    Polygon * p6 = &tria; // "Triangle"وربطه بعنوان الكائن الخاص بالكلاس "Polygon"تعريف المؤشر السادس من الكلاس

cout<<"Enter the attributes of the Ellipse"<<endl; // ادخال خواص الشكل البيضاوي لحساب مساحته ومحيطه وطباعتهما
    p1->setheight();
    p1->setwidth();
    p1->setredius();
    p1->printArea();
    p1->printPerimeter();
cout<<"Enter the attributes of the Polygon"<<endl; // ادخال خواص الخماسي لحساب مساحته ومحيطه وطباعتهما
    p2->setheight();
    p2->setwidth();
    p2->setredius();
    p2->printArea();
    p2->printPerimeter();
cout<<"Enter the attributes of the Circle"<<endl; // ادخال خواص الدائرة لحساب مساحتها ومحيطها وطباعتهما
    p3->setredius();
    p3->printArea();
    p3->printPerimeter();
cout<<"Enter the attributes of the Square"<<endl; // ادخال خواص المربع لحساب مساحته ومحيطه وطباعتهما
    p4->setheight();
    p4->printArea();
    p4->printPerimeter();
cout<<"Enter the attributes of the Rectangle"<<endl; // ادخال خواص المستطيل لحساب مساحته ومحيطه وطباعتهما
    p5->setheight();
    p5->setwidth();
    p5->printArea();
    p5->printPerimeter();
cout<<"Enter the attributes of the Triangle"<<endl; // ادخال خواص المثلث لحساب مساحته ومحيطه وطباعتهما
    p6->setwidth();
    p6->setheight();
    p6->printArea();
    p6->printPerimeter();

cout << "ELLIPSE :"<<endl; // طباعة مساحة ومحيط الشكل البيضاوي
    p1->printArea();
    p1->printPerimeter();

cout << "\nPolygon :"<<endl; //طباعة مساحة ومحيط الخماسي
    p2->printArea();
    p2->printPerimeter();

cout << "\nCircle :"<<endl; //طباعة مساحة ومحيط الدائرة
    p3->printArea();
    p3->printPerimeter();

cout << "\nSquare :"<<endl; //طباعة مساحة ومحيط المربع
    p4->printArea();
    p4->printPerimeter();

cout << "\nRectangle :"<<endl; //طباعة مساحة ومحيط المستطيل 
    p5->printArea();
    p5->printPerimeter();

cout << "\nTriangle :"<<endl; //طباعة مساحة ومحيط المثلث
    p6->printArea();
    p6->printPerimeter();
}
