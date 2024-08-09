// #include "Move.h"

// // Constructor
// Move::Move(int fromRow, int fromCol, int toRow, int toCol, const Piece& piece)
//     : fromRow(fromRow), fromCol(fromCol), toRow(toRow), toCol(toCol), piece(piece) {}

// // Getters
// int Move::getFromRow() const {
//     return fromRow;
// }

// int Move::getFromCol() const {
//     return fromCol;
// }

// int Move::getToRow() const {
//     return toRow;
// }

// int Move::getToCol() const {
//     return toCol;
// }

// Piece Move::getPiece() const {
//     return piece;
// }

// // Setters
// void Move::setFromRow(int row) {
//     fromRow = row;
// }

// void Move::setFromCol(int col) {
//     fromCol = col;
// }

// void Move::setToRow(int row) {
//     toRow = row;
// }

// void Move::setToCol(int col) {
//     toCol = col;
// }

// void Move::setPiece(const Piece& piece) {
//     this->piece = piece;
// }

// // Convert move to string representation
// std::string Move::toString() const {
//     return "Move from (" + std::to_string(fromRow) + ", " + std::to_string(fromCol) +
//            ") to (" + std::to_string(toRow) + ", " + std::to_string(toCol) + ") " +
//            "with piece " + piece.toString();
// }

#include "Move.h"
#include "Piece.h"

Move::Move(int fromRow, int fromCol, int toRow, int toCol, std::shared_ptr<Piece> piece)
    : fromRow(fromRow), fromCol(fromCol), toRow(toRow), toCol(toCol), piece(piece) {}

int Move::getFromRow() const {
    return fromRow;
}

int Move::getFromCol() const {
    return fromCol;
}

int Move::getToRow() const {
    return toRow;
}

int Move::getToCol() const {
    return toCol;
}

std::shared_ptr<Piece> Move::getPiece() const {
    return piece;
}

void Move::setFromRow(int row) {
    fromRow = row;
}

void Move::setFromCol(int col) {
    fromCol = col;
}

void Move::setToRow(int row) {
    toRow = row;
}

void Move::setToCol(int col) {
    toCol = col;
}

void Move::setPiece(std::shared_ptr<Piece> piece) {
    this->piece = piece;
}

std::string Move::toString() const {
    return "Move from (" + std::to_string(fromRow) + ", " + std::to_string(fromCol) +
           ") to (" + std::to_string(toRow) + ", " + std::to_string(toCol) + ")";
}
