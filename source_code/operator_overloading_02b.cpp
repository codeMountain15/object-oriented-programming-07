// operator_overloading_03.cpp
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

    // the function below is called when the
    // "--" postfix operator is implemented

    Tiny_Class operator -- (int) {
        Tiny_Class result_object;
        result_object.my_id = my_id--;

        return result_object;
    }
};

int main()
{
    Tiny_Class a1(5);

    a1--;

    cout << a1.get_id();

    return 0;
}
