// operator_overloading_04.cpp
//

#include<iostream>
using namespace std;

class Portofoli {
private:
	int euros, dollars, pounds;
public:
	Portofoli(int a1 = 0, int a2 = 0, int a3 = 0) { euros = a1; dollars = a2; pounds = a3; }

	// overloading "+" operator
	Portofoli operator + (Portofoli const& input) {
		Portofoli temp;
		temp.euros = euros + input.euros;
		temp.dollars = dollars + input.dollars;
		temp.pounds = pounds + input.pounds;
		return temp;
	}
	void print_content() { 
		cout << euros << " euros\n" << dollars 
			<< " dollars\n" << pounds << " pounds\n"; 
	}
};

int main()
{
	Portofoli m1(20, 20, 20), m2(10, 5);
	Portofoli m3 = m1 + m2;
	m3.print_content();

	return 0;
}
