#include "game.h"



void Game::GameStart()
{
	Field field;
	_drawEngine.ShowField(field);
	_drawEngine.GetInputEngine();
	// //int* _field=_field1.getField();
	//for (int rowCounter = 0; rowCounter < 3; rowCounter++) {
	//	for (int columnCounter = 0; columnCounter < 3; columnCounter++) {
	//		std::cout<<_field[rowCounter][columnCounter];
	//	}
	//}

}

Game::Game(DrawEngine drawEngine)
{
	_drawEngine = drawEngine;
}
