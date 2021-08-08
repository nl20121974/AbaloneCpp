/*
 * Move.h
 *
 *  Created on: Aug 6, 2021
 *      Author: nl20121974
 */

#ifndef SRC_MOVE_H_
#define SRC_MOVE_H_

#include "BoardDirection.h"
#include "PlayerPiece.h"

namespace boardgamemodels {

class PlayerMove {
public:
	PlayerMove(int column, int row);
	int Column;
	int Row;

};

}

#endif /* SRC_MOVE_H_ */
