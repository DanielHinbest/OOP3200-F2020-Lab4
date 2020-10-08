#include "StandardDeck.h"

StandardDeck::StandardDeck()
{
	Initialize();
}

void StandardDeck::Initialize()
{
	int suit, number = 1;

	if (ptr != 0)
	{
		delete(totalCards);
	}

	for (int i = 0; i <= 4; i++)
	{
		totalCards[i] = PlayingCard(number, suit, i, true);
		number++;
		if (number == 14)
		{
			suit++;
			number = 1;
		}
	}
}

StandardDeck::~StandardDeck()
= default;

StandardDeck::StandardDeck(const StandardDeck& other_deck)
{
}

StandardDeck& StandardDeck::operator=(const StandardDeck& other_deck)
{
}

PlayingCard StandardDeck::DrawNextCard()
{
}

int StandardDeck::CardsRemaining()
{
}

PlayingCard StandardDeck::DrawRandomCard()
{
}

void StandardDeck::Shuffle(PlayingCard cards[])
{
}
