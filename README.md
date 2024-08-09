# Smart Gambit Chess Engine
**Smart Gambit** is an advanced C++ chess engine designed to provide an engaging and educational experience for chess players of all skill levels. This chess engine is built to dynamically adjust its difficulty based on the player's strength, track players' weaknesses, and offer tailored suggestions for improvement. It also emulates various playing styles and provides detailed explanations for each move, making it an ideal tool for both casual players and serious learners.

## Features
- **Dynamic Difficulty Adjustment**: The engine assesses the player's strength and adjusts the difficulty level accordingly, offering a challenging experience for all skill levels.
- **Player Weakness Tracking**: Tracks the player's weaknesses over time and offers targeted advice to help improve specific areas of their game.
- **Style Emulation**: The engine can emulate different playing styles, from aggressive to defensive, allowing players to practice against a variety of strategies.
- **Move Explanations**: Provides explanations for each move, helping players understand the reasoning behind the engine's decisions.
- **Color Selection**: Players can choose whether they want to play as White or Black before each game.
- **AI Player**: The engine includes an AI player that makes decisions based on a combination of randomization and evaluation, making it unpredictable and challenging.

## How It Works
The engine uses a combination of standard chess algorithms, reinforcement learning, and customized heuristics to evaluate board positions and generate optimal moves. The difficulty adjustment is achieved by analyzing the player's past games and modifying the AI's evaluation function and search depth accordingly.

## Usage
1. Upon starting the game, you will be prompted to choose your color (White or Black).
2. The game begins with the chosen color making the first move.
3. Input your moves in standard chess notation (e.g., `e2e4` for moving a piece from e2 to e4).
4. The game continues until a checkmate, stalemate, or draw is detected.
5. At the end of the game, a summary of the player's strengths and weaknesses is provided, along with suggestions for improvement.

## Acknowledgements
Special thanks to all the open-source contributors and chess enthusiasts who have inspired the development of Smart Gambit.
