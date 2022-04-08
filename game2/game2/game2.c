#define _CRT_SECURE_NO_WARNINGS 1

#include"game2.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);	
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
		return  mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
 		mine[x - 1][y + 1] - 8 * '0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("�������Ų��׵�����:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("���ź�����Ϸ����\n");
				DisplayBoard(mine,row,col);
				break;
			}
			else//������
			{
				//����x��y������Χ�м�����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�,����������!\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}

//չ�����ܵ�ʱ�� - �ݹ�
void open_board(char mine[ROW][COL], char show[ROW][COL], int x, int y)
{
	if (mine[x][y] == '0' && x >= 0 && y >= 0 && show[x][y] == '*')
	{
		show[x][y] = get_mine_count(mine, x, y) + '0';
	}
	if (mine[x][y - 1] == '0' && x >= 0 && y - 1 >= 0 && show[x][y - 1] == '*')
	{
		show[x][y - 1] = get_mine_count(mine, x, y - 1) + '0';
		if (get_mine_count(mine, x, y - 1) == 0)
		{
			open_board(mine, show, x, y - 1);
		}
	}
	if (mine[x][y + 1] == '0' && x >= 0 && y + 1 >= 0 && show[x][y + 1] == '*')
	{
		show[x][y + 1] = get_mine_count(mine, x, y + 1) + '0';
		if (get_mine_count(mine, x, y + 1) == 0)
		{
			open_board(mine, show, x, y + 1);
		}
	}
	if (mine[x - 1][y] == '0' && x - 1 >= 0 && y >= 0 && show[x - 1][y] == '*')
	{
		show[x - 1][y] = get_mine_count(mine, x - 1, y) + '0';
		if (get_mine_count(mine, x - 1, y) == 0)
		{
			open_board(mine, show, x - 1, y);
		}
	}
	if (mine[x - 1][y - 1] == '0' && x - 1 >= 0 && y - 1 >= 0 && show[x - 1][y - 1] == '*')
	{
		show[x - 1][y - 1] = get_mine_count(mine, x - 1, y - 1) + '0';
		if (get_mine_count(mine, x - 1, y - 1) == 0)
		{
			open_board(mine, show, x - 1, y - 1);
		}
	}
	if (mine[x - 1][y + 1] == '0' && x - 1 >= 0 && y + 1 >= 0 && show[x - 1][y + 1] == '*')
	{
		show[x - 1][y + 1] = get_mine_count(mine, x - 1, y + 1) + '0';
		if (get_mine_count(mine, x - 1, y + 1) == 0)
		{
			open_board(mine, show, x - 1, y + 1);
		}
	}
	if (mine[x + 1][y + 1] == '0' && x + 1 >= 0 && y + 1 >= 0 && show[x + 1][y + 1] == '*')
	{
		show[x + 1][y + 1] = get_mine_count(mine, x + 1, y + 1) + '0';
		if (get_mine_count(mine, x + 1, y + 1) == 0)
		{
			open_board(mine, show, x + 1, y + 1);
		}
	}
	if (mine[x + 1][y] == '0' && x + 1 >= 0 && y >= 0 && show[x + 1][y] == '*')
	{
		show[x + 1][y] = get_mine_count(mine, x + 1, y) + '0';
		if (get_mine_count(mine, x + 1, y) == 0)
		{
			open_board(mine, show, x + 1, y);
		}
	}
	if (mine[x + 1][y - 1] == '0' && x + 1 >= 0 && y - 1 >= 0 && show[x + 1][y - 1] == '*')
	{
		show[x + 1][y - 1] = get_mine_count(mine, x + 1, y - 1) + '0';
		if (get_mine_count(mine, x + 1, y - 1) == 0)
		{
			open_board(mine, show, x + 1, y - 1);
		}
	}
}