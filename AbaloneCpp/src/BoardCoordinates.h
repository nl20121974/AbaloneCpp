/*
 * Coordinates.h
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#ifndef BOARDCOORDINATES_H_
#define BOARDCOORDINATES_H_

namespace boardgamemodels {

class BoardCoordinates {
public:
	BoardCoordinates();
	BoardCoordinates(int column, int row);
	int Column;
	int Row;
	friend bool operator ==(BoardCoordinates const& first, BoardCoordinates const& second);
};

}

#endif /* BOARDCOORDINATES_H_ */
