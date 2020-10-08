#include <ctime>
#include <iostream>
#include "StandardDeck.h"

void Pause() {
	std::cout << "\nPress \'ENTER\' to continue..." << std::endl;
	std::cin.ignore();	fflush(stdin);
}

int main()
{
	/*	Your main() function should demonstrate each of the features of the StandardDeck class*/
	srand(time(nullptr)); // seed the random number generator

	// create a deck
	StandardDeck standard_deck;
	
	// Show the deck object as initialized
	Pause();
	
	// Draw the next card and show it
	standard_deck.DrawNextCard();

	// Draw a random card and show it
	standard_deck.DrawRandomCard();
	
	// Show the deck with the remaining cards
	standard_deck.CardsRemaining();

	// Shuffle the deck and show the result
	standard_deck.Shuffle();

	// Reset the deck and show the result
	
}


