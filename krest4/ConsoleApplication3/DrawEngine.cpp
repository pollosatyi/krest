#include "DrawEngine.h"

#include<iostream>

void DrawEngine::ShowWelcomeMessage()
{
	std::cout << "Игра крестики нолики" << std::endl;
}

void DrawEngine::ShowSelectedGameType(InputEngine inputEngine)
{


	while (true) {
		this->_gameSelection = _inputEngine.GetNumberToGame();
		switch (_gameSelection) {
		case 1:
			std::cout << "Игра компьютер против компьютера началась: " << std::endl;
			break;
		case 2:
			std::cout << "Игра игрок  против компьютера началась: " << std::endl;
			break;
		case 3:
			std::cout << "Игра игрок  против игрока  началась: " << std::endl;
			break;
		case 4:
			std::cout << "Игра компьютер против игрока  началась: " << std::endl;
			break;
		default:
			std::cout << "ошибка ввода" << std::endl;
		}
		if (_gameSelection >= 1 && _gameSelection <= 4) { break; }
	}
}

void DrawEngine::ShowMenu()
{
	std::cout << "Выбор игры: " << std::endl;
	std::cout << "нажмите 1 для выбора компьютер(X) против компьютера(O)" << std::endl;
	std::cout << "нажмите 2 для выбора игрок против компьютера" << std::endl;
	std::cout << "нажмите 3 для выбора игрок против игрока" << std::endl;
	std::cout << "нажмите 4 для выбора компьютер против игрока" << std::endl;
	ShowSelectedGameType(_inputEngine);

}

int DrawEngine::GetInputEngine()
{
	return this->_gameSelection;
}

void DrawEngine::ShowField(Field field)
{
	std::cout << "+-+-+-+" << std::endl;
	for (int rowCounter = 0; rowCounter < 3; rowCounter++) {
		for (int columnCounter = 0; columnCounter < 3; columnCounter++) {
			std::cout << '|' << field.GetCellValue(rowCounter, columnCounter);
		}
		std::cout << '|' << std::endl;
		std::cout << "+-+-+-+" << std::endl;
	}

}
