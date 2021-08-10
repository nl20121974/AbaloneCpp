/*
 * GameBase.h
 *
 *  Created on: Aug 9, 2021
 *      Author: nl20121974
 */

#ifndef GAMEBASE_H_
#define GAMEBASE_H_

#include <vector>
#include "MoveBase.h"

using std::vector;

namespace boardgamemodels {

class GameBase {
public:
	GameBase();
	int GetMatchStatus();
	int GetPlayerTurn();
	vector<MoveBase> FindPossibleMoves();
	bool CanMakeMove();
	bool MakeMove();

	virtual ~GameBase();
};

}

#endif /* GAMEBASE_H_ */
