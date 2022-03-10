#include "Header.h"

int main_menu()
{
	int option;

	do
	{
		welcome_screen();
		printf("\nPlease select one\n\n	1. Play Game\n	2. Exit\n\nSelect: ");
		scanf("%d", &option);
	} while (option < 1 || option > 2);

	return option;
}

int main_menu_option(option)
{
	system("cls");
	switch (option)
	{
	case PLAY_GAME: play_game();
		break;
	case EXIT: return end_game();
		break;
	}
	return 0;
}

int board_option()
{
	int option;

	do
	{
		welcome_screen();
		printf("\nWould you like to manually place your board or have it randomly generated?\n\n	1. Manually Place\n	2. Randomly Generate\n\nSelect: ");
		scanf("%d", &option);
	} while (option < 1 || option > 2);

	return option;
}

int play_game()
{
	int matrix[10][10] = { 0 }, op_matrix[10][10] = { 0 }, head_column, head_row, orientation = 0, ship_length = 0, matrix_number = 0, option, starting;
	char ship_name[][20] = {"","destroyer","submarine","cruiser","battleship","carrier"};
	
	starting = select_who_starts_first();

	option = board_option();

	if (option == 1) //you
	{
		for (int count = 0; count < 5; count++)
		{
			if (count == 0)
			{
				ship_length = 5;
				matrix_number = 5;
			}
			if (count == 1)
			{
				ship_length = 4;
				matrix_number = 4;
			}
			if (count == 2)
			{
				ship_length = 3;
				matrix_number = 3;
			}
			if (count == 3)
			{
				ship_length = 3;
				matrix_number = 2;
			}
			if (count == 4)
			{
				ship_length = 2;
				matrix_number = 1;
			}

			manually_place_ships_on_board(&head_row, &head_column, &orientation, matrix, &ship_length, ship_name, matrix_number);
		}
	}
	else //you
	{
		for (int count = 0; count < 5; count++)
		{
			if (count == 0)
			{
				ship_length = 5;
				matrix_number = 5;
			}
			if (count == 1)
			{
				ship_length = 4;
				matrix_number = 4;
			}
			if (count == 2)
			{
				ship_length = 3;
				matrix_number = 3;
			}
			if (count == 3)
			{
				ship_length = 3;
				matrix_number = 2;
			}
			if (count == 4)
			{
				ship_length = 2;
				matrix_number = 1;
			}

			randomly_place_ships_on_board(matrix, ship_length, &matrix_number);
		}
	}
	system("cls");

	printf("Here is your board.\n");

	update_board(matrix);
	printf("\n");
	system("pause");

	for (int count = 0; count < 5; count++) //the computer
	{
		if (count == 0)
		{
			ship_length = 5;
			matrix_number = 5;
		}
		if (count == 1)
		{
			ship_length = 4;
			matrix_number = 4;
		}
		if (count == 2)
		{
			ship_length = 3;
			matrix_number = 3;
		}
		if (count == 3)
		{
			ship_length = 3;
			matrix_number = 2;
		}
		if (count == 4)
		{
			ship_length = 2;
			matrix_number = 1;
		}

		randomly_place_ships_on_board(op_matrix, ship_length, &matrix_number);
	}
	system("cls");

	main_game_loop(matrix, op_matrix, starting);
}

int welcome_screen()
{
	system("cls");
	printf("-x---o-x----x-o---x------o--x----x-o---Welcome to BATTLESHIP---o-x----x--o------x---o-x----x-o---x-\n\n");
	printf("Battleship is a 2 player, turn based game in which you try to find and sink your oppenents ships.\n"
		"Both players have 5 ships of different size. The ships are as follows:\n\n"
		"	     Length	Letter\n"
		"Carrier:	5	  c\nBattleship:	4	  b\nCruiser:	3	  r\nSubmarine:	3	  s\nDestroyer:	2	  d\n\n"
		"Rules:	1. You and your opponent will place your ship on the board. Note: You will not know where your their ships are\n"
		"	   and vice versa.\n\n"

		"	2. You will take turns shooting at each others ships by calling coordinates. You each have one shot per turn.\n\n"

		"	3. The winner is decided by who ever destroys all their opponents ships first.\n");

}

