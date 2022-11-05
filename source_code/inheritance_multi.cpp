// inheritance_multi.cpp
//

#include<iostream>
using namespace std;

class Mother
{
public:
	Mother() { cout << "Mother's constructor activated\n"; }
};

class Father
{
public:
	Father() { cout << "Father's constructor activated\n"; }
};

class Child : public Mother, public Father // Note the order!
{
public:
	Child() { cout << "Child's constructor activated\n"; }
};

int main()
{
	Child c;
	return 0;
}
