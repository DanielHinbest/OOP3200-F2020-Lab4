/* OOP 3200 - C++ Lab 5 - Collections
 * Ryan Clayson and Daniel Hinbest
 * 100558837		100717231
 * October 11, 2020
 */
#include "StandardDeck.h"
#include <ctime>
#include <iostream>

StandardDeck::StandardDeck():createDeck(false)
{
	Initialize();
}

void StandardDeck::Initialize()
{
	PlayingCard cards;
	int suit = 0, number = 1;

	if (createDeck != 0)
	{
		totalCards.clear();
	}

	for (int i = 0; i <= 52; i++)
	{
		cards = PlayingCard(number, suit, i, true);
		totalCards.push_back(cards);
		number++;
		if (number == 14)
		{
			suit++;
			number = 1;
		}
	}createDeck = true;
}

StandardDeck::~StandardDeck()
= default;

StandardDeck::StandardDeck(StandardDeck& other_deck)
{
	SetDeck(other_deck.totalCards);
}

StandardDeck& StandardDeck::operator=(StandardDeck& other_deck)
{
	SetDeck(other_deck.totalCards);
	return (*this);
}

void StandardDeck::DrawNextCard()
{
	//return PlayingCard();
}

int StandardDeck::CardsRemaining()
{
	return sizeof(totalCards) / 16;
}

void StandardDeck::DrawRandomCard()
{
	int randomValue;
	srand(time(NULL));

	randomValue = rand();
	std::cout << totalCards[randomValue].GetSuit() << " " << totalCards[randomValue].GetRank();
}

void StandardDeck::Shuffle()
{
	int numbers = totalCards.size();
	int randomValueOne, randomValueTwo;
	srand(time(NULL));

	for (int i = 0; i <= totalCards.size(); i++)
	{
		randomValueOne = rand() % totalCards.size();
		randomValueTwo = rand() % totalCards.size();
	}
	
}
void StandardDeck::ShowDeck()
{
	
}
void StandardDeck::SetDeck(std::vector <PlayingCard> standard_deck)
{
	for (int i = 0; i <= 6; i++)
	{
		totalCards[i] = standard_deck[i];
	}
}
