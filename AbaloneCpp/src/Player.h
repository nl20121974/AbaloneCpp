/*
 * Player.h
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
using std::string;

namespace boardgamemodels {

class Player {
public:
	Player();
	virtual ~Player();
	string Name;
	int Elo;
};

}

#endif /* PLAYER_H_ */
