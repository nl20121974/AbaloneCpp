/*
 * GameRule.h
 *
 *  Created on: AUG 6, 2021
 *      Author: nl20121974
 */

#ifndef SRC_GAMERULE_H_
#define SRC_GAMERULE_H_

#include <vector>

#include "BoardDirection.h"
#include "PlayerMove.h"
#include "PlayerPiece.h"

using std::vector;

namespace boardgamemodels {

class GameRule {
private:
	vector<BoardDirection> Directions;
public:
	GameRule();
	virtual ~GameRule();
	//vector<PlayerMove> FindMoves(PlayerPiece piece);
	//bool CanMove(PlayerMove move);
	//void MakeMove(PlayerMove move);
};

}

#endif /* SRC_GAMERULE_H_ */
