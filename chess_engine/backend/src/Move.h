// #ifndef MOVE_H
// #define MOVE_H

// #include "Piece.h"

// // Class to represent a chess move
// class Move {
// public:
//     Move(int fromRow = -1, int fromCol = -1, int toRow = -1, int toCol = -1, const Piece& piece = Piece());

//     int getFromRow() const;
//     int getFromCol() const;
//     int getToRow() const;
//     int getToCol() const;
//     Piece getPiece() const;

//     void setFromRow(int row);
//     void setFromCol(int col);
//     void setToRow(int row);
//     void setToCol(int col);
//     void setPiece(const Piece& piece);

//     std::string toString() const;

// private:
//     int fromRow;
//     int fromCol;
//     int toRow;
//     int toCol;
//     Piece piece;
// };

// #endif // MOVE_H

#ifndef MOVE_H
#define MOVE_H

#include <memory>
#include <string>

class Piece;

class Move {
public:
    Move(int fromRow = -1, int fromCol = -1, int toRow = -1, int toCol = -1, std::shared_ptr<Piece> piece = nullptr);

    int getFromRow() const;
    int getFromCol() const;
    int getToRow() const;
    int getToCol() const;
    std::shared_ptr<Piece> getPiece() const;

    void setFromRow(int row);
    void setFromCol(int col);
    void setToRow(int row);
    void setToCol(int row);
    void setPiece(std::shared_ptr<Piece> piece);

    std::string toString() const;

private:
    int fromRow;
    int fromCol;
    int toRow;
    int toCol;
    std::shared_ptr<Piece> piece;
};

#endif // MOVE_H
