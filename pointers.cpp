#include <iostream>
#include <string>
#include <fstream>
#include "pointers.h"
#include <cstdlib>


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

	int numReserve;
		while(inputFile >> number) {
			//reserve number from change
			numReserve = number;
			//assess if prime
			prime = primeCheck(number);
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
			//assess if sum of digits is odd or even
			int sum = 0;
		    while (number != 0) {
				sum = sum + number % 10;
				number = number / 10;
			}
			if(sum % 2 == 0) {
				sumEven = true;
			}
			else {
				sumEven = false;
			}
			answerIntegerQuestions(numReserve, &mult, &sumEven, &prime);
		}	
	}
}

void answerIntegerQuestions(const int num, bool * isMultiple, bool * isSumEven, bool * isPrime) {
	std::cout << "Number: " << num << std::endl;
	if(*isMultiple == 0) {
		std::cout << "Multiple of 7,11,13: " << "No" << std::endl;
	}
	else {
		std::cout << "Multiple of 7,11,13: " << "Yes" << std::endl;
	}
	if(*isSumEven == 0) {
		std::cout << "Is the sum of the digits even: " << "No" << std::endl;
	}
	else {
		std::cout << "Is the sum of the digits even: " << "Yes" << std::endl;
	}
	if(*isPrime == 0) {
		std::cout << "Is it prime: " << "No" << std::endl;
	}
	else {
		std::cout << "Is it prime: " << "Yes" << std::endl;
	}
	std::cout << "\n" << std::endl;
}

bool primeCheck(int number) {

if(number < 2) return false;
if(number == 2) return true;
if(number % 2 == 0) return false;
	for(int i=3; (i*i)<=number; i+=2){
		if(number % i == 0 ) return false;
	}
    return true;
}
void initializeLottery() {
int npNums = 10;

int nArray[npNums] = {13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};

srand(time(0));
int winNum;
winNum = rand () % 9;
winNum = nArray[winNum];


int playerNums = 0;
int *pPlayerNums = &playerNums;
std::cout << "Please enter a 5 digit lottery number: ";
std::cin >> playerNums;
std::cin.ignore(0);

findWinningLotteryTicket(winNum, &playerNums, nArray);

}

bool findWinningLotteryTicket(const int winningTicketNum, const int * playerNumbers, const int numPlayerNumbers[10]) {

bool win;

for(int i = 0; i<9; ++i) {
	if(*playerNumbers == numPlayerNumbers[i]){
		win = true;
		std::cout << "Win!" << std::endl;
		break;
	}
	else {
		win = false;
	}
}
	if (win == false) {
		std::cout << "Loss." << std::endl;
	}
	else {
		return 1;
	}

return 0;
}

