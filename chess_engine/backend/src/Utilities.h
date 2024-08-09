#ifndef UTILITIES_H
#define UTILITIES_H

#include "Move.h"
#include <vector>
#include <string>

// Utility functions for the chess engine
class Utilities {
public:
    // Convert a position (row, col) to a chessboard notation (e.g., "e4")
    static std::string positionToNotation(int row, int col);

    // Convert a chessboard notation (e.g., "e4") to a position (row, col)
    static bool notationToPosition(const std::string& notation, int& row, int& col);

    // Print a vector of moves
    static void printMoves(const std::vector<Move>& moves);

private:
    // Helper function to validate a position
    static bool isValidPosition(int row, int col);
};

#endif // UTILITIES_H