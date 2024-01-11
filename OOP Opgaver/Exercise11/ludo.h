#ifndef LUDO_H
#define LUDO_H

#include <vector>
#include <ctime>

class Ludo {
private:
    struct Player {
        char color;
        std::vector<int> pieces;
        Player(char c) : color(c) {}
    };

    std::vector<Player> players;
    std::vector<int> board;
    int currentTurn;

public:
    Ludo();
    void udskriv();
    int slaa();
    void flyt(char spiller, int brikNr, int slag);
    bool vundet();

private:
    bool isValidMove(char spiller, int brikNr, int slag);
    bool isPieceAtHome(char spiller, int brikNr);
    bool isPieceAtStart(char spiller, int brikNr);
    bool isPieceInSafeZone(char spiller, int brikNr, int newPosition);
    bool isOccupiedBySameColor(int position, char color);
    void sendPieceToStart(char spiller, int brikNr);
    void sendPieceToHome(char spiller, int brikNr);
};

#endif
