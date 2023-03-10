#include <iostream>
using namespace std;

void drinkCoffe(char size);

int main() {

	char x;
	int caffine;
	cout << "u watn coffe large, medium,, or smal" << endl;
	cin >> x;

	if (x == 'L')
		caffine == 180;

	else if (x == 'M')
		caffine == 145;

	else if (x == 'S')
		caffine == 109;

	else
		cout << "guat is that" << endl;

	cout << "you got a ", drinkCoffe(x); // kinda forgot how returns are supposed to work 
	

}

void drinkCoffe(char size) {
	if (size == 'L')
		cout << "large coffee" << endl;

	else if (size == 'M')
		cout << "medium coffee" << endl;

	else if (size == 'S')
		cout << "small" << endl;

	else
		cout << "no coffee" << endl;
	
	//return caffine?? 
	//lowk forgot how return are supposed to work 
		


}
