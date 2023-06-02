#pragma once
class Field
{
private:
	char _field[3][3];
public:
	Field();

	char GetCellValue(int row, int column);
	void CheckWin();
};


