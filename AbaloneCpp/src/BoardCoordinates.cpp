/*
 * Coordinates.cpp
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#include "BoardCoordinates.h"

namespace boardgamemodels {

BoardCoordinates::BoardCoordinates(int column, int row) : Column(column), Row(row) {
}

bool operator ==(BoardCoordinates const& first, BoardCoordinates const& second) {
	return true;
}


}
