// friend_f04.cpp 
// with the same friend
// function in two classes

#include <iostream>
using namespace std;

class Croc;

class Hippo {
private:
    int weight;
    //...

public:
    Hippo(int w) : weight(w) {};
    friend int scale(Hippo*, Croc*);
};
class Croc {
private:
    int weight;
    //...

public:
    Croc(int w) : weight(w) {};
    friend int scale(Hippo*, Croc*);
};

int scale(Hippo* h, Croc* c) {
    return h->weight + c->weight;
}



int main() {
    
    Hippo h1(200);
    Croc c1(80);
    
    cout << "Total weight: " << scale(&h1, &c1) << endl;

    return 0;
}
