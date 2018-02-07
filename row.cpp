#include "row.hpp"
#include <iostream>
using namespace std;

board::board()
{
	for (int i=0; i < 7; ++i)
	{
		this->matrix[i].r1=0;
		this->matrix[i].r2=0;
		this->matrix[i].r3=0;
		this->matrix[i].r4=0;
		this->matrix[i].r5=0;
		this->matrix[i].r6=0;
		this->matrix[i].player=0;
		this->matrix[i].cpu=0;
	}
}

void board::print()
{
	cout <<"\n\n"
		  <<this->matrix[0].r1 <<' ' <<this->matrix[1].r1 <<' ' <<this->matrix[2].r1 <<' ' <<this->matrix[3].r1
		  <<' ' <<this->matrix[4].r1 <<' ' <<this->matrix[5].r1 <<' ' <<this->matrix[6].r1
		  <<'\n'
		  <<this->matrix[0].r2 <<' ' <<this->matrix[1].r2 <<' ' <<this->matrix[2].r2 <<' ' <<this->matrix[3].r2
		  <<' ' <<this->matrix[4].r2 <<' ' <<this->matrix[5].r2 <<' ' <<this->matrix[6].r2
		  <<'\n'
		  <<this->matrix[0].r3 <<' ' <<this->matrix[1].r3 <<' ' <<this->matrix[2].r3 <<' ' <<this->matrix[3].r3
		  <<' ' <<this->matrix[4].r3 <<' ' <<this->matrix[5].r3 <<' ' <<this->matrix[6].r3
		  <<'\n'
		  <<this->matrix[0].r4 <<' ' <<this->matrix[1].r4 <<' ' <<this->matrix[2].r4 <<' ' <<this->matrix[3].r4
		  <<' ' <<this->matrix[4].r4 <<' ' <<this->matrix[5].r4 <<' ' <<this->matrix[6].r4
		  <<'\n'
		  <<this->matrix[0].r5 <<' ' <<this->matrix[1].r5 <<' ' <<this->matrix[2].r5 <<' ' <<this->matrix[3].r5
		  <<' ' <<this->matrix[4].r5 <<' ' <<this->matrix[5].r5 <<' ' <<this->matrix[6].r5
		  <<'\n'
		  <<this->matrix[0].r6 <<' ' <<this->matrix[1].r6 <<' ' <<this->matrix[2].r6 <<' ' <<this->matrix[3].r6
		  <<' ' <<this->matrix[4].r6 <<' ' <<this->matrix[5].r6 <<' ' <<this->matrix[6].r6
		  <<"\n\n";

}

bool board::checkVertical()
{
	int player=0, cpu=0;
	for (int i=0; i < 7; ++i)
	{
		if (this->matrix[i].r1 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i].r1 == 2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;

		if (this->matrix[i].r2 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i].r2 == 2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;

		if (this->matrix[i].r3 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i].r3 == 2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;

		if (this->matrix[i].r4 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i].r4 == 2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;

		if (this->matrix[i].r5 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i].r5 == 2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;

		if (this->matrix[i].r6 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i].r6 == 2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
	}
	return false;
}

