#include<iostream>
using namespace std;

class Pizza {
private:
	int toppings;
	int price;
	bool isBaked;

public:
	Pizza();
	Pizza(int t, int p);
	void printInfo();
	void addTopping();
	void calcPrice(int t);
	void bake();

};


int main() {
	//Pizza one()
}


Pizza::Pizza() {
	toppings = 0;
	price = 0;
	isBaked = false;

}

Pizza::Pizza(int t, int p) {
	toppings = t;
	price = p;
	isBaked = true;

}

void Pizza::calcPrice() { }