int end_game(void)
{
	printf("Thanks for playing!\n\n-Dev Jake\n\n");

	return 1;
}

void manually_place_ships_on_board(int* hr, int* hc, int* ori, int board[][10], int* length, char ship[][20], int mn)
{
	int x;

	do
	{
		x = 0;

		system("cls");

		welcome_screen();

		update_board(board);

		do
		{
			printf("\n\nWhere would you like to place the front of your %s?\nRow: ", ship[mn]);
			scanf("%d", hr);
			printf("Column: ");
			scanf("%d", hc);
		} while ((*hc < 0 || *hc > 9) || (*hr < 0 || *hr > 9));

		do
		{
			printf("\nWould you like the ship to be:\n	1. Vertical\n	2. Horizontal\n\nSelect: ");
			scanf("%d", ori);
		} while (*ori < 1 || *ori > 2);

		if (*ori == 1)
		{
			if (*hr + *length > 10)
			{
				printf("\nERROR! That is off the board. Please try again. ");
				system("pause");
				x = 1;
				continue;
			}
		}

		if (*ori == 2)
		{
			if (*hc + *length > 10)
			{
				printf("\nERROR! That is off the board. Please try again. ");
				system("pause");
				x = 1;
				continue;
			}
		} 

		for (int count = 0; count < *length; count++)
		{
			if (*ori == 1)
			{
				if (board[*hr + count][*hc] != 0)
				{
					printf("\nERROR! That is on top of another ship. Please try again. ");
					system("pause");
					x = 1;
					break;
				}

			}
			if(*ori == 2)
			{
	
				if (board[*hr][*hc + count] != 0)
				{
					printf("\nERROR! That is on top of another ship. Please try again. ");
					system("pause");
					x = 1;
					break;
				}
			}
		}
	} while (x == 1);

	for (int count = 0; count < *length; count++)
	{
		if (*ori == 1)
		{
			board[*hr + count][*hc] = mn;
		}
		if (*ori == 2)
		{
			board[*hr][*hc + count] = mn;
		}
	}
}

void randomly_place_ships_on_board(int board[][10], int length, int* mn)
{
	int x;
	int head_row, head_column, orientation;

	do
	{
		x = 0;

		system("cls");
		printf("Loading...");

		srand(time(NULL));

		do
		{
			head_row = rand() % 9;
			head_column = rand() % 9;
		} while ((head_row < 0 || head_row > 9) || (head_column < 0 || head_column > 9));

		do
		{
			orientation = rand() % 2 + 1;
		} while (orientation < 1 || orientation > 2);

		if (orientation == 1)
		{
			if (head_row + length > 10)
			{
				x = 1;
				continue;
			}
		}

		if (orientation == 2)
		{
			if (head_column + length > 10)
			{
				x = 1;
				continue;
			}
		}

		for (int count = 0; count < length; count++)
		{
			if (orientation == 1)
			{
				if (board[head_row + count][head_column] != 0)
				{
					x = 1;
					break;
				}

			}
			if (orientation == 2)
			{

				if (board[head_row][head_column + count] != 0)
				{
					x = 1;
					break;
				}
			}
		}
	} while (x == 1);

	for (int count = 0; count < length; count++)
	{
		if (orientation == 1)
		{
			board[head_row + count][head_column] = *mn;
		}
		if (orientation == 2)
		{
			board[head_row][head_column + count] = *mn;
		}
	}
}

int initialize_game_board(int board[][10]) //this sets the board to all '-' at first, but also updates the board when placing ships. Works for both manual placement and random placement.
{
	printf("\n  0123456789");

	for (int row = 0; row < 10; row++)
	{
		printf("\n%d ", row);

		for (int column = 0; column < 10; column++)
		{
			if (board[row][column] == 6)
			{
				printf("m");
			}
			else if (board[row][column] == 7)
			{
				printf("*");
			}
			else
			{
				printf("-");
			}
		}

	}
}

