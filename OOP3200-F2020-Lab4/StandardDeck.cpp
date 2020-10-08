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

StandardDeck::StandardDeck(StandardDeck& other_deck)
{
	SetDeck(other_deck.totalCards);
}

StandardDeck& StandardDeck::operator=(StandardDeck& other_deck)
{
	SetDeck(other_deck.totalCards);
	return (*this);
}

PlayingCard StandardDeck::DrawNextCard()
{
	return PlayingCard();
}

int StandardDeck::CardsRemaining()
{
	return sizeof(totalCards) / 16;
}

PlayingCard StandardDeck::DrawRandomCard()
{
}

void StandardDeck::Shuffle(PlayingCard cards[])
{
}

void StandardDeck::SetDeck(PlayingCard cards[])
{
	for (int i = 0; i <= 6; i++)
	{
		totalCards[i] = cards[i];
	}
}
