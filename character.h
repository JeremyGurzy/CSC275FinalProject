#pragma once
// Included string file to utilize strings
#include <string>

//Utilizing this allows us to not have to put std on every line
using namespace std;

//This is our base class, this is where our name, power and health are.

//Class defined for characters across all inherited files, all attributes and methods have to be in curly brackets
class character

{ //Starting scope operator, this starts a code block

// Private is data that can only be accessed by the class
// Everything is private until you say otherwise
// Changed private to protected because we want to be able to manipulate these values
// Protected means the inherited classes can manipulate the values here
protected:
	//string variable for all character names
	string name;
	//integer for power level of all characters
	int powerLevel;
	//integer for health of all characters
	int health;
	//int for attack damage of all characters
	int attackDamage;
	int attackDamage2;

	string name2;
	// Our Methods are stored here
public:
	// This constructor has no return types
	character();
	// This constructor has return types for our characters
	character(string Name, int Health, int Power, int Damage);

	//declare the function then put what it will do in character.cpp
	// add virtual to make it an abstract class
	virtual void display();

	//Functions that haev fighting mechanics
	int fight(); 
	//Fight 2 just has the same functions but has name 2
	int fight2();
	//Named take damage to make things easier when writing in main
	int takeDamage();
	//Take Damage2 is for the other fight, because you cant have a function utilizing the same name in a complete different fight
	int takeDamage2();

	//Function for healing
	int heal();
	//String functions for retrieving names
	string getName(); 
	string getName2();
	//Bool Function for returning health and used to check if character is alive
	virtual bool characterAlive();
}; // Ending scope operator, this end a block of code.

//One idea for adding attack function is to provide each character with an option to attack and write the function here that calculates how to 