#include <iostream>


int main()
{

	int ArrJ[10] = {};
	int ArrH[10] = {};

	int IndexJ = 0;
	int IndexH = 0;

	while (10 != IndexJ)
	{
		ArrJ[IndexJ] =  2 * (IndexJ + 1);
		IndexJ += 1;
	}

	while (10 != IndexH)
	{
		ArrH[IndexH] = 1 + IndexH * 2;
		IndexH += 1;

	}


}