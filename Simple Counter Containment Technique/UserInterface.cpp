#include <iostream>
#include "CounterClass.cpp" // The counter is the counting functions
#include <string>
using namespace std;

class UserInterface {
private: 
	Counter* aCounter;
	MemoryCounter* mCounter;
	int menuChoices;
public:
	UserInterface(Counter* c, MemoryCounter* m) {
		aCounter = c;
		mCounter = m;
		menuChoices = 0;
	}
	
	
	//Go through and display all the choices a user can select
	void displayChoices() {
		string choices[] = {
			"1...Increment Counter",
			"2...Decrement Counter",
			"3...Reset Counter",
			"4...Add Memory",
			"5...Reset Memory",
			"6...Quit"
		};
		for (int i = 0; i < 6; i++) {
			cout << choices[i] << endl;
		}
	}

	void getUserInput() {
		cin >> menuChoices;
		/*
		if (menuChoice < 1 || menuChoice > 6) {
			cout << "please select one choice at a time!" << endl;
		}
		*/
	}

	void executeSelection() {
		while (menuChoices != 6) {
			displayChoices();
			getUserInput();
			switch (menuChoices) {
			case 1: 
				aCounter->incrementCount();
				displayOutput();
				break;
			case 2:
				aCounter->decrementCount();
				displayOutput();
				break;
			case 3:
				aCounter->resetCount();
				displayOutput();
				break;
			case 4:
				mCounter->addMemory();
				displayOutput();
				break;
			case 5:
				mCounter->resetMemory();
				displayOutput();
				break;
			case 6: 
				cout << "Program Ending" << endl;
				break;
			}
		}
	}

	void displayOutput() {
		cout << "Current Count: " << to_string(aCounter->returnCount()) << endl;
		cout << "Current Memory Value: " << to_string(mCounter->returnMemoryCount()) << endl;

	}

};
