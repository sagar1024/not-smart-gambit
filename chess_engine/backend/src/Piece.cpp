// #include "Piece.h"

// // Constructor
// Piece::Piece(PieceType type, PieceColor color)
//     : type(type), color(color) {}

// // Getters
// PieceType Piece::getType() const {
//     return type;
// }

// PieceColor Piece::getColor() const {
//     return color;
// }

// // Setters
// void Piece::setType(PieceType type) {
//     this->type = type;
// }

// void Piece::setColor(PieceColor color) {
//     this->color = color;
// }

// // Convert piece to string representation
// std::string Piece::toString() const {
//     static const char* pieceTypeNames[] = {"King", "Queen", "Rook", "Bishop", "Knight", "Pawn", "Empty"};
//     static const char* pieceColorNames[] = {"White", "Black", "None"};
    
//     std::string result = pieceColorNames[static_cast<int>(color)] + std::string(" ") + pieceTypeNames[static_cast<int>(type)];
//     return result;
// }

#include <iostream>
#include <memory>
#include "Piece.h"

Piece::Piece(PieceColor color, char symbol) : color(color), symbol(symbol) {}

PieceColor Piece::getColor() const {
    return color;
}

char Piece::getSymbol() const {
    return symbol;
}
