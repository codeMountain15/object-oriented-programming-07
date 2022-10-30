// operator_overloading_05.cpp
//

#include<iostream>
using namespace std;

class Portofoli {
private:
	int euros, dollars, pounds;
public:
	Portofoli(int a1 = 0, int a2 = 0, int a3 = 0) { euros = a1; dollars = a2; pounds = a3; }

	// overloading "[]" operator
	int& operator [] (int);
};

int& Portofoli::operator [] (int x) {
	
	switch (x) {
	case 0:
		return euros;
		break;
	case 1:
		return dollars;
		break;
	case 2:
		return pounds;
	}	
}

int main(){
	Portofoli m1(10, 20, 30);
	
	cout << m1[0] << endl << m1[1] 
		<< endl << m1[2] << endl;

	return 0;
}
