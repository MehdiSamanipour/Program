#include "ludo1.h"
#include <iostream>

#include "ludo.h"

Board::Board() {
    for (int i = 0; i < 41; ++i) {
        board.push_back(std::vector<Piece*>());
    }
}

void Board::movePiece(Piece* piece, int newPosition) {
    // Remove piece from old position
    auto& oldPosition = board[piece->position];
    oldPosition.erase(std::remove(oldPosition.begin(), oldPosition.end(), piece), oldPosition.end());

    // Add piece to new position
    piece->position = newPosition;
    board[newPosition].push_back(piece);
}

bool Board::isOccupiedBySameColor(int position, char color) {
    for (auto* piece : board[position]) {
        if (piece->color == color) {
            return true;
        }
    }
    return false;
}

Ludo1::Ludo1() : players({
    Player("Red Player", 'R'),
    Player("Yellow Player", 'Y'),
    Player("Green Player", 'G'),
    Player("Blue Player", 'B')
    }), currentTurn(0) {}

void Ludo1::udskriv() {
    auto boardData = board.getBoard();
    for (int i = 0; i < 41; ++i) {
        if (!boardData[i].empty()) {
            std::cout << boardData[i][0]->color << " ";
        }
        else {
            for (const auto& piece : boardData[i]) {
                std::cout << piece->color ;
            }
        }

        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

int Ludo1::slaa() {
    srand(static_cast<unsigned>(time(0)));
    return rand() % 6 + 1;
}

void Ludo1::flyt(const std::string& playerName, int brikNr, int slag) {
    // Find the player
    Player* player = nullptr;
    for (auto& p : players) {
        if (p.name == playerName) {
            player = &p;
            break;
        }
    }
    if (!player) {
        std::cout << "Player not found." << std::endl;
        return;
    }

    // Move the piece
    Piece& piece = player->pieces[brikNr];
    int newPosition = piece.position + slag;
    if (newPosition < 40 && !board.isOccupiedBySameColor(newPosition, player->color)) {
        board.movePiece(&piece, newPosition);
    }

    // Next turn
    currentTurn = (currentTurn + 1) % 4;
}

bool Ludo1::vundet() {
    // Implement this function
    return false;
}
