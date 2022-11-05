// inheritance01c.cpp
//

#include <iostream>

using namespace std;

// Base class
class Shape {
private:
    unsigned short int width;
    unsigned short int height;

public:
    Shape(unsigned short int w, unsigned short int h) : width(w), height(h) {};
    unsigned short int get_width() const { return width; }
    unsigned short int get_height() const { return height; };
};

// Derived class
class Triangle : public Shape {
private:
    unsigned short int a_variable;

public:
    Triangle(unsigned short int a, unsigned short int b, unsigned short int c) : Shape(a, b) {
       a_variable = c;
    }

    int emvadon() {
        // return (width * height / 2); // error
        return (get_width() * get_height() / 2);
    }
};


int main() {
    
    Triangle tr(20, 10, 5);

    cout << "Embadon of triangle is: " << tr.emvadon() << endl;

    return 0;
}
