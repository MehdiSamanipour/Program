#include "Card.h"
#include <iostream>
using namespace std;

void printCard(Card c)
{
	string rank;
	switch (c.rank)
	{
	case ACE:
		rank = "Ace";
		break;

	case TWO:
		rank = "Two";
		break;

	case THREE:
		rank = "Three";
		break;

	case FOUR:
		rank = "Four";
		break;

	case FIVE:
		rank = "Five";
		break;

	case SIX:
		rank = "Six";
		break;

	case SEVEN:
		rank = "Seven";
		break;

	case EIGHT:
		rank = "Eight";
		break;

	case NINE:
		rank = "Nine";
		break;

	case TEN:
		rank = "Ten";
		break;

	case JACK:
		rank = "Jack";
		break;

	case QUEEN:
		rank = "Queen";
		break;

	case KING:
		rank = "King";
		break;

	default:
		rank = "Unknown rank";
		break;
	}

	string suit;
	switch (c.suit)
	{
	case SPADES:
		suit = "Spades";
		break;

	case CLUBS:
		suit = "Clubs";
		break;

	case HEARTS:
		suit = "Hearts";
		break;

	case DIAMONDS:
		suit = "Diamonds";
		break;

	default:
		suit = "Unknown suit";
		break;

	}
	cout << rank << " of " << suit << endl;
}

Card highestCard(Card c1, Card c2)
{
	if (c1.rank == c2.rank)
	{
		if (c2.suit > c1.suit)
			return c2;
		else
			return c1;
	}
	else if (c1.rank > c2.rank)
		return c1;
	else
		return c2;
}
