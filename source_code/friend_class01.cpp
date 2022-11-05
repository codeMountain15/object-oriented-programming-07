// friend_class01.cpp
//

#include<iostream>
using namespace std;

class Hippo{
private:
	int weight;
	bool mouth_is_full;
	// ...
public:
	// ...
	Hippo(int a) : weight(a) { mouth_is_full = true; };
	friend class tiny_bird; // = a friend class
};

class tiny_bird{
private:
	// ...
public:
	void clean_hippo_teeth(Hippo& h)
	{
		if (h.mouth_is_full) {
			h.mouth_is_full = false;
			cout << "I have just had my brakefast!\n";
		}
	}
};

int main(){
	Hippo h1(300);
	tiny_bird tb;
	
	tb.clean_hippo_teeth(h1);

	return 0;
}
