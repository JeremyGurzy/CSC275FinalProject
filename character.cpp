// iostream = Input and Output Stream, think of Stream as data flowing like water. A river flowing of data.
#include <iostream>
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"

//This character C++ File is our 
//Include header file and will define what the methods do

//Constructor for character
character::character() {}

//This constructor has overloads
character::character(string Name, int Health, int Power, int Damage)
{//Starting scope operator, this starts a code block
	//defined name
	name = Name;
	//defined power level
	powerLevel = Power;
	//defined health
	health = Health;
	//defined damage
	attackDamage = Damage;

	//encapsulation means rules for data
	// if is for checking health for 0
	if (Health == 0)
	{
		//cout will display when character is at 0 health
		cout << "\n\nThis character has expired." << endl;


	}
	// Else is for if character is not at 0, remain alive
	else
	{
		// health variable for just normal health
		health = Health;
	}

} // Ending scope operator, this end a block of code.

// remember to put void in front of the method because it is not a constructor
void character::display()
{ //Starting scope operator, this starts a code block

	// all couts display our variables

	cout << "\nName: " << name << endl;

	cout << "Health = " << health << endl;

	cout << "Power Level = " << powerLevel << endl;

	cout << "Attack Damage = " << attackDamage << endl;


}; // Ending scope operator, this end a block of code.




//Main fighting function, will have to make a second for the other characters
int character::fight()
{

	//created int to subtract attackDamage from health
	
	int newHealth = health - attackDamage;
	//Supposed top display name and 
	cout << "\n" << name << " takes " << attackDamage << " damage! ";
	cout << "After the attack, " << newHealth << " HP remains." << std::endl;
	health = newHealth;



	return newHealth;
}

int character::fight2()
{

	//created int to subtract attackDamage from health

	int newHealth = health - attackDamage;
	//Supposed top display name and 
	cout << "\n" << name2 << " takes " << attackDamage << " damage! ";
	cout << "After the attack, " << newHealth << " HP remains." << std::endl;
	health = newHealth;



	return newHealth;
}
//second function for fighting because we needed a way to make the fight "fair" and not have the opponent win. Take this as a "taking damage" function
int character::takeDamage()
{
	//had to set attackDamage2 here because it would not retrieve attackDamage2
	int attackDamage2 = 25;
	//created health variable to simulate taking damage in the game
	int newHealth = health - attackDamage2;
	//Display to user that their character is taking damage
	std::cout << "\n" << name << " takes " << attackDamage2 << " damage! ";
	std::cout << "After the attack, " << newHealth << " HP remains." << std::endl;
	health = newHealth;

	//return new health to the main function
	return newHealth;
}
int character::takeDamage2()
{
	//had to set attackDamage2 here because it would not retrieve attackDamage2
	int attackDamage2 = 25;
	//created health variable to simulate taking damage in the game
	int newHealth = health - attackDamage2;
	//Display to user that their character is taking damage
	std::cout << "\n" << name2 << " takes " << attackDamage2 << " damage! ";
	std::cout << "After the attack, " << newHealth << " HP remains." << std::endl;
	health = newHealth;

	//return new health to the main function
	return newHealth;
}



//Function for healing 
int character::heal()
{
	//created integer for healing adding 10 points to health
	int healCharacter = health + 10;
	//made health into new variable for function
	health = healCharacter;
	cout << "\nYou chose to heal, but your opponent may still attack!";
	//displayed what is going on to user
	std::cout << "\nAfter healing, " << healCharacter << " HP remains." << std::endl;
	//returning new variable for health
	return healCharacter;
}


//String created to return the character names
string character::getName()
{
	//Returns name to function
	return name;

}

string character::getName2()
{
	//returns second name to the function
	return name2;
}
//Is this even necessary if we have encapsulation?
//created to check if health is 0, supposed to return health
bool character::characterAlive() 
{
	return health > 0;
}



//Full idea in mind is to take the attack damage for the character file and replace it with critical damage. This would allow for different spells to become functions that inflict different amounts of damage.
//However for demo purposes I think I can settle for ONE spell that does CRITICAL DAMAGE and have one fighting option that takes X amount of health from opponents