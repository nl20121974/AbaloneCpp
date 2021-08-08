/*
 * Player.h
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#ifndef MATCHPLAYER_H_
#define MATCHPLAYER_H_

#include <string>
using std::string;

namespace boardgamemodels {

class MatchPlayer {
public:
	MatchPlayer();
	int Index;
	string Name;
	int Elo;
};

}

#endif /* MATCHPLAYER_H_ */
