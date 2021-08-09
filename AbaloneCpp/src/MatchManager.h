/*
 * MatchManager.h
 *
 *  Created on: Aug 6, 2021
 *      Author: nl20121974
 */

#ifndef SRC_MATCHMANAGER_H_
#define SRC_MATCHMANAGER_H_

#include "BoardCoordinates.h"
#include "GameMatch.h"
#include "BoardManager.h"
#include "PlayerPiece.h"
#include "PlayerMove.h"
#include <vector>

using std::vector;

namespace boardgamemodels {

class MatchManager {
private:
	BoardManager _boardManager;
	GameMatch _match;
	vector<PlayerPiece> _pieces;
public:
	MatchManager(GameMatch match);
	bool CanMove(PlayerPiece piece, PlayerMove move);
	void MakeMove(PlayerPiece piece, PlayerMove move);
	PlayerPiece* GetPieceAt(BoardCoordinates coordinates);
};

}

#endif /* SRC_MATCHMANAGER_H_ */
