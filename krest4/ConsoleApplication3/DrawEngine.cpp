#include "DrawEngine.h"

#include<iostream>

void DrawEngine::ShowWelcomeMessage()
{
	std::cout << "���� �������� ������" << std::endl;
}

void DrawEngine::ShowSelectedGameType(InputEngine inputEngine)
{


	while (true) {
		this->_gameSelection = _inputEngine.GetNumberToGame();
		switch (_gameSelection) {
		case 1:
			std::cout << "���� ��������� ������ ���������� ��������: " << std::endl;
			break;
		case 2:
			std::cout << "���� �����  ������ ���������� ��������: " << std::endl;
			break;
		case 3:
			std::cout << "���� �����  ������ ������  ��������: " << std::endl;
			break;
		case 4:
			std::cout << "���� ��������� ������ ������  ��������: " << std::endl;
			break;
		default:
			std::cout << "������ �����" << std::endl;
		}
		if (_gameSelection >= 1 && _gameSelection <= 4) { break; }
	}
}

void DrawEngine::ShowMenu()
{
	std::cout << "����� ����: " << std::endl;
	std::cout << "������� 1 ��� ������ ���������(X) ������ ����������(O)" << std::endl;
	std::cout << "������� 2 ��� ������ ����� ������ ����������" << std::endl;
	std::cout << "������� 3 ��� ������ ����� ������ ������" << std::endl;
	std::cout << "������� 4 ��� ������ ��������� ������ ������" << std::endl;
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
