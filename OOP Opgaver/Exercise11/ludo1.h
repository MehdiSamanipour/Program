#ifndef LUDO1_H
#define LUDO1_H

#include <vector>
#include <ctime>
#include <string>

class Piece {
public:
    char color;
    int position;

    Piece(char c) : color(c), position(0) {}
};

class Board {
private:
    std::vector<std::vector<Piece*>> board;

public:
    Board();
    void movePiece(Piece* piece, int newPosition);
    bool isOccupiedBySameColor(int position, char color);
    std::vector<std::vector<Piece*>> getBoard() const { return board; }
};

class Player {
public:
    std::string name;
    char color;
    std::vector<Piece> pieces;

    Player(const std::string& n, char c) : name(n), color(c), pieces(4, Piece(c)) {}
};

class Ludo1 {
private:
    Board board;
    std::vector<Player> players;
    int currentTurn;

public:
    Ludo1();
    void udskriv();
    int slaa();
    void flyt(const std::string& playerName, int brikNr, int slag);
    bool vundet();
};

#endif
