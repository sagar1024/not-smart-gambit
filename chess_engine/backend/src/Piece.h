// #ifndef PIECE_H
// #define PIECE_H

// #include <string>

// // Enum to represent the type of chess piece
// enum class PieceType {
//     KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN, EMPTY
// };

// //Enum to represent the color of the chess piece
// enum class PieceColor {
//     WHITE, BLACK, NONE
// };

// // Class to represent a chess piece
// class Piece {
// public:
//     Piece(PieceType type = PieceType::EMPTY, PieceColor color = PieceColor::NONE);
    
//     PieceType getType() const;
//     PieceColor getColor() const;
    
//     void setType(PieceType type);
//     void setColor(PieceColor color);
    
//     std::string toString() const;

// private:
//     PieceType type;
//     PieceColor color;
// };

// #endif // PIECE_H

#ifndef PIECE_H
#define PIECE_H

#include <vector>
#include <string>
#include <memory>

enum PieceColor { WHITE, BLACK };

class Piece {
public:
    Piece(PieceColor color, char symbol);

    PieceColor getColor() const;
    char getSymbol() const;

    virtual std::vector<std::pair<int, int>> generateMoves(int row, int col) const = 0;
    virtual ~Piece() {}

private:
    PieceColor color;
    char symbol;
};

#endif // PIECE_H
