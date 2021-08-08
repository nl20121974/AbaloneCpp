/*
 * BoardManager.h
 *
 *  Created on: Aug 6, 2021
 *      Author: nl20121974
 */

#ifndef SRC_BOARDMANAGER_H_
#define SRC_BOARDMANAGER_H_

#include "GameBoard.h"
#include "PlayerPiece.h"

namespace boardgamemodels {

class BoardManager {
private:
	GameBoard _board;
public:
	BoardManager();
	PlayerPiece FindPieceAt(int column, int row);
	BoardCoordinates GetCoordinatesFrom(BoardCoordinates origin, int columnFactor, int rowFactor);
	virtual ~BoardManager();
	void Reset();
};

}

#endif /* SRC_BOARDMANAGER_H_ */
