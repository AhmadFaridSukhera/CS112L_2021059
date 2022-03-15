#include<iostream>
using namespace std;

class Heater {	
public:
		int temperature;
		int c;
		int w;

	Heater(){
			temperature = 15;
			w = 5;
			c = -5;
	}
	
	void warmer() {
		temperature = temperature + w;
		
		
}
	void cooler() {
		temperature = temperature + c;

	}
	~ Heater(){

	}
};


int main() {
	Heater y;

	cout << "-----Wlecome to the main menu-----" << endl << endl;
	cout << "If you want to know the current temperature Press Y : " << endl;
	cout << "If the temperature is warmer then Press W " << endl;
	cout << "If the temperature is colder Press C " << endl << endl;
	cout << "Enter an option : ";

	char x;
	do {
		cin >> x;

		switch (x) {
		case 'y':
			cout << "The current temperature is : " << y.temperature << endl << endl;
			break;
		case 'Y':
			cout << "The current temperature is : " << y.temperature << endl << endl;

			break;
		case'w':
			y.warmer();
			cout << "The new temperature is: " << y.temperature << endl;
			

			break;
		case 'W':
			y.warmer();
			cout << "The new temperature is: " << y.temperature << endl;

			break;
		case 'c':
			y.cooler();
			cout << "The new temperature is: " << y.temperature << endl;

			break;
		case'C':
			y.cooler();
			cout << "The new temperature is: " << y.temperature << endl;

			break;

		}
	} while (1);
	
}