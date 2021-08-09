/*
 * MoveBase.h
 *
 *  Created on: Aug 9, 2021
 *      Author: nl20121974
 */

#ifndef MOVEBASE_H_
#define MOVEBASE_H_

#include "PlayerPiece.h"
#include "PlayerMove.h"

namespace boardgamemodels {

class MoveBase {
public:
	MoveBase();
	bool CanMove(PlayerPiece piece, PlayerMove move);
	void MakeMove(PlayerPiece piece, PlayerMove move);
	virtual ~MoveBase();
};

}

#endif
