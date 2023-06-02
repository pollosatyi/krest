#pragma once

#include "field.h"
#include "DrawEngine.h"

#include<iostream>

class Game
{
private:
	DrawEngine _drawEngine;
public:
	Game(DrawEngine);

	void GameStart();
};