int update_board(int board[][10]) //this sets the board to all '-' at first, but also updates the board when placing ships. Works for both manual placement and random placement.
{
	printf("\n  0123456789");

	for (int row = 0; row < 10; row++)
	{
		printf("\n%d ", row);

		for (int column = 0; column < 10; column++)
		{
			if (board[row][column] == 0)
			{
				printf("-");
			}
			if (board[row][column] == 5)
			{
				printf("c");
			}
			if (board[row][column] == 4)
			{
				printf("b");
			}
			if (board[row][column] == 3)
			{
				printf("r");
			}
			if (board[row][column] == 2)
			{
				printf("s");
			}
			if (board[row][column] == 1)
			{
				printf("d");
			}
			if (board[row][column] == 6)
			{
				printf("m");
			}
			if (board[row][column] == 7)
			{
				printf("*");
			}
		}

	}
}

select_who_starts_first()
{
	int choice;

	do
	{
		welcome_screen();
		printf("\nWho should go first?\n\n	1. I take the first shot\n	2. The computer can, they'll need it\n\nSelect: ");
		scanf("%d", &choice);
	} while (choice < 1 || choice > 2);

	return choice;
}

void main_game_loop(int your_board[][10], int op_board[][10], int first_turn)
{
	int row, column, game_over = 0, hit_or_miss, turn_over, sunk = 0, win_test;
	FILE* outfile;
	Stats p1stats, p2stats;
	p1stats.hits = 0, p1stats.misses = 0, p1stats.hit_ratio = 0, p1stats.shots_taken = 0, p1stats.win_or_lose = 0;
	p2stats.hits = 0, p2stats.misses = 0, p2stats.hit_ratio = 0, p2stats.shots_taken = 0, p2stats.win_or_lose = 0;
	outfile = fopen("battleship.log", "w");

	do
	{

		system("cls");

		initialize_game_board(op_board);
		printf("\n");
		update_board(your_board);

		do 
		{
			if (first_turn == 2)
			{
				first_turn = 0;
				break;
			}

			turn_over = 0;

			do
			{
				printf("\n\nWhere should we fire captain?\n	Row: ");
				scanf("%d", &row);
				printf("	Column: ");
				scanf("%d", &column);

			} while ((row < 0 || row > 9) || (column < 0 || column > 9));

			if (op_board[row][column] == 6 || op_board[row][column] == 7)
			{
				printf("\nERROR! You already shot there, please try again. ");
				turn_over = 1;
				system("pause");
				continue;
			}
			else
			{
				p1stats.shots_taken++;
				check_shot(row, column, op_board, &sunk, &hit_or_miss);
				if (hit_or_miss == 1)
				{
					p1stats.hits++;
				}
				else
				{
					p1stats.misses++;
				}
					
				output_current_move(outfile, row, column, hit_or_miss);

				if (hit_or_miss == 2)
				{
					system("cls");

					initialize_game_board(op_board);
					printf("\n");
					update_board(your_board);

					printf("\n\nMiss! ");
					system("pause");
				}
				else
				{
					system("cls");

					initialize_game_board(op_board);
					printf("\n");
					update_board(your_board);

					printf("\n\nHit! ");


					if (sunk == 1)
					{
						printf("Ship sunk! ");
					}
					else
					{
						printf("It's not sunk yet. ");
					}

					
					system("pause");
				}
			}
		} while (turn_over == 1);

		win_test = is_winner(op_board);
		if (win_test == 0)
		{
			game_over = 1;
			continue;
		}

		do
		{
			turn_over = 0;

			do
			{
				row = rand() % 9;
				column = rand() % 9;

			} while ((row < 0 || row > 9) || (column < 0 || column > 9));

			if (your_board[row][column] == 6 || your_board[row][column] == 7)
			{
				turn_over = 1;
				continue;
			}
			else
			{
				p2stats.shots_taken++;
				check_shot(row, column, your_board, &sunk, &hit_or_miss);
				if (hit_or_miss == 1)
				{
					p2stats.hits++;
				}
				else
				{
					p2stats.misses++;
				}
				output_current_move(outfile, row, column, hit_or_miss);

				if (hit_or_miss == 2)
				{
					system("cls");

					initialize_game_board(op_board);
					printf("\n");
					update_board(your_board);

					printf("\n\nMy turn... Miss! ");
					system("pause");
				}
				else
				{
					system("cls");

					initialize_game_board(op_board);
					printf("\n");
					update_board(your_board);

					printf("\n\nHit! ");

					if (sunk == 1)
					{
						printf("Ship sunk! ");
					}
					else
					{
						printf("It's not sunk yet. ");
					}

					system("pause");
				}
			}
		} while (turn_over == 1);

		win_test = is_winner(your_board);
		if (win_test == 0)
		{
			game_over = 2;
			continue;
		}

	} while (game_over == 0);


	if (game_over == 1)
	{
		p1stats.win_or_lose++;
		printf("\nCongrats Captain! You have won. ");
		system("pause");
	}
	if (game_over == 2)
	{
		p2stats.win_or_lose++;
		printf("I'm sorry Captain! All our ships have sunk... We have lost. ");
		system("pause");
	}
	output_stats(outfile, p1stats, p2stats);
	fclose(outfile);
}

