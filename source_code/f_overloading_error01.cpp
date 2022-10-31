// overloading_error01.cpp
//

#include <iostream>

int sum() { return 1; }
float sum() { return 1.0; }

// redefinition attempt
// compiler error


int main(){
    // ...
    return 0;
}
