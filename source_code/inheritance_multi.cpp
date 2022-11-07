// inheritance_multi.cpp
//

#include<iostream>
using namespace std;

class Mother
{
public:
	Mother() { cout << "Mother's constructor activated\n"; }
	~Mother() { cout << "Mother's destructor activated\n"; }

};

class Father
{
public:
	Father() { cout << "Father's constructor activated\n"; }
	~Father() { cout << "Father's destructor activated\n"; }
};

class Child : public Mother, public Father // Note the order!
{
public:
	Child() { cout << "Child's constructor activated\n"; }
	~Child() { cout << "Child's destructor activated\n"; }
};

int main()
{
	Child c;
	return 0;
}
