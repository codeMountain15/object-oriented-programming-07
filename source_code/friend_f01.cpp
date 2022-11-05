// friend_f01.cpp 
//

#include <iostream>
using namespace std;

class Hippo {
    string name;
    bool gender; // 0 for female, 1 for male
    unsigned short int age;
    bool clean_teeth;

public:
    // void eat();
    // void sleep();
    void speak() { 
        cout << "My teeth are ";
        if (clean_teeth) cout << "clean!\n";
        else cout << "not clean...\n";
    };

    friend void teeth_brushing(Hippo*);

    Hippo(string a, bool b, unsigned short int c, bool d) : name(a), gender(b), age(c), clean_teeth(d) {};
};


// defining friend function
void teeth_brushing(Hippo * input) {
    
    //access to private member
    cout << "I'm brushing my teeth.\n";
    if (input->clean_teeth != true) { input->clean_teeth = true; }
}

int main() {
    
    Hippo h1("Takis", 1, 5, false);

    h1.speak();
    teeth_brushing(&h1);
    h1.speak();

    return 0;
}
