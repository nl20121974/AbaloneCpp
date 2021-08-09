/*
 * MatchManager.cpp
 *
 *  Created on: Aug 6, 2021
 *      Author: nl20121974
 */

#include "MatchManager.h"
#include "GameMatch.h"
#include "PlayerPiece.h"
#include "BoardManager.h"
#include "PlayerMove.h"
#include "BoardManager.h"
#include "BoardCoordinates.h"

namespace boardgamemodels {

MatchManager::MatchManager(GameMatch match) {
	_match = match;
}

bool MatchManager::CanMove(PlayerPiece piece, PlayerMove move){
	BoardCoordinates nextCoordinates = this->_boardManager.GetCoordinatesFrom(piece.Coordinates, move.Column, move.Row);
	PlayerPiece* nextPiece = GetPieceAt(nextCoordinates);
	if (nextPiece == NULL)
		return false;
	if ((*nextPiece).Player.Index != piece.Player.Index)
		return false;
	return this->CanMove(*nextPiece, move);
}

void MatchManager::MakeMove(PlayerPiece piece, PlayerMove move)
{

}

PlayerPiece* MatchManager::GetPieceAt(BoardCoordinates coordinates){
	int pieceCount = (int)this->_pieces.size();
	for (int i = 0; i < pieceCount; ++i) {
		if (this->_pieces[i].Coordinates == coordinates)
		{
			return &this->_pieces[i];
		}
	}
	return NULL;
}

}
