// #include <iostream>
// #include "Piece.h"
// #include "Move.h"
// #include "ChessBoard.h"
// #include "GameEngine.h"
// #include "AIPlayer.h"
// #include "Utilities.h"

// int main() {
//     // Initialize the chessboard
//     ChessBoard board;
//     board.setupBoard();

//     // Get player color choice
//     PieceColor playerColor;
//     std::cout << "Select your color (W/B): ";
//     char colorChoice;
//     std::cin >> colorChoice;
    
//     if (colorChoice == 'W' || colorChoice == 'w') {
//         playerColor = WHITE;
//     } else if (colorChoice == 'B' || colorChoice == 'b') {
//         playerColor = BLACK;
//     } else {
//         std::cout << "Invalid choice. Defaulting to White." << std::endl;
//         playerColor = WHITE;
//     }

//     // Create players
//     AIPlayer aiPlayer(playerColor == WHITE ? BLACK : WHITE); // AI plays the opposite color
//     AIPlayer humanPlayer(playerColor);

//     GameEngine gameEngine(board, aiPlayer, humanPlayer);

//     // Start the game loop
//     bool gameEnded = false;
//     while (!gameEnded) {
//         // Print the current board state
//         std::cout << "Current board state:\n";
//         std::cout << board.boardToString() << std::endl;
        
//         // Get the current player (white or black)
//         PieceColor currentPlayer = gameEngine.getCurrentPlayerColor();
        
//         std::cout << (currentPlayer == WHITE ? "White" : "Black") << "'s turn" << std::endl;

//         Move move;
//         if (currentPlayer == playerColor) {
//             // Human's turn
//             std::string input;
//             std::cout << "Enter your move (e.g., e2e4): ";
//             std::cin >> input;
            
//             int fromRow, fromCol, toRow, toCol;
//             if (Utilities::notationToPosition(input.substr(0, 2), fromRow, fromCol) &&
//                 Utilities::notationToPosition(input.substr(2, 2), toRow, toCol)) {
//                 move = Move(fromRow, fromCol, toRow, toCol);
//             } else {
//                 std::cout << "Invalid move notation. Please try again." << std::endl;
//                 continue;
//             }
//         } else {
//             // AI's turn
//             move = aiPlayer.getBestMove(board);
//         }
        
//         // Execute the move
//         if (board.executeMove(move)) {
//             // Check if the game has ended (e.g., checkmate or stalemate)
//             if (gameEngine.isGameOver()) {
//                 gameEnded = true;
//                 std::cout << "Game Over!" << std::endl;
//             } else {
//                 // Switch players
//                 gameEngine.switchPlayer();
//             }
//         } else {
//             std::cout << "Invalid move. Please try again." << std::endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include "Piece.h"
#include "ChessBoard.h"
#include "GameEngine.h"
#include "AIPlayer.h"
#include "Utilities.h"

int main() {
    // Initialize the chessboard
    ChessBoard board;
    board.setupBoard();

    // Get player color choice
    PieceColor playerColor;
    std::cout << "Select your color (W/B): ";
    char colorChoice;
    std::cin >> colorChoice;
    
    if (colorChoice == 'W' || colorChoice == 'w') {
        playerColor = WHITE;
    } else if (colorChoice == 'B' || colorChoice == 'b') {
        playerColor = BLACK;
    } else {
        std::cout << "Invalid choice. Defaulting to White." << std::endl;
        playerColor = WHITE;
    }

    // Create players
    AIPlayer aiPlayer(playerColor == WHITE ? BLACK : WHITE); // AI plays the opposite color
    AIPlayer humanPlayer(playerColor);

    GameEngine gameEngine(board, aiPlayer, humanPlayer);

    // Start the game loop
    bool gameEnded = false;
    while (!gameEnded) {
        // Print the current board state
        std::cout << "Current board state:\n";
        std::cout << board.boardToString() << std::endl;
        
        // Get the current player (white or black)
        PieceColor currentPlayer = gameEngine.getCurrentPlayerColor();
        
        std::cout << (currentPlayer == WHITE ? "White" : "Black") << "'s turn" << std::endl;

        Move move;
        if (currentPlayer == playerColor) {
            // Human's turn
            std::string input;
            std::cout << "Enter your move (e.g., e2e4): ";
            std::cin >> input;
            
            int fromRow, fromCol, toRow, toCol;
            if (Utilities::notationToPosition(input.substr(0, 2), fromRow, fromCol) &&
                Utilities::notationToPosition(input.substr(2, 2), toRow, toCol)) {
                move = Move(fromRow, fromCol, toRow, toCol);
            } else {
                std::cout << "Invalid move notation. Please try again." << std::endl;
                continue;
            }
        } else {
            // AI's turn
            move = aiPlayer.getBestMove(board);
        }
        
        // Execute the move
        if (board.executeMove(move)) {
            // Check if the game has ended (e.g., checkmate or stalemate)
            if (gameEngine.isGameOver()) {
                gameEnded = true;
                std::cout << "Game Over!" << std::endl;
            } else {
                // Switch players
                gameEngine.switchPlayer();
            }
        } else {
            std::cout << "Invalid move. Please try again." << std::endl;
        }
    }

    return 0;
}
