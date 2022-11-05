// inheritance01.cpp
//

#include <iostream>

using namespace std;

// Base class
class Shape {
protected:
    unsigned short int width;
    unsigned short int height;

public:
    void set_width(int w) {
        width = w;
    }
    void set_height(int h) {
        height = h;
    }
};

// Derived class #01
class Rectangle : public Shape {
public:
    int emvadon() {
        return (width * height);
    }
};


// Derived class #02
class Triangle : public Shape {
public:
    int emvadon() {
        return (width * height / 2);
    }
};


int main(void) {
    Rectangle r1;
    Triangle tr;

    r1.set_width(20);
    r1.set_height(10);
    cout << "Embadon of rectangle is: " << r1.emvadon() << endl;

    tr.set_width(20);
    tr.set_height(10);
    cout << "Embadon of triangle is: " << tr.emvadon() << endl;

    retur
