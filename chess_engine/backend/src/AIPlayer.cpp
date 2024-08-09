#include "AIPlayer.h"
#include <algorithm>
#include <random>

// Constructor
AIPlayer::AIPlayer(PieceColor color) : color(color) {}

// Get the best move for the AI player
Move AIPlayer::getBestMove(const ChessBoard& board) const {
    std::vector<Move> possibleMoves = generatePossibleMoves(board);
    if (possibleMoves.empty()) {
        // No possible moves
        return Move();
    }
    
    // For simplicity, select a random move
    return selectRandomMove(possibleMoves);
}

// Evaluate the board position (placeholder, returns 0 for simplicity)
int AIPlayer::evaluateBoard(const ChessBoard& board) const {
    // Implement evaluation function here
    // Placeholder: return 0
    return 0;
}

// Generate possible moves for the AI
// std::vector<Move> AIPlayer::generatePossibleMoves(const ChessBoard& board) const {
//     std::vector<Move> moves;

//     // Loop through all pieces on the board to generate possible moves
//     for (int row = 0; row < 8; ++row) {
//         for (int col = 0; col < 8; ++col) {
//             const Piece& piece = board.getPiece(row, col);
//             if (piece.getColor() == color) {
//                 std::vector<Move> pieceMoves = board.generateMoves(row, col);
//                 moves.insert(moves.end(), pieceMoves.begin(), pieceMoves.end());
//             }
//         }
//     }

//     return moves;
// }

// Updated generatePossibleMoves function to work with shared_ptr
std::vector<Move> AIPlayer::generatePossibleMoves(const ChessBoard& board) const {
    std::vector<Move> moves;

    // Loop through all pieces on the board to generate possible moves
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            std::shared_ptr<Piece> piece = board.getPiece(row, col);
            if (piece && piece->getColor() == color) {
                std::vector<Move> pieceMoves = board.generateMoves(row, col);
                moves.insert(moves.end(), pieceMoves.begin(), pieceMoves.end());
            }
        }
    }

    return moves;
}

// Select a random move from the list of possible moves
Move AIPlayer::selectRandomMove(const std::vector<Move>& moves) const {
    if (moves.empty()) {
        return Move();
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, moves.size() - 1);

    int index = dis(gen);
    return moves[index];
}
