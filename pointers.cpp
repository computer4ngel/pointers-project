#include <iostream>
#include <string>
#include <fstream>
#include "pointers.h"

void readWrite() {
//opens numbers.txt
	std::ifstream inputFile;
	inputFile.open("numbers.txt");
//checks if numbers.txt was opened properly	
	if(inputFile.fail()) {
		std::cout << "File opening failed, terminating." << std::endl;
		exit(-1);
	}
//continues working with numbers.txt
	else {
	int number;

	bool mult;
	bool *pMult = &mult;

	bool sumEven;
	bool *pEven = &sumEven;

	bool prime;
	bool *pPrime = &prime;
		while(inputFile >> number) {
			//assess if multiple of 7,11, or 13
			if(number % 7 == 0) {
				mult = true;
			}
			else if(number % 11 == 0) {
				mult = true;
			}
			else if(number % 13 == 0) {
				mult = true;
			}
			else {
				mult = false;
			}
			//assess of sum of digits is odd or even

		}	
	}
}

void answerIntegerQuestions(const int num, bool * isMultiple, bool * isSumEven, bool * isPrime) {

}
