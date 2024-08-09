#ifndef AIPLAYER_H
#define AIPLAYER_H

#include "ChessBoard.h"
#include "Move.h"

class AIPlayer {
public:
    AIPlayer(PieceColor color);

    // Get the best move for the AI player
    Move getBestMove(const ChessBoard& board) const;

private:
    PieceColor color;

    // Evaluate the board position
    int evaluateBoard(const ChessBoard& board) const;

    // Generate possible moves for the AI
    std::vector<Move> generatePossibleMoves(const ChessBoard& board) const;

    // Select a random move from the list of possible moves
    Move selectRandomMove(const std::vector<Move>& moves) const;
};

#endif // AIPLAYER_H
