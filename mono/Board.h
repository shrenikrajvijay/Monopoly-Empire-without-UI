

#ifndef BOARD_H_
#define BOARD_H_
#include "Space.h"
#include "Player.h"
using namespace std;
class Board {
public:
	int peeps;
	Board( int player_num );
	virtual ~ Board();
	vector<Space*> spaces;
	vector<Player*> * players;
	void addNames();
	vector<Player*>* getPlayer();
};

#endif /* BOARD_H_ */
