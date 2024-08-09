// #ifndef CHESSBOARD_H
// #define CHESSBOARD_H

// #include "Piece.h"
// #include "Move.h"
// #include <vector>
// #include <string>

// class ChessBoard {
// public:
//     ChessBoard();

//     // Set up the board with initial positions
//     void setupBoard();

//     // Generate all possible moves for a specific piece
//     std::vector<Move> generateMoves(int row, int col) const;

//     // Execute a move on the board
//     bool executeMove(const Move& move);

//     // Get the board state as a string
//     std::string boardToString() const;

//     // Method to get a piece at a specific position
//     const Piece& getPiece(int row, int col) const;

// private:
//     Piece board[8][8];

//     // Helper methods for move generation
//     std::vector<Move> generateKnightMoves(int row, int col) const;
//     std::vector<Move> generateBishopMoves(int row, int col) const;
//     std::vector<Move> generateRookMoves(int row, int col) const;
//     std::vector<Move> generateQueenMoves(int row, int col) const;
//     std::vector<Move> generateKingMoves(int row, int col) const;

//     // Check if a move is within the board boundaries
//     bool isInBounds(int row, int col) const;
// };

// #endif // CHESSBOARD_H

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include <vector>
#include <memory>
#include <string>
#include "Piece.h"
#include "Move.h"

class ChessBoard {
public:
    ChessBoard();

    void setupBoard();
    const Piece* getPiece(int row, int col) const;
    bool executeMove(const Move& move);
    std::string boardToString() const;
    std::vector<Move> generateMoves(int row, int col) const;

private:
    std::vector<std::vector<std::unique_ptr<Piece>>> board;

    void addPiece(int row, int col, Piece* piece);
};

#endif // CHESS_BOARD_H
