/*
 * Piece.h
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#ifndef PLAYERPIECE_H_
#define PLAYERPIECE_H_

#include "BoardCoordinates.h"
#include "MatchPlayer.h"

namespace boardgamemodels {

class PlayerPiece {
public:
	PlayerPiece();
	BoardCoordinates Coordinates;
	MatchPlayer Player;
	virtual ~PlayerPiece();
};

}

#endif /* PLAYERPIECE_H_ */
