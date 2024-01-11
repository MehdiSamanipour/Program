#pragma once

enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };
enum Rank {
	ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE,
	TEN, JACK, QUEEN, KING
};

struct Card
{
	Rank rank;
	Suit suit;
};

// Function for the solution
void printCard(Card c);
Card highestCard(Card c1, Card c2);