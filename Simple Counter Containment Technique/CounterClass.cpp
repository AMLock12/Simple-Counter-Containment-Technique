#pragma once
#include <iostream>
using namespace std;

class Counter {
private:
	int countValue;

public:
	Counter() {
		countValue = 0;
		
	}
	void incrementCount() {
		countValue++;
	}

	void decrementCount() {
		countValue--;
	}

	void resetCount() {
		countValue = 0;
	}

	int returnCount() {
		return countValue;
	}
};


// composite class - class that has some of its data members instances of other clesses
// In this case the composite class is MemoryCounter becasuse it has a Counter instance for holding the current count
class  MemoryCounter {
private:
	int memoryValue;
	Counter* counter;
	

public:
	/*
	//copy constructor
	MemoryCounter(MemoryCounter& myMemory, Counter* myCounter) {
		memoryValue = myMemory.memoryValue;
		counter = myCounter;
		*this = myMemory;
	}
	*/
	MemoryCounter() {
		memoryValue = 0;
	}

	MemoryCounter(Counter& myCounter) {
		*this = myCounter;

	}
	int getmemorycounter() {

		return memoryValue;
	}
	void addMemory() {
		memoryValue = memoryValue + counter->returnCount();
	}
	void resetMemory() {
		memoryValue = 0;
	}
	int returnMemoryCount() {
		return memoryValue;
	}
};

