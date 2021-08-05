/*
 * Engine.cpp
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#include "Engine.h"
#include "Board.h"

namespace boardgamemodels {

Engine::Engine() {
	// TODO Auto-generated constructor stub

}

Engine::~Engine() {
}

void Engine::NewBoard(int columns, int rows)
{
	Board board;
	for (int i = 0; i < columns; i++){
		for (int j = 0; i < rows; i++){
			board.Tiles[i][j];
		}
	}
}

}
