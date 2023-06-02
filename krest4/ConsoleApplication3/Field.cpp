#include "Field.h"

Field::Field()
{
	for (int rowCounter = 0; rowCounter < 3; rowCounter++) {
		for (int columnCounter = 0; columnCounter < 3; columnCounter++) {
			_field[rowCounter][columnCounter] = ' ';
		}
	}
}

char Field::GetCellValue(int row,int column)
{
	return _field[row][column];
}

void Field::CheckWin()
{
}
