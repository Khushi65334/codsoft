#include <iostream>
using namespace std;

void displayBoard(char *board) {
    cout << "     |     |     \n";
    cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
    cout << "||_\n";
    cout << "     |     |     \n";
    cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
    cout << "||_\n";
    cout << "     |     |     \n";
    cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
}

void playerMove(char *board, char player) {
    int position = -1;
    while (position < 0 || position > 8 || board[position] != ' ') {
        cout << "Player " << (player == 'X' ? '1' : '2') << ", enter your move (1-9): ";
        if (!(cin >> position)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number.\n";
            continue;
        }
        position--;
        if (position < 0 || position > 8 || board[position] != ' ') {
            cout << "Invalid move! Try again.\n";
        }
    }
    board[position] = player;
}

bool isWinner(char *board, char player) {
    bool winConditions[8] = {
        (board[0] == player && board[1] == player && board[2] == player)

