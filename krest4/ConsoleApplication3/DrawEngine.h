#pragma once

#include "field.h"
#include "InputEngine.h"

class DrawEngine
{
private:
	InputEngine _inputEngine;
	int _gameSelection;
public:
	void ShowWelcomeMessage();
	void ShowSelectedGameType(InputEngine);
	void ShowMenu();
	int GetInputEngine();
	void ShowField(Field);
};

