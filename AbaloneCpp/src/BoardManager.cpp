/*
 * BoardManager.cpp
 *
 *  Created on: Aug 6, 2021
 *      Author: nl20121974
 */

#include "BoardManager.h"
#include "BoardCoordinates.h"

namespace boardgamemodels {

BoardManager::BoardManager() {
	// TODO Auto-generated constructor stub

}
BoardCoordinates BoardManager::GetCoordinatesFrom(BoardCoordinates origin, int columnFactor, int rowFactor){
	BoardCoordinates coordinates = BoardCoordinates(1, 1);
	return coordinates;
}

BoardManager::~BoardManager() {
	// TODO Auto-generated destructor stub
}

}
