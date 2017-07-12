#include <iostream>
#include "board.hpp"

using namespace std;


Square::Square(char n, bool c){
	name = n;
	color = c;
	return;
}
bool Square::getColor(){
	return color;
}
char Square::getName(){
	return name;
}

Board::Board(){
	
			

