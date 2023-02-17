#ifndef POINTERS_H
#define POINTERS_H
#include <string>

void readWrite();

void answerIntegerQuestions(const int num, bool * isMultiple, bool * isSumEven, bool * isPrime);

bool primeCheck(int n);

void initializeLottery();

bool findWinningLotteryTicket(const int winningTicketNum, const int * playerNumbers, const int numPlayerNumbers[10]);

std::string * createWordsArray(std::ifstream& inFile, const int size);

void generateSentence(std::string * sentence,
		const std::string * articlesArr, const int articlesSize,
		const std::string * nounsArr, const int nounsSize,
		const std::string * verbsArr, const int verbsSize, 
		const std::string * prepsArr, const int prepsSize);

#endif
