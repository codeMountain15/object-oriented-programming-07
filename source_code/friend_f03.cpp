// friend_f03.cpp 
// with friend function of
// class member

#include <iostream>
using namespace std;

class Hippo;

class Dentist {
    // ...
public:
    void teeth_brushing(Hippo*);
};

class Hippo {
private:
    bool clean_teeth;

public:
    Hippo(bool d) : clean_teeth(d) {};
    void say() {
        if (clean_teeth) cout << "I'm a hippopotamus with clean teeth!!\n";
        else cout << "I'm a hippopotamus and I have to go to the dentist...\n";
    }
    friend void Dentist::teeth_brushing(Hippo*);
};

void Dentist::teeth_brushing(Hippo* input) {
    //access to private member
    cout << "I'm the dentist and I'm brushing hippo's teeth\n";
    if (input->clean_teeth != true) { input->clean_teeth = true; }
}

int main() {
    
    Hippo h1(false);
    Dentist Mitsos;
    
    h1.say();
    Mitsos.teeth_brushing(&h1); // the hippo
    h1.say();

    return 0;
}
