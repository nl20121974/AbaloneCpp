/*
 * Engine.h
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#ifndef GAMEENGINE_H_
#define GAMEENGINE_H_

#include "GameBoard.h"

namespace boardgamemodels {

class GameEngine {
private:
	GameBoard _board;
public:
	GameEngine();
	virtual ~GameEngine();
	void NewBoard(int columns, int rows);
};

}

#endif /* GAMEENGINE_H_ */
