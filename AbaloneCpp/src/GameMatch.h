/*
 * Match.h
 *
 *  Created on: Aug 4, 2021
 *      Author: nl20121974
 */

#ifndef GAMEMATCH_H_
#define GAMEMATCH_H_

#include <list>
#include "PlayerPiece.h"
using std::list;

namespace boardgamemodels {

class GameMatch {
public:
	GameMatch();
	list<PlayerPiece> Pieces; // ou c le boardmanager qui contient les tiles et le matchmanager qui contiient les pieces
	virtual ~GameMatch();
};

}

#endif /* GAMEMATCH_H_ */
