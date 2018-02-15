#ifndef __BOARD_H__
#define __BOARD_H__

#define SCORE 4
#define X 7
#define Y 6

class board{
private:
	int matrix[X][Y];
public:
	board();
	void setToken(int col, int select);
	int checkVertical();
	int checkHorizontal();
	int checkLeftDiag();
	int checkRightDiag();
	int checkBoard();
	void print();
	int lastToken(int col);
};



#endif