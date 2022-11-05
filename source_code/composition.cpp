// composition.cpp
//

#include<iostream>
using namespace std;

class Zymari{
private:
	string ingredient1;
	string ingredient2;
	string ingredient3;

public:
	Zymari() {
		ingredient1 = "alevri";
		ingredient2 = "alati";
		ingredient3 = "nero";
	
		cout << "Zymari's constructor activated\n";

	}
	~Zymari() {
		cout << "Zymari's destructor activated\n";
	}

};

class Saltsa {
private:
	string ingredient1;
	string ingredient2;
	string ingredient3;

public:
	Saltsa() {
		ingredient1 = "tomatoxymos";
		ingredient2 = "alati";
		ingredient3 = "ladi";

		cout << "Saltsa's constructor activated\n";
	}

	~Saltsa() {
		cout << "Saltsa's destructor activated\n";
	}
};

class Pizza {
private:
	Zymari part1;
	Saltsa part2;
	string cheese;

public:
	Pizza(string ch) {
		cheese = ch;
		cout << "Pizza's constructor activated\n";
	}

	~Pizza() {
		cout << "Pizza's destructor activated\n";
	}
};

int main()
{
	Pizza margarita("mozzarela");
	return 0;
}
