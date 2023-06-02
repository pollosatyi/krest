#pragma once

#include<iostream>
class InputEngine
{
private:
	int _gameSelection;
	int GetNumberGame(int,int,char*);
	//int GetIntFromConsole(int, int);
public:
	int GetNumberToGame();
	int TurnRow();
	int TurnColumn();
		
	
};

