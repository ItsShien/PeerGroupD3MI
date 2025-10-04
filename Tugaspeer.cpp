#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentPlayer = 'X';

void printBoard() {
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

bool isValidMove(int move) {
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    return board[row][col] != 'X' && board[row][col] != 'O';
}

void makeMove(int move) {
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    board[row][col] = currentPlayer;
}

bool checkWin() {
    // Cek baris
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && (board[i][0] == 'X' || board[i][0] == 'O')) {
            return true;
        }
    }
    // Cek kolom
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && (board[0][i] == 'X' || board[0][i] == 'O')) {
            return true;
        }
    }
    // Cek diagonal
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && (board[0][0] == 'X' || board[0][0] == 'O')) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && (board[0][2] == 'X' || board[0][2] == 'O'))) {
        return true;
    }
    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    int move;
    while (true) {
        printBoard();
        cout << "Pemain " << currentPlayer << ", masukkan nomor kotak (1-9): ";
        cin >> move;
        if (isValidMove(move)) {
            makeMove(move);
            if (checkWin()) {
                printBoard();
                cout << "Pemain " << currentPlayer << " menang!" << endl;
                break;
            } else if (checkDraw()) {
                printBoard();
                cout << "Seri!" << endl;
                break;
            }
            switchPlayer();
        } else {
            cout << "Gerakan tidak valid." << endl;
        }
    }
    return 0;
}
