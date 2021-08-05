/*
 * Board.h
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#ifndef BOARD_H_
#define BOARD_H_

namespace boardgamemodels {

class Board {
public:
	Board();
	Board(int columns, int rows);
	int Tiles[][];
	virtual ~Board();
};

}

#endif /* BOARD_H_ */
