#ifndef POINTERS_H
#define POINTERS_H
#include <string>

void readWrite();

void answerIntegerQuestions(const int num, bool * isMultiple, bool * isSumEven, bool * isPrime);

bool primeCheck(int n);

void initializeLottery();

bool findWinningLotteryTicket(const int winningTicketNum, const int * playerNumbers, const int numPlayerNumbers[10]);

#endif
