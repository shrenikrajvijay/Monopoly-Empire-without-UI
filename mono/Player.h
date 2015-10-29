

#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>
#include "Tower.h"
#include <vector>
// #include "Space.h"
using namespace std;

class Space;

class Player {
private:
	string name;
	int money;
	int position;
	int at_jail;
	Tower * tower;
	vector<Player*> * players;
	int num_player;
	int my_id;
	vector<Space*> spaces;

public:
	Player( string input, vector<Player*>* , int, int, vector<Space*> );
	virtual ~Player();
	string getName();
	int getPosition();
	void setPostion( int );
	int getTowerValue();
	void changeMoney( int );
	int getMoney();
	void setGlobal(int);
	Tower * getTower();
	void sneakySwap(Player&, Player&);
	void steal( Player& );
	vector<Player*> getPlayers();
	int getNum();
	int getId();
	void testPlayers();
	int isInJail();
	void setJail( int );
	vector<Space*> getSpaces();
};

#endif /* PLAYER_H_ */