bool board::checkHorizontal()
{
	int player=0, cpu=0;
	for (int j=0; j < 7; ++j)
	{
		if (this->matrix[j].r1 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[j].r1 == 2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
	}


	player=cpu=0;
	for (int j=0; j < 7; ++j)
	{
		if (this->matrix[j].r2 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[j].r2 == 2) cpu++;
		if (player >4 || cpu > 4) return true;
	}


	player=cpu=0;
	for (int j=0; j < 7; ++j)
	{
		if (this->matrix[j].r3 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[j].r3 == 2) cpu++;
		if (player >4 || cpu > 4) return true;
	}


	player=cpu=0;
	for (int j=0; j < 7; ++j)
	{
		if (this->matrix[j].r4 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[j].r4 == 2) cpu++;
		if (player >4 || cpu > 4) return true;
	}


	player=cpu=0;
	for (int j=0; j < 7; ++j)
	{
		if (this->matrix[j].r5 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[j].r5 == 2) cpu++;
		if (player >4 || cpu > 4) return true;
	}

	player=cpu=0;
	for (int j=0; j < 7; ++j)
	{
		if (this->matrix[j].r6 == 1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[j].r6 == 2) cpu++;
		if (player >4 || cpu > 4) return true;
	}

	return false;
}

bool board::checkLeftDiag()
{
	int player=0, cpu=0;
	for (int i=0; i < 3;++i)
	{
		if (this->matrix[i].r6==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i].r6==2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
		if (this->matrix[i+1].r5==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i+1].r5==2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
		if (this->matrix[i+2].r4==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i+2].r4==2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
		if (this->matrix[i+3].r3==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i+3].r3==2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
		if (this->matrix[i+4].r2==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i+4].r2==2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
		if (this->matrix[i+5].r1==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i+5].r1==2) cpu++;

		if (player >= SCORE|| cpu >= SCORE ) return true;

		player=cpu=0;
	}
	if (this->matrix[0].r5==1)
	{
			cpu=0;
			player++;
	}
	else if (this->matrix[0].r5==2)
	{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;


	if (this->matrix[1].r4==1)
	{
			cpu=0;
			player++;
		}
	else if (this->matrix[1].r4==2)
	{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;


	if (this->matrix[2].r3==1)
	{
			cpu=0;
			player++;
		}
	else if (this->matrix[2].r3==2)
	{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;


	if (this->matrix[2].r2==1)
	{
			cpu=0;
			player++;
	}
	else if (this->matrix[2].r2==2)
	{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;


	if (this->matrix[3].r1==1)
	{
			cpu=0;
			player++;
		}
	else if (this->matrix[3].r1==2)
	{
			cpu++;
			player=0;
		}

	if (player >= SCORE|| cpu >= SCORE) return true;

	return false;
}

bool board::checkRightDiag()
{
	int player=0, cpu=0;
	for (int i=6; i > 5;--i)
	{
		if (this->matrix[i].r6==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i].r6==2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
		if (this->matrix[i-1].r5==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i-1].r5==2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
		if (this->matrix[i-2].r4==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i-2].r4==2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
		if (this->matrix[i-3].r3==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i-3].r3==2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
		if (this->matrix[i-4].r2==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i-4].r2==2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;
		if (this->matrix[i-5].r1==1)
		{
			cpu=0;
			player++;
		}
		else if (this->matrix[i-5].r1==2)
		{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;

		player=cpu=0;
	}
	if (this->matrix[6].r5==1)
	{
			cpu=0;
			player++;
		}
	else if (this->matrix[6].r5==2)
	{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;


	if (this->matrix[5].r4==1)
	{
			cpu=0;
			player++;
		}
	else if (this->matrix[5].r4==2)
	{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;


	if (this->matrix[4].r3==1)
	{
			cpu=0;
			player++;
		}
	else if (this->matrix[4].r3==2)
	{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;


	if (this->matrix[3].r2==1)
	{
			cpu=0;
			player++;
		}
	else if (this->matrix[3].r2==2)
	{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;


	if (this->matrix[2].r1==1)
	{
			cpu=0;
			player++;
		}
	else if (this->matrix[2].r1==2)
	{
			cpu++;
			player=0;
		}
		if (player >= SCORE || cpu >= SCORE) return true;

	return false;
}

bool board::checkBoard()
{
	bool good=false;
	if (checkVertical() || good) good=true;
	if (checkHorizontal() || good) good=true;
	if (checkLeftDiag() || good) good=true;
	if (checkRightDiag() || good) good=true;
	return good;
}

void board::setToken(int col, int select)
{
	if (this->matrix[col].r1 != 0)
	{
		printf("That line is full\n");
		return;
	}
	else if (this->matrix[col].r6==0) this->matrix[col].r6=select;
	else if (this->matrix[col].r5==0) this->matrix[col].r5=select;
	else if (this->matrix[col].r4==0) this->matrix[col].r4=select;
	else if (this->matrix[col].r3==0) this->matrix[col].r3=select;
	else if (this->matrix[col].r2==0) this->matrix[col].r2=select;
	else if (this->matrix[col].r1==0) this->matrix[col].r1=select;

	if (select == 1) this->matrix[col].player++;
	else this->matrix[col].cpu++;

	return;
}