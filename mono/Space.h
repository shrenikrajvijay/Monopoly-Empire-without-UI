

#ifndef SPACE_H_
#define SPACE_H_
#include <string>
#include "Player.h"
#include "BillBoard.h"
using namespace std;

class Space {


  public:
	Space( int, string);
    virtual void landOn(Player&){};
    virtual void print(void){};
	virtual ~Space();
	int spot;
	std::string title;


//    virtual void print() =0;
};

  class Ownable : public Space {
  public:
	Ownable(int, std::string, int, int); //HERE
	BillBoard * bboard;
	// virtual void buy(void){}; // IMPORTANT
	virtual ~Ownable();
	// virtual BillBoard* getBillBoard(void){};
    int owner;
	int owned;
	int cost;
	void buy(Player&);
	void rent(Player&);
};
	
class Go: public Space {
public:
	Go( int a, std::string b ) : Space(a,b){}
	void landOn(Player&);
	void print();
};

class Nerf: public Ownable {
	// BillBoard * bboard;

public:
	Nerf( int, std::string, int, int );
	void landOn(Player&);
	void print();
	// void buy(Player&);
	BillBoard * getBillBoard();
	// void rent(Player&);
	// Player * findOwner();
};


class RivalTowerTax: public Space {
public:
	RivalTowerTax( int a, std::string b ) : Space(a,b){}
	void landOn(Player&);
	void print();
};

class Transformers: public Ownable {
	// BillBoard * bboard;   //IMPORTANT
public:
	Transformers( int, std::string, int, int);
	void landOn(Player&);
	void print();
	// void buy(Player&);
	BillBoard * getBillBoard();
};

class EmpireSpace: public Space {
public:
	EmpireSpace( int a, std::string b ) : Space(a,b){}
	void landOn(Player&);
	void print();
};

class Spotify: public Ownable {
	// BillBoard * bboard;
public:
	Spotify( int, std::string, int, int);
	void landOn(Player&);
	void print();
	// void buy(Player&);
	BillBoard * getBillBoard();
};

class Beats: public Ownable {
public:
	Beats( int, std::string , int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class Chance: public Space {
public:
	Chance( int a, std::string b ) : Space(a,b){}
	void landOn(Player&);
	void print();
};

class Fender: public Ownable {
public:
	Fender( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class JustVisiting: public Space {
public:
	JustVisiting( int a, std::string b ) : Space(a,b){}
	void landOn(Player&);
	void print();
};

class JetBlue: public Ownable {
public:
	JetBlue( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class EA: public Ownable {
public:
	EA( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};
class ElectricCompany: public Ownable {
	// BillBoard * bboard;
public:
	ElectricCompany( int, std::string, int, int );
	void landOn(Player &curPlayer);
	void print();
	void buy(Player&);
	BillBoard * getBillBoard();
	void rent();
};

class HasBro: public Ownable {
public:
	HasBro( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class UnderArmour: public Ownable {
public:
	UnderArmour( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class Carnival: public Ownable {
public:
	Carnival( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class Yahoo: public Ownable {
public:
	Yahoo( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class FreeParking: public Space {
public:
	FreeParking( int a, std::string b ) : Space(a,b){}
	void landOn(Player&);
	void print();
};

class Paramount: public Ownable {
public:
	Paramount( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class Chevrolet: public Ownable {
public:
	Chevrolet( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class EBay: public Ownable {
public:
	EBay( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class XGames: public Ownable {
public:
	XGames( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class Ducati: public Ownable {
public:
	Ducati( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class Macdonalds: public Ownable {
public:
	Macdonalds( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class GoToJail: public Space {
public:
	GoToJail( int a, std::string b ) : Space(a,b){}
	void landOn(Player&);
	void print();
};

class Intel: public Ownable {
public:
	Intel( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class XBox: public Ownable {
public:
	XBox( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class WaterWorks: public Ownable {
public:
	WaterWorks( int, std::string, int, int );
	void landOn(Player &curPlayer);
	void print();
	void buy(Player&);
	BillBoard * getBillBoard();
	void rent();
};

class Nestle: public Ownable {
public:
	Nestle( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class Samsung: public Ownable {
public:
	Samsung( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

class TowerTax: public Space {
public:
	TowerTax( int a, std::string b ) : Space(a,b){}
	void landOn(Player&);
	void print();
};

class CocaCola: public Ownable {
public:
	CocaCola( int, std::string, int, int);
	void landOn(Player&);
	void print();
	BillBoard * getBillBoard();

};

#endif /* SPACE_H_ */
