/** OOP3200. F2020. StandardDeck.h
 *
 *  In this lab you will create your own collection class called StandardDeck, which
 *	will 'contain' objects of the PlayingCard class.  The intent of the class is to
 *	represent a standard deck of 52 cards that might be useful in a card game type
 *	application.  
 *
 *	@author		Thom MacDonald
 *	@author		Tom Tsiliopoulos
 *	@version	2020.10
 *	@since		Jul 2018
 *	@see		Bronson, G. (2012). A First Book of C++ (4th ed.). Boston, MA: Course Technology.
*/

#pragma once
#ifndef __STANDARD_DECK__
#define __STANDARD_DECK__

#include "PlayingCard.h"

class StandardDeck
{
public:
	// Initialization:
	StandardDeck();
	//StandardDeck(PlayingCard* playingDeck);
	virtual void Initialize();
	
	// Rule of three:
	~StandardDeck(); //Destructor
	StandardDeck(StandardDeck& other_deck); //Copy Constructor
	StandardDeck& operator=(StandardDeck& other_deck); //Assignment operator overload
	
	// Accessors:
	PlayingCard DrawNextCard();
	int CardsRemaining();
	PlayingCard DrawRandomCard();
		
	// Mutators:
	void Shuffle(PlayingCard cards[]);
	void SetDeck(PlayingCard cards[]);

private:
	PlayingCard totalCards[52];
	PlayingCard* ptr = totalCards;
};

#endif /* defined (__STANDARD_DECK__) */

