/*
 * Engine.cpp
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#include "GameBoard.h"
#include "GameEngine.h"
#include "BoardCoordinates.h"

namespace boardgamemodels {

GameEngine::GameEngine() {
	// TODO Auto-generated constructor stub

}

GameEngine::~GameEngine() {
}

void GameEngine::NewBoard(int columns, int rows)
{
	GameBoard board;
	for (int i = 0; i < columns; i++){
		for (int j = 0; i < rows; i++){
			_board.push_back(BoardCoordinates(i, j));
		}
	}
}

}
