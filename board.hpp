#include <iostream>
using namespace std;

class Square{
	//Name the square objects a1-g8
	private:
		bool color;
		char name[2];
	public:
		Square(char name, bool col);
		bool  getColor();
		char getName();

class Board{
	private:
		Square board [8][8];

	public:
		Board();
		//get the color of a square using a8 notation
		char getColor(char name);
		//posistion for black or white	
		bool orient;
