#include <iostream>

bool PlayGameAtLevel(int Difficulty)
{
	// Display introductory text
	std::cout << "\n\"Ok so moving on to level " << Difficulty << " of the game you'll be looking for 3 numbers which...\n";

	// Declare constants
	const int NumberA = rand() % Difficulty + Difficulty;
	const int NumberB = rand() % Difficulty + Difficulty;
	const int NumberC = rand() % Difficulty + Difficulty;
	
	// Get summary values
	const int NumbersSum = NumberA + NumberB + NumberC;
	const int NumbersProduct = NumberA * NumberB * NumberC;

	// Display summary values
	std::cout << "...add up to " << NumbersSum << "...\n";
	std::cout << "...and mutiply up to "<< NumbersProduct << "\"\n";

	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;

	const int GuessSum = GuessA + GuessB + GuessC;
	const int GuessProduct = GuessA * GuessB * GuessC;

	const bool bHasWonLevel = GuessSum == NumbersSum && GuessProduct == NumbersProduct;

	std::cout << (bHasWonLevel ? "\"That is correct!\"" : "\"Unfortunately that is incorrect.\"") << std::endl;

	return bHasWonLevel;
}

void PrintIntroduction()
{
	std::cout << "\n\n\"Welcome to Letters & Numbers, where the equasions roam free and the thesaurus is not a dinosaur.\"\n";
	std::cout << "*whispers from offstage*\n";
	std::cout << "\"...well then, welcome to Just Numbers, as we are apparently low on stock in the alphabetical department.\"\n";
	std::cout << "\"Entering the world of numbers now, we'll select our first three of the show.\"\n";
}

int main()
{

	// Display introduction
	PrintIntroduction();

	// Start the game loop
	int LevelDifficulty = 1;
	const int MaxDifficulty = 5;
	while (LevelDifficulty <= MaxDifficulty)
	{
		// Run the level
		if (PlayGameAtLevel(LevelDifficulty))
		{
			++LevelDifficulty;
		}

		// Clean up the input stream
		std::cin.clear();
		std::cin.ignore();
	}
	std::cout << "\"Nice job and thank you for playing!\"\n";

	return 0;
}