#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

void GoToJail::landOn(Player &curPlayer) {
	print();
	cout << "YOU ARE NOW IN JAIL" << endl;
	curPlayer.setJail( 1 );
}

void GoToJail::print() {
	std::cout << "LAND ON GO TO JAIL" << endl;

}