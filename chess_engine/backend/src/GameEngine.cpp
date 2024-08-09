// #include "GameEngine.h"

// // Constructor
// GameEngine::GameEngine() : currentPlayer(PieceColor::WHITE) {
//     startGame();
// }

// // Start a new game
// void GameEngine::startGame() {
//     board.setupBoard();
//     currentPlayer = PieceColor::WHITE;
// }

// // Make a move
// bool GameEngine::makeMove(const Move& move) {
//     if (isValidMove(move)) {
//         if (board.executeMove(move)) {
//             switchPlayer();
//             return true;
//         }
//     }
//     return false;
// }

// // Get the current board state
// std::string GameEngine::getBoardState() const {
//     return board.boardToString();
// }

// // Check if the game is over
// bool GameEngine::isGameOver() const {
//     return checkCheckmate() || checkStalemate();
// }

// // Check if a move is valid
// bool GameEngine::isValidMove(const Move& move) const {
//     // Implement validation logic here
//     // For now, just return true as a placeholder
//     return true;
// }

// // Switch players
// void GameEngine::switchPlayer() {
//     currentPlayer = (currentPlayer == PieceColor::WHITE) ? PieceColor::BLACK : PieceColor::WHITE;
// }

// // Check for checkmate
// bool GameEngine::checkCheckmate() const {
//     // Implement checkmate detection
//     // Placeholder: return false
//     return false;
// }

// // Check for stalemate
// bool GameEngine::checkStalemate() const {
//     // Implement stalemate detection
//     // Placeholder: return false
//     return false;
// }

#include "GameEngine.h"

// Constructor
GameEngine::GameEngine(ChessBoard& board, AIPlayer& whitePlayer, AIPlayer& blackPlayer)
    : board(board), whitePlayer(whitePlayer), blackPlayer(blackPlayer), currentPlayer(WHITE) {}

// Get the current player's color
PieceColor GameEngine::getCurrentPlayerColor() const {
    return currentPlayer;
}

// Switch the current player
void GameEngine::switchPlayer() {
    currentPlayer = (currentPlayer == WHITE) ? BLACK : WHITE;
}

// Check if the game is over (placeholder, you need to implement actual game over logic)
bool GameEngine::isGameOver() const {
    // Implement game over logic here
    return false;
}
