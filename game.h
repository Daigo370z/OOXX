#ifndef GAME_H
#define GAME_H


#include <iostream>
#include <string>
#include <time.h>
#include <map>
#include <Windows.h>
#include <array>
#include <sstream>
using namespace std;

enum win_associations { R1 = 1, R2, R3, C1, C2, C3, D1, D2 };
enum state { WIN = 0, DRAW, KEEP_PLAYING };
enum Color { DARKBLUE = 1, DARKGREEN, DARKTEAL, DARKRED, DARKPINK, DARKYELLOW, GRAY, DARKGRAY, BLUE, GREEN, TEAL, RED, PINK, YELLOW, WHITE };
void SetColor(Color c);

class game
{
public:
    game();
    bool is_the_move_valid(int);
    bool are_elements_equal(std::array<char, 3>);
    state state_of_game();
    void display_board();
    void win_display();
    void color_conv(char);
    void Winner(char);
protected:
    string player1, player2, dummy;
    char board[9];
    char p;
    array<char, 3> row1;
    array<char, 3> row2;
    array<char, 3> row3;
   array<char, 3> col1;
    array<char, 3> col2;
    array<char, 3> col3;
    array<char, 3> diag1;
    array<char, 3> diag2;
    bool board_full();

};

#endif
