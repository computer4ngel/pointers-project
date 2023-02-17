#include "pointers.h"
#include <iostream>
#include <string>
#include <fstream>


int main() {

readWrite();

initializeLottery();

std::ifstream inputFile;
inputFile.open("words.txt");
if(!inputFile.good()) {
	std::cout << "File failed to open. Terminating..";
	return 0;
}

std::string scrap;
int arrLength;

std::string articles[arrLength], nouns[arrLength], verbs[arrLength], prepositions[arrLength];

std::string *pArticles;
std::string *pNouns;
std::string *pVerbs;
std::string *pPrep;

//articles
inputFile >> scrap;
inputFile >> arrLength;

pArticles = createWordsArray(inputFile, arrLength);

//nouns
inputFile >> scrap;
inputFile >> arrLength;

pNouns = createWordsArray(inputFile, arrLength);

//verbs
inputFile >> scrap;
inputFile >> arrLength;

pVerbs = createWordsArray(inputFile, arrLength);

//prepositions
inputFile >> scrap;
inputFile >> arrLength;

pPrep = createWordsArray(inputFile, arrLength);


//had trouble with task 3, not sure why each sentence structure variable returns the same
//types of words relative to sentence structure, leaving the cout commands to illustrate
//the issue.
for(int i = 0; i < 10; i++) {
	int j;
	
	j = rand() % 5;
	std::cout << pArticles[j];

	j = rand() % 5;
	std::cout << pNouns[j];

	j = rand() % 5;
	std::cout << pVerbs[j];

	j = rand() % 5;
	std::cout << pPrep[j];

	j = rand() % 5;
	std::cout << pArticles[j];

	j = rand() % 5;
	std::cout << pNouns[j];
	
}

}
