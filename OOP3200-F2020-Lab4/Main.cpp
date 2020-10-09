/* OOP 3200 - C++ Lab 5 - Collections
 * Ryan Clayson and Daniel Hinbest
 * 100558837		100717231
 * October 11, 2020
 */
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
	std::cout << "Deck is Created";
	
	// Show the deck object as initialized
	standard_deck.ShowDeck();
	Pause();
	
	// Draw the next card and show it
	std::cout << "Draw Next Card";
	standard_deck.DrawNextCard();
	Pause();

	// Draw a random card and show it
	std::cout << "Draw Random Card";
	standard_deck.DrawRandomCard();
	Pause();
	
	// Show the deck with the remaining cards
	std::cout << "Remaining Cards";
	standard_deck.CardsRemaining();
	Pause();

	// Shuffle the deck and show the result
	std::cout << "Shuffling Deck";
	standard_deck.Shuffle();
	standard_deck.ShowDeck();
	Pause();

	// Reset the deck and show the result
	std::cout << "Reset Deck";
	standard_deck.Initialize();
	standard_deck.ShowDeck();
	
}//end of main

