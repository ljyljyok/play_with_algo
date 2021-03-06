#pragma once

const int GAME_ROW = 9;
const int GAME_COL = 9;
const int GAME_CELLS = 81;


const int BOARD_START = 11;
const int BOARD_COL = 10;
const int BOARD_CELLS = 111;

const int GAME_INF = 10000;
const int DRAW = 0;

typedef char CellType;

const CellType CELL_EMPTY = '-';
const CellType CELL_O = 'o';
const CellType CELL_X = 'x';


const int PLAYER_TYPE = 3;

const int PLAYER_NULL = 0;
const int PLAYER_A = 1;
const int PLAYER_B = 2;
const int DUMMY = 3;

#define BOARD_CELL(row, col)  ((col - 1) + 11 + (row - 1) * 10)
