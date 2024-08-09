// #ifndef GAMEENGINE_H
// #define GAMEENGINE_H

// #include "ChessBoard.h"
// #include "Move.h"
// #include "AIPlayer.h"

// class GameEngine {
// public:
//     GameEngine();

//     // Start a new game
//     void startGame();

//     // Make a move
//     bool makeMove(const Move& move);

//     // Get the current board state
//     std::string getBoardState() const;

//     // Check if the game is over
//     bool isGameOver() const;

// private:
//     ChessBoard board;
//     PieceColor currentPlayer;

//     // Check if a move is valid
//     bool isValidMove(const Move& move) const;

//     // Switch players
//     void switchPlayer();

//     // Check for checkmate or stalemate
//     bool checkCheckmate() const;
//     bool checkStalemate() const;
// };

// #endif // GAMEENGINE_H

#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "ChessBoard.h"
#include "AIPlayer.h"

class GameEngine {
public:
    GameEngine(ChessBoard& board, AIPlayer& whitePlayer, AIPlayer& blackPlayer);

    PieceColor getCurrentPlayerColor() const;
    void switchPlayer();
    bool isGameOver() const;

private:
    ChessBoard& board;
    AIPlayer& whitePlayer;
    AIPlayer& blackPlayer;
    PieceColor currentPlayer;
};

#endif // GAME_ENGINE_H
