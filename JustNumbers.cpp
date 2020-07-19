#include <iostream>

int main()
{
	// Display introductory text
	std::cout << "\"Welcome to Letters & Numbers, where the equasions roam free and the thesaurus is not a dinosaur.\"" << std::endl;
	std::cout << "*whispers from offstage*" << std::endl;
	std::cout << "\"... well then, welcome to Just Numbers, as we are apparently low on stock in the alphabetical department.\"" << std::endl;
	std::cout << "\"Entering the world of numbers now, we'll select our first three of the show.\"" << std::endl;

	// Declare constants
	const int NumberA = 4;
	const int NumberB = 3;
	const int NumberC = 2;
	
	// Get summary values
	const int NumbersSum = NumberA + NumberB + NumberC;
	const int NumbersProduct = NumberA * NumberB * NumberC;

	// Display summary values
	std::cout << std::endl << "You'll be looking for three (3) numbers which..." << std::endl;
	std::cout << "add up to " << NumbersSum << std::endl;
	std::cout << "and mutiply up to "<< NumbersProduct << std::endl;

	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;
	std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == NumbersSum && GuessProduct == NumbersProduct)
	{
		std::cout << "You win!";
	}
	else
	{
		std::cout << "You lose!";
	}

	std::cout << std::endl;

	return 0;
}