void check_shot(int r, int c, int board[][10], int* sunk, int* test)
{
	if (board[r][c] != 0)
	{
		*sunk = check_if_sunk_ship(r, c, board);
		board[r][c] = 7;
		*test = 1;
	}
	else
	{
		board[r][c] = 6;
		*test = 2;
	}

}

int check_if_sunk_ship(int r, int c, int board[][10])
{

	int ship_test = 0, sunk = 0;

	ship_test = board[r][c];

	for (int row = 0; row < 10; row++)
	{
		for (int column = 0; column < 10; column++)
		{
			if (board[row][column] == ship_test)
			{
				sunk = sunk + 1;
			}
		}

	}
	
	return sunk;
}

int is_winner(int board[][10])
{
	int winner_test = 0;

	for (int row = 0; row < 10; row++)
	{
		for (int column = 0; column < 10; column++)
		{
			if (board[row][column] == 1)
			{
				winner_test = winner_test + 1;
			}
			if (board[row][column] == 2)
			{
				winner_test = winner_test + 1;
			}
			if (board[row][column] == 3)
			{
				winner_test = winner_test + 1;
			}
			if (board[row][column] == 4)
			{
				winner_test = winner_test + 1;
			}
			if (board[row][column] == 5)
			{
				winner_test = winner_test + 1;
			}
		}
	}
	return winner_test;
}

void output_current_move(FILE* outfile, int row, int column, int hit_test)
{
	char hom;
	

	if (hit_test == 1)
	{
		hom = '*';
	}
	if (hit_test == 2)
	{
		hom = 'm';
	}

	fprintf(outfile, "Row: %d	Column: %d	%c\n", row, column, hom);
}

void output_stats(FILE* outfile, Stats p1stats, Stats p2stats)
{
	p1stats.hit_ratio = p1stats.hits / p1stats.misses;
	p2stats.hit_ratio = p2stats.hits / p2stats.misses;
	fprintf(outfile, "\nPlayer 1 Stats\n\nHits: %d	Misses: %d	Shots Taken: %d		Hit Ratio: %.02lf	Wins: %d\n", p1stats.hits, p1stats.misses, p1stats.shots_taken, p1stats.hit_ratio, p1stats.win_or_lose);
	fprintf(outfile, "\nPlayer 2 Stats\n\nHits: %d		Misses: %d	Shots Taken: %d		Hit Ratio: %.02lf	Wins: %d\n", p2stats.hits, p2stats.misses, p2stats.shots_taken, p2stats.hit_ratio, p2stats.win_or_lose);
}