#include "ChessBoard.h"
#include "Move.h"
#include "Piece.h"
#include <sstream>

// Constructor
ChessBoard::ChessBoard() {
    setupBoard();
}

// Set up the board with initial positions
void ChessBoard::setupBoard() {
    // Initialize all squares to EMPTY
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            board[row][col] = Piece(PieceType::EMPTY, PieceColor::NONE);
        }
    }

    // Place pawns, rooks, knights, bishops, queens, kings for both sides
    // This is a simplified example; adjust as needed
    for (int col = 0; col < 8; ++col) {
        board[1][col] = Piece(PieceType::PAWN, PieceColor::WHITE);
        board[6][col] = Piece(PieceType::PAWN, PieceColor::BLACK);
    }

    // Rooks
    board[0][0] = Piece(PieceType::ROOK, PieceColor::WHITE);
    board[0][7] = Piece(PieceType::ROOK, PieceColor::WHITE);
    board[7][0] = Piece(PieceType::ROOK, PieceColor::BLACK);
    board[7][7] = Piece(PieceType::ROOK, PieceColor::BLACK);

    // Knights
    board[0][1] = Piece(PieceType::KNIGHT, PieceColor::WHITE);
    board[0][6] = Piece(PieceType::KNIGHT, PieceColor::WHITE);
    board[7][1] = Piece(PieceType::KNIGHT, PieceColor::BLACK);
    board[7][6] = Piece(PieceType::KNIGHT, PieceColor::BLACK);

    // Bishops
    board[0][2] = Piece(PieceType::BISHOP, PieceColor::WHITE);
    board[0][5] = Piece(PieceType::BISHOP, PieceColor::WHITE);
    board[7][2] = Piece(PieceType::BISHOP, PieceColor::BLACK);
    board[7][5] = Piece(PieceType::BISHOP, PieceColor::BLACK);

    // Queens
    board[0][3] = Piece(PieceType::QUEEN, PieceColor::WHITE);
    board[7][3] = Piece(PieceType::QUEEN, PieceColor::BLACK);

    // Kings
    board[0][4] = Piece(PieceType::KING, PieceColor::WHITE);
    board[7][4] = Piece(PieceType::KING, PieceColor::BLACK);
}

// Generate all possible moves for a specific piece
std::vector<Move> ChessBoard::generateMoves(int row, int col) const {
    const Piece& piece = board[row][col];
    std::vector<Move> moves;

    if (piece.getType() == PieceType::KNIGHT) {
        moves = generateKnightMoves(row, col);
    } else if (piece.getType() == PieceType::BISHOP) {
        moves = generateBishopMoves(row, col);
    } else if (piece.getType() == PieceType::ROOK) {
        moves = generateRookMoves(row, col);
    } else if (piece.getType() == PieceType::QUEEN) {
        moves = generateQueenMoves(row, col);
    } else if (piece.getType() == PieceType::KING) {
        moves = generateKingMoves(row, col);
    }

    return moves;
}

// Execute a move on the board
bool ChessBoard::executeMove(const Move& move) {
    int fromRow = move.getFromRow();
    int fromCol = move.getFromCol();
    int toRow = move.getToRow();
    int toCol = move.getToCol();

    if (isInBounds(toRow, toCol) && isInBounds(fromRow, fromCol)) {
        board[toRow][toCol] = board[fromRow][fromCol];
        board[fromRow][fromCol] = Piece(PieceType::EMPTY, PieceColor::NONE);
        return true;
    }
    return false;
}

// Convert board to string representation
std::string ChessBoard::boardToString() const {
    std::ostringstream oss;
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            oss << board[row][col].toString() << " ";
        }
        oss << "\n";
    }
    return oss.str();
}

// Helper methods for move generation (placeholders)
std::vector<Move> ChessBoard::generateKnightMoves(int row, int col) const {
    // Implement Knight moves
    return {};
}

std::vector<Move> ChessBoard::generateBishopMoves(int row, int col) const {
    // Implement Bishop moves
    return {};
}

std::vector<Move> ChessBoard::generateRookMoves(int row, int col) const {
    // Implement Rook moves
    return {};
}

std::vector<Move> ChessBoard::generateQueenMoves(int row, int col) const {
    // Implement Queen moves
    return {};
}

std::vector<Move> ChessBoard::generateKingMoves(int row, int col) const {
    // Implement King moves
    return {};
}

// Check if a move is within the board boundaries
bool ChessBoard::isInBounds(int row, int col) const {
    return row >= 0 && row < 8 && col >= 0 && col < 8;
}

// Get the piece at a specific position
const Piece& ChessBoard::getPiece(int row, int col) const {
    if (row < 0 || row >= 8 || col < 0 || col >= 8) {
        throw std::out_of_range("Position out of bounds");
    }
    return board[row][col];
}
