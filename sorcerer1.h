#pragma once
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"
//Utilizing this allows us to not have to put std on every line
using namespace std;

//This class will also inherit the character class, this is for a future update

//Class defined for wizards
class sorcerer1 : public character
{//Starting scope operator, this starts a code block

//For variables we want private
// Private is data that can only be accessed by the class
//None of this will be used until future update
private:
	// integer for amount of spell points
	int spellPoints;
	//string for type of wizard
	string wizardClass;
	// string for special move
	string specialMove;
	// integer for special move damage
	int specialMoveDamage;

	// Our Methods are stored here
public:
	// This constructor has no return types
	sorcerer1();

	//All virtual voids display the characters when called
	virtual void display();
	virtual void display2();
	virtual void display3();
	virtual void display4();

}; // Ending scope operator, this end a block of code.


