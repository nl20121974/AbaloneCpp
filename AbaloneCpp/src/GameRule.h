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
#include "MoveBase.h"

using std::vector;

namespace boardgamemodels {

class GameRule {
private:
	vector<BoardDirection> Directions;
public:
	GameRule();
	vector<MoveBase> Moves;
	virtual ~GameRule();
	//faire une liste de gamemove et toutes les tester dans le canmove de matchmanager (gamemove avec canmove/makemove)
	//vector<PlayerMove> FindMoves(PlayerPiece piece);
	//bool CanMove(PlayerMove move);
	//void MakeMove(PlayerMove move);
};

}

#endif /* SRC_GAMERULE_H_ */
