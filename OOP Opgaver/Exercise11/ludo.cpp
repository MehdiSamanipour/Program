#include "ludo.h"
#include <iostream>

Ludo::Ludo() {
    players.push_back(Player('R'));
    players.push_back(Player('Y'));
    players.push_back(Player('G'));
    players.push_back(Player('B'));

    for (int i = 0; i < 41; ++i) {
        board.push_back(-1); // -1 represents an empty position
    }

    currentTurn = 0;
}

void Ludo::udskriv() {
    for (int i = 0; i < 41; ++i) {
        if (board[i] != -1) {
            std::cout << players[board[i]].color << " ";
        }
        else {
            std::cout << ". ";
        }

        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

int Ludo::slaa() {
    srand(static_cast<unsigned>(time(0)));
    return rand() % 6 + 1;
}

void Ludo::flyt(char spiller, int brikNr, int slag) {
    int currentPosition = players[brikNr].pieces[0];

    if (!isValidMove(spiller, brikNr, slag)) {
        std::cout << "Invalid move. Try again." << std::endl;
        return;
    }

    int newPosition = currentPosition + slag;
    if (newPosition < 40) {
        if (!isPieceAtStart(spiller, brikNr)) {
            board[currentPosition] = -1;
        }

        board[newPosition] = brikNr;
        players[brikNr].pieces[0] = newPosition;

        if (slag == 6) {
            std::cout << "You rolled a 6! Roll again." << std::endl;
            return;
        }
    }

    currentTurn = (currentTurn + 1) % 4;
}

bool Ludo::vundet() {
    return false;
}

bool Ludo::isValidMove(char spiller, int brikNr, int slag) {
    return true;
}

bool Ludo::isPieceAtHome(char spiller, int brikNr) {
    return false;
}

bool Ludo::isPieceAtStart(char spiller, int brikNr) {
    return false;
}

bool Ludo::isPieceInSafeZone(char spiller, int brikNr, int newPosition) {
    return false;
}

bool Ludo::isOccupiedBySameColor(int position, char color) {
    return false;
}

void Ludo::sendPieceToStart(char spiller, int brikNr) {
    std::cout << "Piece sent back to start!" << std::endl;
}

void Ludo::sendPieceToHome(char spiller, int brikNr) {
    std::cout << "Piece sent back home!" << std::endl;
}
