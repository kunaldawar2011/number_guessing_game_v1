# Number Guessing Game (C) v1.0.0

## Description

Number Guessing Game is a simple, text-based console application written in C. The program selects a secret number between 1 and 100, and the player attempts to guess it. After each guess, the game indicates whether the guess is too high or too low, and continues until the correct number is entered. Upon success, the program reports the secret number and the total number of attempts.

This project is suitable for beginners learning C programming concepts such as loops, conditional statements, console input and output, and the `scanf` function.

## Features

- Interactive console-based gameplay
- Hints after each incorrect guess ("Too High" or "Too Low")
- Attempt counter that reports the number of guesses on success
- Simple and easy-to-read source code

## Requirements

- A C compiler, such as GCC, Clang, or MSVC
- A terminal or command prompt

## Installation and Compilation

1. Clone or download the source file `number_guessing_game_v1_0_0.c`.
2. Compile the program using GCC:

   ```bash
   gcc number_guessing_game_v1_0_0.c -o number_guessing_game
   ```

## Usage

Run the compiled program:

```bash
./number_guessing_game
```

On Windows:

```cmd
number_guessing_game.exe
```

### Sample Session

```
*********Number Guessing Game v1.0.0 (C)******
We have choosed a number between 1 to 100
Enter Your number:- 50
Too Low please Choose Higher Number
Enter Your number:- 90
Too High please Choose Lower Number
Enter Your number:- 85
You won the number is 85 in attempts 3
We will also play next time
Bye, Bye
```

## How It Works

1. The program initializes the secret number to `85` and an attempt counter to `1`.
2. It displays the game title and the valid range.
3. In a loop, it prompts the player for a guess and reads the input using `scanf`.
4. If the guess matches the secret number, the program displays the result and exits the loop.
5. Otherwise, it indicates whether the guess is too high or too low and increments the attempt counter.

## Known Limitations

- The secret number is fixed at `85` and is not randomly generated.
- Input validation is not implemented; non-numeric input may cause unexpected behavior.
- The valid range (1 to 100) is not enforced when the player enters a guess.

## Planned Improvements

- Generate a random secret number using `rand()` and `srand(time(NULL))`.
- Add input validation and error handling for `scanf`.
- Remove the unused `char name` variable.
- Enforce the valid range of 1 to 100 for player input.
- Refactor the code into modular functions.
- Allow the player to replay the game without restarting the program.

## Project Structure

```
number-guessing-game/
├── number_guessing_game_v1_0_0.c
└── README.md
```

## Version History

| Version | Description                                   |
|---------|-----------------------------------------------|
| 1.0.0   | Initial release with fixed-number gameplay    |

## License

This project is provided for educational purposes. Add a license of your choice before distribution.

## Author
kunaldawar2011