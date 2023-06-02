#include "InputEngine.h"
#include "stdlib.h"
#include "stdio.h"
#include <string>




int InputEngine::GetNumberGame(int minValue, int maxValue, char* promt)
{
	std::string selection;
		do {
			std::cin >> selection;
			if (std::isdigit(*selection.begin())) {
				_gameSelection = stoi(selection);
			}
			if (_gameSelection < 1 || _gameSelection>4) {
				std::cout << "Неверный ввод попробуйте снова" << std::endl;
			}
		} while (_gameSelection < 1 || _gameSelection>4);
		return _gameSelection;
	
}


int InputEngine::GetNumberToGame()
{
	int getNumberGame = GetNumberGame(1, 4, (char*)("введите номер игры"));
	return getNumberGame;

}
int InputEngine::TurnRow()
{
	int turnRow = GetNumberGame(0, 3, (char*)("введите номер строки хода"));

	return turnRow;
}

int InputEngine::TurnColumn()
{
	int turnColumn = GetNumberGame(0, 3, (char*)("введите номер столбца хода"));
	return turnColumn;

}


