// f_overloading02.cpp
//

#include <iostream>
using namespace std;

void print(const char* ch) { cout << ch; }
void print(int a) { cout << a; }

int main(){
    const char *str = "codeMountain"; 
    int num = 15;

    print(str);
    print(num);

    return 0;
}
