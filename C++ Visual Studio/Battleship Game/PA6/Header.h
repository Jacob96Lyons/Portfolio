#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PLAY_GAME 1
#define EXIT 2

typedef struct stats
{
	int hits;
	int	misses;
	int	shots_taken;
	float	hit_ratio;
	int	win_or_lose;
} Stats;

int main();
int welcome_screen();
int main_menu();
int main_menu_option(option);
int play_game();
int end_game();
int initialize_game_board(int matrix[][10]);
int update_board(int board[][10]);
void manually_place_ships_on_board(int* hr, int* hc, int* ori, int board[][10], int* length, char ship[][20], int mn);
int board_option();
void randomly_place_ships_on_board(int board[][10], int length, int* mn);
void main_game_loop(int your_board[][10], int op_board[][10], int first_turn);
void check_shot(int r, int c,int  board[][10], int* sunk, int* test);
int check_if_sunk_ship(int r, int c, int board[][10]);
int is_winner(int board[][10]);
void output_current_move(FILE* log, int row, int column, int hit_test);
void output_stats(FILE* outfile, Stats p1stats, Stats p2stats);

