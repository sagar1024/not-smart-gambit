#### This is an old repo of this project, a new one has been created.

# Smart Gambit
**Smart Gambit** is an advanced C++ chess engine designed to provide an engaging and educational experience for chess players of all skill levels. This chess engine is built to dynamically adjust its difficulty based on the player's strength, track players' weaknesses, and offer tailored suggestions for improvement. It also emulates various playing styles and provides detailed explanations for each move, making it an ideal tool for both casual players and serious learners.

## Features
- **Dynamic Difficulty Adjustment**: The engine assesses the player's strength and adjusts the difficulty level accordingly, offering a challenging experience for all skill levels.
- **Player Weakness Tracking**: Tracks the player's weaknesses over time and offers targeted advice to help improve specific areas of their game.
- **Style Emulation**: The engine can emulate different playing styles, from aggressive to defensive, allowing players to practice against a variety of strategies.
- **AI Player**: The engine includes an AI player that makes decisions based on a combination of randomization and evaluation, making it unpredictable and challenging.
- **Move Explanations**: Provides explanations for each move, helping players understand the reasoning behind the engine's decisions.

## How It Works
The engine uses a combination of standard chess algorithms, reinforcement learning, and customized heuristics to evaluate board positions and generate optimal moves. The difficulty adjustment is achieved by analyzing the player's past games and modifying the AI's evaluation function and search depth accordingly.

## Usage
1. Upon starting the game, you will be prompted to choose your color (White or Black).
2. The game begins with the chosen color making the first move.
3. Input your moves in standard chess notation (e.g., `e2e4` for moving a piece from e2 to e4).
4. The game continues until a checkmate, stalemate, or draw is detected.
5. At the end of the game, a summary of the player's strengths and weaknesses is provided, along with suggestions for improvement.

## Project Motivation
**Smart Gambit** was created out of my fascination with chess and a desire to develop a tool that enhances both the enjoyment and learning experience for chess players. I wanted to build an engine that not only provides a challenging opponent but also offers feedback and insights to help players improve their game. This project also served as a way for me to explore advanced programming concepts and artificial intelligence in C++.

## Challenges Faced
Developing **Smart Gambit** presented several challenges:
- **Dynamic Difficulty Adjustment**: Implementing an AI that adjusts its difficulty based on the player's skill required in-depth research and fine-tuning of algorithms to balance the AI's performance.  
- **Emulating Different Playing Styles**: Creating an AI that could mimic various playing styles, from aggressive to defensive, demanded a thorough understanding of chess strategies and a flexible design to adapt to different tactics.
- **Move Generation and Execution**: Ensuring that the move generation and execution for each piece were accurate and efficient required careful implementation and testing to handle all possible game scenarios.

## Future Enhancements
There are several exciting features I plan to add to **Smart Gambit**:
- **Online Multiplayer Mode**: Enabling players to compete against each other online would add a new layer of interaction and challenge.
- **Advanced AI Learning**: Incorporating machine learning techniques to allow the AI to learn from its games and continuously improve its performance.
- **Enhanced User Interface**: Developing a more interactive and visually appealing GUI to provide a better user experience.
- **In-depth Game Analysis**: Adding tools for detailed game analysis and post-game reviews to help players understand their mistakes and improve their strategy.

## Technologies Used
- **C++**: The primary programming language used to develop the chess engine, leveraging its performance and control over low-level operations.
- **Object-Oriented Design**: Employed to manage the complexities of chess logic and ensure a modular, maintainable codebase.
- **Reinforcement Learning**: Used to create an AI that can adapt its difficulty based on the player's skill and provide varied gameplay experiences.
- **Standard Template Library (STL)**: Utilized for efficient data structures and algorithms, such as vectors and random number generation.
- **Custom Algorithms**: Developed specific algorithms for move generation, game evaluation, and difficulty adjustment to create a robust and intelligent chess engine.
