/*
 * Board.h
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_

#include <list>

#include "BoardCoordinates.h"
using std::list;

namespace boardgamemodels {

class GameBoard : public list<BoardCoordinates> {
public:
	GameBoard();
	GameBoard(int columns, int rows);
	virtual ~GameBoard();

};

}

#endif /* GAMEBOARD_H_ */
