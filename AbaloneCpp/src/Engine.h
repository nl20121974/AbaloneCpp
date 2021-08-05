/*
 * Engine.h
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#ifndef ENGINE_H_
#define ENGINE_H_

namespace boardgamemodels {

class Engine {
private:
	int Tiles[][];
public:
	Engine();
	virtual ~Engine();
	void NewBoard(int columns, int rows);
};

}

#endif /* ENGINE_H_ */
