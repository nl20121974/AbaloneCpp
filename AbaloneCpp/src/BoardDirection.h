/*
 * Direction.h
 *
 *  Created on: Aug 6, 2021
 *      Author: nl20121974
 */

#ifndef SRC_DIRECTION_H_
#define SRC_DIRECTION_H_

namespace boardgamemodels {

class BoardDirection {
public:
	BoardDirection(int column, int row);
	int Column;
	int Row;
};

}

#endif /* SRC_DIRECTION_H_ */
