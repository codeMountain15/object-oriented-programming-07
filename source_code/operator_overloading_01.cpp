// operator_overloading_01.cpp
//

#include <iostream>

using namespace std;

class Tiny_Class
{
private:
    int my_id;

public:
    Tiny_Class(int ipt = 0) { my_id = ipt; } // constructor
    int get_id() { return my_id; }

    // the function below is called when the "+" operator is
    // implemented between Tiny_Class objects

    Tiny_Class operator + (Tiny_Class const& input_object) {
        Tiny_Class result_object;
        result_object.my_id = my_id + input_object.my_id;

        return result_object;
    }
};

int main()
{
    Tiny_Class a1(5), a2(6), a3;

    a3 = a1 + a2;

    cout << a3.get_id();

    return 0;
}
