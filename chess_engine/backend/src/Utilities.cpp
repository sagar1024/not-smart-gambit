#include "Utilities.h"
#include "Move.h"
#include <iostream>
#include <sstream>
#include <iomanip>

// Convert a position (row, col) to a chessboard notation (e.g., "e4")
std::string Utilities::positionToNotation(int row, int col) {
    if (!isValidPosition(row, col)) {
        return "";
    }

    char file = 'a' + col; // Convert column index to file letter
    char rank = '1' + row; // Convert row index to rank number
    return std::string(1, file) + std::string(1, rank);
}

// Convert a chessboard notation (e.g., "e4") to a position (row, col)
bool Utilities::notationToPosition(const std::string& notation, int& row, int& col) {
    if (notation.length() != 2) {
        return false;
    }

    char file = notation[0];
    char rank = notation[1];

    col = file - 'a';
    row = rank - '1';

    return isValidPosition(row, col);
}

// Print a vector of moves
void Utilities::printMoves(const std::vector<Move>& moves) {
    for (const Move& move : moves) {
        std::cout << move.toString() << std::endl;
    }
}

// Helper function to validate a position
bool Utilities::isValidPosition(int row, int col) {
    return row >= 0 && row < 8 && col >= 0 && col < 8;
}
