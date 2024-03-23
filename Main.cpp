#include <iostream>
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"
//Include sorcerer header file to utilize variables
#include "sorcerer.h"
//Include wizard header file to utilize variables
#include "wizards.h"
//Included windows header file to utilize the pause and cls commands
#include "windows.h"
//Included for pointers
#include <memory>
//Included extra wizard header for fighting
#include "wizard1.h"
//Included extra sorcerer header for fighting
#include "sorcerer1.h"

//Utilizing this allows us to not have to put std on every line
using namespace std;

//This function is for wizards
void wizard();
//This function is for sorcerers
void sorcerers();
//function for first fight
void firstFight();
//function for second fight
void secondFight();
//function for third fight
void thirdFight();
//function for fourth fight
void fourthFight();

//All for functions are for playable fights
void firstPlayableFight();
void secondPlayableFight();
void thirdPlayableFight();
void fourthPlayableFight();
//Title function created from website provided 
void title()
{

	cout << R"(                                                                                                                                                                                               
 _       ___                      __                        _____                                         
| |     / (_)___  ____ __________/ /____   _   _______     / ___/____  _____________  ________  __________
| | /| / / /_  / / __ `/ ___/ __  / ___/  | | / / ___/     \__ \/ __ \/ ___/ ___/ _ \/ ___/ _ \/ ___/ ___/
| |/ |/ / / / /_/ /_/ / /  / /_/ (__  )   | |/ (__  )     ___/ / /_/ / /  / /__/  __/ /  /  __/ /  (__  ) 
|__/|__/_/ /___/\__,_/_/   \__,_/____/    |___/____(_)   /____/\____/_/   \___/\___/_/   \___/_/  /____/)" << endl;




}

//Backup plan
/*void title2()
{


	cout << R"(   ______                     __   ______      __           __  _         _       ___                      __
  / ____/________ _____  ____/ /  / ____/___ _/ /___ ______/ /_(_)____   | |     / (_)___  ____ __________/ /
 / / __/ ___/ __ `/ __ \/ __  /  / / __/ __ `/ / __ `/ ___/ __/ / ___/   | | /| / / /_  / / __ `/ ___/ __  / 
/ /_/ / /  / /_/ / / / / /_/ /  / /_/ / /_/ / / /_/ / /__/ /_/ / /__     | |/ |/ / / / /_/ /_/ / /  / /_/ /  
\____/_/   \__,_/_/ /_/\__,_/   \____/\__,_/_/\__,_/\___/\__/_/\___/     |__/|__/_/ /___/\__,_/_/   \__,_/)" << endl;


}*/

//These are string functions for user choice
string getUserChoice();
string getUserChoice2();
string getUserChoice3();
string getUserChoice4();
string getUserChoice5();
string getUserChoice6();
string getUserChoice7();
//String function for looping game or ending
string userQuestionPlayAgain();

//Main function
int main()
{ //Starting scope operator, this starts a code block

	//string variable for user choice
	std::string userChoice;
	//call title function
	title();
	//Three cout for introduction of the program
	cout << "\n\nWelcome player! \nThis is a teaser for a future game that is currently in the works.";
	cout << "\nIn this teaser you will have a choice to see a simulation or play as the character.";
	cout << "\nIn the simulation arena you can see the character at full power and their potential. This is more like a trailer for the character.\nWhen you play as the character, you will start at level 1.";
	cout << "\nI would like to note that this game is still in ALPHA so a level system has not yet been created. \n\nWhat list would you like to see first?";
	//Call the string function for getting user choice
	userChoice = getUserChoice();

	//return 0 because main returns an int
	return 0;
} // Ending scope operator, this end a block of code.


// Function that stores all wizard values
void wizard()
{ //Starting scope operator, this starts a code block
	//string variable for user choice
	//Clears screen so it is not jumbled up with information
	system("cls");

	//Weak pointers created for items and spells
	weak_ptr<wizardStuff> weakWizardItems;
	weak_ptr<wizardStuff> weakWizardSpells;
	
	//Created 2 shared pointers for items and spells
	auto wizardItems = make_shared<wizardStuff>();
	auto wizardSpells = make_shared<wizardStuff>();

	//Our unique pointer for the names.					0		  1
	unique_ptr<string[]>wizardNames(new string[2]{ "Kalimvor", "Kelter" });

	//string variable for user choice
	string userChoice2;

	cout << "\nWizards:" << endl;
	// call class for wizards with all respected data
	wizards w1("Kalimvor of Time", 500, 1000, 100, 120, "Chronurgy", "Arcane Abeyance", 75);
	// calls method for wizard 1 
	w1.display();
	cout << "\nKalimvor is the Grand Wizard of Time. With his power he can bend the flow of time; reversing his enemies attacks and changing the state of the battlefield." << endl;

	//couts utilizing shared and unique pointers.
	cout << "\nSpells that can be casted by " << wizardNames.get()[0] << ": " << wizardSpells.get()->wSpell << " and " << wizardSpells.get()->wSpell2 << endl;
	cout << "\nItems best matched with this Wizard: " << wizardItems.get()->wItem << " and " << wizardItems.get()->wItem3 << endl;

	cout << "\n****************************************************" << endl;

	//think of character like declaring an integer
	// call class for wizards with all respected data
	wizards w2("Kelter of the Undead", 250, 120, 100, 120, "Necromancer", "Command Undead", 100);
	// calls method for wizard 2 
	w2.display();

	cout << "Kelter is a wizard of the undead. With his power he can make the dead rise and use them to fight off his enemies in the battlefield.\n" << endl;

	//cout utilizing shared and unique pointers.
	cout << "\nSpells that can be casted by " << wizardNames.get()[1] << ": " << wizardSpells.get()->wSpell3 << " and " << wizardSpells.get()->wSpell4 << endl;
	cout << "\nItems best matched with this Wizard: " << wizardItems.get()->wItem2 << " and " << wizardItems.get()->wItem4 << endl;

	//Weak pointers are now pointing to shared pointers,
	weakWizardItems = wizardItems;
	weakWizardSpells = wizardSpells;
	
	//call the string function
	userChoice2 = getUserChoice2();

	//This will throw away ALL pointers in this function.
	return;
} // Ending scope operator, this end a block of code.


//function that stores all sorcerer value
void sorcerers()
{ //Starting scope operator, this starts a code block
	//Clears screen so it is not jumbled up with information
	system("cls");

	//Weak pointers created for items and spells
	weak_ptr<sorcererStuff> weakSorcererItems;
	weak_ptr<sorcererStuff> weakSorcererSpells;

	//cout will display if weak pointer is pointing to share pointers.
	//cout << "\n\nWeak pointers for items and spells created (1 for True, 0 for False): " << weakSorcererItems.expired() << " and " << weakSorcererSpells.expired() << endl;

	//Created 2 shared pointers for items and spells
	auto sorcererItems = make_shared<sorcererStuff>();
	auto sorcererSpells = make_shared<sorcererStuff>();

	//Our unique pointer for the names.				     0			1
	unique_ptr<string[]>sorcererNames(new string[2]{ "Arther", "Dr. Strange" });

	//string for user choice value
	string userChoice2;

	//cout display
	cout << "\nSorcerers" << endl;

	// call class of sorcerer with all respected values
	sorcerer s1("Arther of the Lost", 250, 150, 120, 75, "The School of Magic", "Cursed Magic", "Spirits");
	// will display s1 values
	s1.display();

	cout << "\nArther of the Lost is a sorcerer that studied Curse Magic. His concentration lead him down a dark path of evil sorcerery. He was exiled from his school and now uses his magic to curse his enemies.\n";
	//couts utilizing shared and unique pointers.
	cout << "\nSpells that can be casted by " << sorcererNames.get()[0] << ": " << sorcererSpells.get()->Spell << " and " << sorcererSpells.get()->Spell2 << endl;
	cout << "\nItems best matched with this Sorcerer: " << sorcererItems.get()->sItem << " and " << sorcererItems.get()->sItem2 << endl;


	cout << "\n****************************************************" << endl;


	// call class of sorcerer with all respected values
	sorcerer s2("Dr. Strange: The Sorcerer Supreme", 250, 500, 110, 100, "The Temple of Kamar-Taj", "Mystic Arts", "The Darkhold");
	//will display s2 values
	s2.display();

	cout << "\nThough he was once a neurosurgeon, after losing his dearly beloved Christina; in his decent to darkenss Dr. Strange became the almighty powerful Supreme Sorcerer. He is the beholder of the time stone and a great rival to Kalimvor of Time.";
	//couts utilizing shared and unique pointers.
	cout << "\n\nSpells that can be casted by " << sorcererNames.get()[1] << ": " << sorcererSpells.get()->Spell3 << " and " << sorcererSpells.get()->Spell4 << endl;
	cout << "\nItems best matched with this Sorcerer: " << sorcererItems.get()->sItem3 << " and " << sorcererItems.get()->sItem4 << endl;

	//Weak pointers are now pointing to shared pointers
	weakSorcererItems = sorcererItems;
	weakSorcererSpells = sorcererSpells;

	//call the string function
	userChoice2 = getUserChoice2();

	//This will throw away ALL pointers in this function.
	return;
} // Ending scope operator, this end a block of code.

//Function for first fight
void firstFight()
{ //Starting scope operator, this starts a code block
	//Clears screen so it is not jumbled up with information
	system("cls");
	cout << "\nYou chose: \n\n";

	// call class for wizards with all respected data
	wizards w1("Kalimvor of Time", 500, 1000, 100, 120, "Chronurgy", "Arcane Abeyance", 75);
	// calls method for wizard 1 
	w1.display();



	std::cout << "\nHere is a training simulator, your opponent will not fight back.  \n\nYou will be fighting Dr. Strange.";

	// call class of sorcerer with all respected values
	sorcerer s2("Dr. Strange: The Sorcerer Supreme", 250, 500, 110, 100, "The Temple of Kamar-Taj", "Mystic Arts", "The Darkhold");
	//will display s2 new values
	s2.display(true, true);

	//Pauses screen so user can read the screen
	system("pause");
	//Clears screen so it is not jumbled up with information
	system("cls");

	//Title for the scene
	cout << "\nWelcome to the simulation arena.\n\n";
	//Got fonts from website provided
	cout << R"(
_  _ ____ _    _ _  _ _  _ ____ ____    _  _ ____     ___  ____     ____ ___ ____ ____ _  _ ____ ____ 
|_/  |__| |    | |\/| |  | |  | |__/    |  | [__      |  \ |__/     [__   |  |__/ |__| |\ | | __ |___ 
| \_ |  | |___ | |  |  \/  |__| |  \     \/  ___] .   |__/ |  \ .   ___]  |  |  \ |  | | \| |__] |___)" << "\n\n";
	//Pauses screen so user can read the screen
	system("pause");

	// all five couts are dialogue
	cout << "\nFIGHT!\n";
	cout << "\n\nWith no hesitation, Kalimvor begins to draw power from the universe. He knows his rival is powerless in the simulation arena, so he takes this advantage to humiliate him.\nAs he draws more and more power, Dr. Strange begins realizes how powerless he is here.\n" << endl;
	cout << "\n\"I have waited too long for this Strange.\"" << endl;
	cout << "\nKalimvor extends his hand to Dr. Strange. In a torturing move, Kalimvor speeds up the flow of time around him then reverses it consistently putting Dr. Strange through unimaginable pain.\n\nKalimvor, after several minutes, ends Dr. Strange's torturing and withers him away in time." << endl;
	cout << "\n\nDr. Strange has been defeated.";

	// call class of sorcerer with all 0 values, but will not display. Instead Character has expired will display.
	sorcerer ("Dr. Strange: The Sorcerer Supreme", 0, 0, 0, 0, "The Temple of Kamar-Taj", "Mystic Arts", "The Darkhold");

	// READ WHEN YOU GET BACK. DO NOT PUT THE DISPLAY, JUST ENTER THE NAME AND SUCH AND JUST LET IT DO ITS THING

	cout << "\n\nKalimvor is the victor.";

	//string for user choice value
	string userQuestion;
	//call our string function for looping game
	userQuestion = userQuestionPlayAgain();



}// Ending scope operator, this end a block of code.
//Function for the second fight
void secondFight()
{ //Starting scope operator, this starts a code block
	//Clears screen so it is not jumbled up with information
	system("cls");

	
	cout << "\nYou chose: \n\n";

	// call class for wizards with all respected data
	wizards w2("Kelter of the Undead", 250, 120, 100, 120, "Necromancer", "Command Undead", 100);
	// calls method for wizard 2 
	w2.display();

	std::cout << "\nHere is a training simulator, your opponent will not fight back.  \n\nYou will be fighting Arther of the Lost.";

	// call class of sorcerer with all respected values
	sorcerer s1("Arther of the Lost", 250, 150, 120, 75, "The School of Magic", "Cursed Magic", "Spirits");
	// will display s1 values
	s1.display(true, true);


	//Pauses screen so user can read the screen
	system("pause");
	//Clears screen so it is not jumbled up with information
	system("cls");

	//Title for the scene
	cout << "\nWelcome to the simulation arena. \n\n";
	//Got fonts from website provided
	cout << R"(
_  _ ____ _    ___ ____ ____    _  _ ____     ____ ____ ___ _  _ ____ ____ 
|_/  |___ |     |  |___ |__/    |  | [__      |__| |__/  |  |__| |___ |__/ 
| \_ |___ |___  |  |___ |  \     \/  ___] .   |  | |  \  |  |  | |___ |  \ )"<< "\n\n";

	//Pauses screen so user can read the screen
	system("pause");

	//The next six couts are all part of the scene
	cout << "\nFIGHT!\n";
	cout << "\n\"Don't take this personal Arther.\" Kelter brings out his staff slamming the base onto the ground. The arena grows dark as undead creatures begin to rise.";
	cout << "\n\"Kelter you don't have to do this.\" Arther exclaims, \"We can fi-\". The undead swarm Arther.";
	cout << "\n\nAs Arther screams and fights, he is taken over by the undead......\nAfter the dead are finished feasting, Arther lies defeated.";
	cout << "\n\nKelter scoffs: \"You were always weak brother.\"";
	cout << "\n\nArther of the Lost has been defeated.";

	// call class of sorcerer with values of 0 , but will not display. Instead Character has expired will display.
	sorcerer("Arther of the Lost", 0, 0, 0, 0, "The School of Magic", "Cursed Magic", "Spirits");

	cout << "\n\nKelter of the Undead is the victor.";

	//string for user choice value
	string userQuestion;
	//call our string function for looping game
	userQuestion = userQuestionPlayAgain();

}// Ending scope operator, this end a block of code.
//function for third fight scene
void thirdFight()
{ //Starting scope operator, this starts a code block
	//Clears screen so it is not jumbled up with information
	system("cls");

	cout << "\nYou chose: \n\n";

	// call class of sorcerer with all respected values
	sorcerer s1("Arther of the Lost", 250, 150, 120, 75, "The School of Magic", "Cursed Magic", "Spirits");
	// will display s1 values
	s1.display();

	std::cout << "\nHere is a training simulator, the opponent will not fight back.  \n\nYour chosen character will showcase his power.";

	// call class for wizards with all respected data
	wizards w2("Kelter of the Undead", 250, 120, 100, 120, "Necromancer", "Command Undead", 100);
	// calls method for wizard 2 
	w2.display(true, true);

	//Pauses screen so user can read the screen
	system("pause");
	//Clears screen so it is not jumbled up with information
	system("cls");

	//Title for the scene
	cout << "\nWelcome to the simulation arena. \n\n";
	//Got fonts from website provided
	cout << R"(
____ ____ ___ _  _ ____ ____    _  _ ____     _  _ ____ _    ___ ____ ____ 
|__| |__/  |  |__| |___ |__/    |  | [__      |_/  |___ |     |  |___ |__/ 
|  | |  \  |  |  | |___ |  \     \/  ___] .   | \_ |___ |___  |  |___ |  \)" << "\n\n";
	//Pauses screen so user can read the screen
	system("pause");

	// all six couts are part of the scene
	cout << "\nFIGHT!\n";
	cout << "\n\"Kelter brother, I have waited for this day.\" Arther takes advantage of Kelter having no power. He begins to levitate, eyes glowing and conjuring power from The Spirit Realm. The arena fills with souls of past warriors and of the damned; all lives taken and used by Kelter.";
	cout << "\n\n\"I may fear death, but I will never fear you, you mere child\", Kelter exclaims. Suddenly Kelter is met with the face of the past warriors and poor souls he has used in battle. \"A cowardly move I see.\"";
	cout << "\nWith the souls angry and ready to kill, they swarm Kelter, beating him until he is left a bloody mess. The souls can now rest, knowing their previous soulkeeper is now deceased.";
	cout << "\n\nArther returns to the ground and steps toward Kelters body, \"Father would have been proud if we fought together....\"";
	cout << "\n\nKelter of the Undead has been defeated";

	// call class for wizards with values of 0, but will not display. Instead Character has expired will display.
	wizards("Kelter of the Undead", 0, 0, 0, 0, "Necromancer", "Command Undead", 0);

	cout << "\n\nArther of the Lost is the victor.";

	//string for user choice value
	string userQuestion;
	//call our string function for looping game
	userQuestion = userQuestionPlayAgain();

}// Ending scope operator, this end a block of code.
//function for fourth fight scene
void fourthFight()
{ //Starting scope operator, this starts a code block
	//Clears screen so it is not jumbled up with information
	system("cls");

	cout << "\nYou chose: \n\n";

	// call class of sorcerer with all respected values
	sorcerer s2("Dr. Strange: The Sorcerer Supreme", 250, 500, 110, 100, "The Temple of Kamar-Taj", "Mystic Arts", "The Darkhold");
	//will display s2 new values
	s2.display();

	std::cout << "\nHere is a training simulator, the opponent will not fight back.  \n\nYour chosen character will showcase his power." << endl;

	// call class for wizards with all respected data
	wizards w1("Kalimvor of Time", 500, 1000, 100, 120, "Chronurgy", "Arcane Abeyance", 75);
	// calls method for wizard 1 
	w1.display(true, true);

	//Pauses screen so user can read the screen
	system("pause");
	//Clears screen so it is not jumbled up with information
	system("cls");

	cout << "\nWelcome to the simulation arena.\n\n";
	//Got fonts from website provided
	cout << R"(
___  ____     ____ ___ ____ ____ _  _ ____ ____    _  _ ____     _  _ ____ _    _ _  _ _  _ ____ ____ 
|  \ |__/     [__   |  |__/ |__| |\ | | __ |___    |  | [__      |_/  |__| |    | |\/| |  | |  | |__/ 
|__/ |  \ .   ___]  |  |  \ |  | | \| |__] |___     \/  ___] .   | \_ |  | |___ | |  |  \/  |__| |  \)" << "\n\n";

	//Pauses screen so user can read the screen
	system("pause");

	//The next seven couts are all part of the scene
	cout << "\nFIGHT!\n";
	cout << "\n\"Oh Kalimvor, I will enjoy this.\" Strange begins to conjure his power, summoning creatures from The Dark Dimension. \"Ya know I've seen what you did to me in this arena, what I will put you through will have you begging for mercy.\" ";
	cout << "\n\nThe Mythical Hydra wraps its tenticle around Kalimvor, \"What is it you speak of? I've never step foot in this arena.\" Strange laughs, \"Guess you're not as powerful as you think.\"";
	cout << "\n\nStrange's third eye opens, slowly transforming into his demonic self. He extends his hand to Kalimvor, rising him into the air. \"Your power is mine.\" He begins to drain Kalimvors power and life force as slowly as possible, putting Kalimvor in more pain than ever imagined.";
	cout << "\n\nWhen finished, Kalimvor's skeleton drops onto the arena. But the torture isn't finished. Strange reverses time on Kalimvor's body bringing him back to life. \"What is this?\" Kalimvor says.\n\"Told you I'd have you begging for mercy.\"";
	cout << "\n\nJust as Kalimvor did in the other battle, Strange entraps Kalimvor in a time bubble. Simultaneously, Kalimvor's life is sped up and reversed. Months go by, \"Guess you've had enough.\" \nStrange ends Kalimvor.";
	cout << "\n\nKalimvor has been defeated.";

	// call class for wizards with new 0 values, but will not display. Instead Character has expired will display.
	wizards("Kalimvor of Time", 0, 0, 0, 0, "Chronurgy", "Arcane Abeyance", 0);

	cout << "\n\nDr. Strange is the victor.";

	//string for user choice value
	string userQuestion;
	//call our string function for looping game
	userQuestion = userQuestionPlayAgain();

}// Ending scope operator, this end a block of code.


//This function is built for Kalimvor vs Dr. Strange
void firstPlayableFight()
{
	//Statment will clear the screen
	system("cls");

	//Called our classes and renamed them to be able to utilize functions and variables
	wizard1 wiz;
	sorcerer1 sor;
	string fightOrRun;

	cout << "\nYou chose: \n";
	//call display function for wizards
	wiz.display();

	cout << "\n\nYou will be fighting: ";

	//will display sorcerer info
	sor.display2();

	//while loop created for fighting and will only loop if main character is alive
	while (wiz.characterAlive()) {


		cout << "\n\nYour choices: (A)ttack, (H)eal or (G)ive Up: \n";
		//IF created to check if your character is alive
		if (wiz.characterAlive())
		{
			//Getline for user input
			getline(std::cin, fightOrRun);

		}
		//else created IF character or opponent health is 0
		else
		{
			//Call our display name function and display the name
			cout << wiz.getName() << " has died. You lose!";

			//string for user choice value
			string userQuestion;
			//Call our string function
			userQuestion = userQuestionPlayAgain();

		}
		//If created for if user chooses to attack
		if (fightOrRun == "A" || fightOrRun == "a" || fightOrRun == "Attack" || fightOrRun == "attack")
		{
			//Call our get name function and display the names here
			cout << wiz.getName() << " attacks " << sor.getName() << ".";

			//THIS TOOK HOURS TO FIGURE OUT BUT IF YOU WANT THE OPPONENT TO TAKE DAMAGE AND NOT YOUR CHARACTER, YOU MUST WRITE THE CLASS AND THEN THE .FIGHT()
			//Sorcerer will take damage when this function is called.
			sor.fight();

			//If created to check if opponent is alive
			if (sor.characterAlive())
			{
				//Call our display name function and display the name
				cout << sor.getName() << " retaliates!";
				//Same as the last function, if you want your character to take damage, there must be a function that takes damage on your character.
				//Called take damage function if your character is still alive
				wiz.takeDamage();

			}
			//else created IF character or opponent health is 0
			else
			{
				//Call our display name function and display the name
				cout << sor.getName() << " has died. You are victorious!";
				//string for user choice value
				string userQuestion;
				//Call our string function
				userQuestion = userQuestionPlayAgain();
			}
		}
		//Else if created if user chooses to heal
		else if (fightOrRun == "H" || fightOrRun == "h" || fightOrRun == "Heal" || fightOrRun == "heal")
		{
			//Call our heal function from the character class
			wiz.heal();
			//call our take damage function from the character class
			wiz.takeDamage();

		}
		//Else if created if user gives up
		else if (fightOrRun == "G" || fightOrRun == "g" || fightOrRun == "Give up" || fightOrRun == "give up")
		{
			//couts will display when chosen
			cout << "\nYou chose to give up, you have lost this battle.";
			cout << "\n\nThank you for playing!";
			//This will break the while loop
			break;
		}
	}
}

//Second playable fight function is for if user chose a different character.
void secondPlayableFight()
{
	//cls clears the screen
	system("cls");

	//Called our classes and renamed them to be able to utilize functions and variables
	wizard1 wiz;
	sorcerer1 sor;
	string fightOrRun;

	cout << "\nYou chose: \n";
	// call class for wizards with all respected data
	sor.display();


	cout << "\n\nYou will be fighting: ";

	//will display wizard values
	wiz.display2();


	//while loop created for fighting and will only loop if main character is alive
	while (sor.characterAlive()) {

		cout << "\n\nYour choices: (A)ttack, (H)eal or (G)ive Up: \n";

		//If created to check if chosen character is alive
		if (sor.characterAlive())
		{
			//Getline for getting user input
			getline(std::cin, fightOrRun);

		}
		//else created IF character or opponent health is 0
		else
		{
			//Call our display name function and display the name
			cout << sor.getName() << " has died. You lose!";
			//string for user choice value
			string userQuestion;
			//Call our string function
			userQuestion = userQuestionPlayAgain();

		}
		//If created for IF user chooses to attack
		if (fightOrRun == "A" || fightOrRun == "a" || fightOrRun == "Attack" || fightOrRun == "attack")
		{
			//Call our display name function and display the names
			cout << sor.getName() << " attacks " << wiz.getName() << ".";

			//THIS TOOK HOURS TO FIGURE OUT BUT IF YOU WANT THE OPPONENT TO TAKE DAMAGE AND NOT YOUR CHARACTER, YOU MUST WRITE THE CLASS AND THEN THE .FIGHT()
			//Sorcerer will take damage when this function is called.
			wiz.fight();

			//If created to check if opponent is alive
			if (wiz.characterAlive())
			{
				//Call our display name function and display the name
				cout << wiz.getName() << " retaliates!";
				//Same as the last function, if you want your character to take damage, there must be a function that takes damage on your character.
				sor.takeDamage();

			}
			//else created IF character or opponent health is 0
			else
			{
				//Call our display name function and display the name
				cout << wiz.getName() << " has died. You are victorious!";
				//string for user choice value
				string userQuestion;
				//Call our string function
				userQuestion = userQuestionPlayAgain();
			}
		}
		//Else if created for user choice to heal
		else if (fightOrRun == "H" || fightOrRun == "h" || fightOrRun == "Heal" || fightOrRun == "heal")
		{
			//Call our heal function from the character file and heal assigned character
			sor.heal();
			//Call our take damage function and attack assigned character
			sor.takeDamage();
		}
		//Else if created if user gives up
		else if (fightOrRun == "G" || fightOrRun == "g" || fightOrRun == "Give up" || fightOrRun == "give up")
		{

			cout << "\nYou chose to give up, you have lost this battle.";
			cout << "\n\nThank you for playing!";
			//This will break the while loop
			break;
		}
	}
}
//Function for third playable fight
void thirdPlayableFight()
{
	//Statment will clear the screen
	system("cls");

	//Called our classes and renamed them to be able to utilize functions and variables
	wizard1 wiz;
	sorcerer1 sor;
	string fightOrRun;

	cout << "\nYou chose: \n";
	// call display function to display wizard
	wiz.display3();

	cout << "\n\nYou will be fighting: ";

	//will display our sorcerer
	sor.display4();

	//while loop created for fighting and will only loop if main character is alive
	while (wiz.characterAlive()) 
	{

		cout << "\n\nYour choices: (A)ttack, (H)eal or (G)ive Up: \n";
		//If created to check if chosen character is alive
		if (wiz.characterAlive())
		{
			//Get line to get user input
			getline(std::cin, fightOrRun);

		}
		//else created IF character or opponent health is 0
		else
		{
			//Call our display name 2 function and display the name
			cout << wiz.getName2() << " has died. You lose!";
			//string for user choice value
			string userQuestion;
			//Call our string function
			userQuestion = userQuestionPlayAgain();
		}
		//If created for IF user chooses to attack
		if (fightOrRun == "A" || fightOrRun == "a" || fightOrRun == "Attack" || fightOrRun == "attack")
		{
			//Call our get name 2 function and display names
			cout << wiz.getName2() << " attacks " << sor.getName2() << ".";

			//THIS TOOK HOURS TO FIGURE OUT BUT IF YOU WANT THE OPPONENT TO TAKE DAMAGE AND NOT YOUR CHARACTER, YOU MUST WRITE THE CLASS AND THEN THE .FIGHT()
			//Sorcerer will take damage when this function is called.
			sor.fight2();

			//If created to check if opponent is alive
			if (sor.characterAlive())
			{
				//Call our get name 2 function and display name
				cout << sor.getName2() << " retaliates!";
				//Same as the last function, if you want your character to take damage, there must be a function that takes damage on your character.
				//Call our take damage 2 function and assign it to the character
				wiz.takeDamage2();

			}
			//else created IF character or opponent health is 0
			else
			{
				//Call our get name 2 function and display name
				cout << sor.getName2() << " has died. You are victorious!";
				//string for user choice value
				string userQuestion;
				//Call our string function
				userQuestion = userQuestionPlayAgain();
			}
		}
		//Else if created for user choice to heal
		else if (fightOrRun == "H" || fightOrRun == "h" || fightOrRun == "Heal" || fightOrRun == "heal")
		{
			//Call our heal function from the character file and heal assigned character
			wiz.heal();
			//Call our take damage 2 function and attack assigned character
			wiz.takeDamage2();

		}
		//Else if created if user gives up
		else if (fightOrRun == "G" || fightOrRun == "g" || fightOrRun == "Give up" || fightOrRun == "give up")
		{
			//Couts display when chosen
			cout << "\nYou chose to give up, you have lost this battle.";
			cout << "\n\nThank you for playing!\n\n";
			//This will break the while loop
			break;
		}
	}
}
//Function created for fourth fight in the game
void fourthPlayableFight()
{
	//CLS will clear the screen
	system("cls");

	//Call our classes and give them variable names to use in the function
	wizard1 wiz;
	sorcerer1 sor;
	string fightOrRun;



	cout << "\nYou chose: \n";
	// call our display function from the sorcerer1 file
	sor.display3();

	cout << "\n\nYou will be fighting: ";

	//will display wizard
	wiz.display4();


	//While loop created that will run IF chosen character is alive.
	while (sor.characterAlive()) {

		cout << "\n\nYour choices: (A)ttack, (H)eal or (G)ive Up: \n";

		//if created to check if character chosen is still alive
		if (sor.characterAlive())
		{
			//Getline for user input
			getline(std::cin, fightOrRun);

		}
		//else created IF character or opponent health is 0
		else
		{
			//Call our get name 2 function and display the name
			cout << sor.getName2() << " has died. You lose!";
			//string for user choice value
			string userQuestion;
			//Call our string function
			userQuestion = userQuestionPlayAgain();

		}
		//If created for when the user chooses to attack
		if (fightOrRun == "A" || fightOrRun == "a" || fightOrRun == "Attack" || fightOrRun == "attack")
		{
			//Call our get name 2 function and display the names
			cout << sor.getName2() << " attacks " << wiz.getName2() << ".";

			//THIS TOOK HOURS TO FIGURE OUT BUT IF YOU WANT THE OPPONENT TO TAKE DAMAGE AND NOT YOUR CHARACTER, YOU MUST WRITE THE CLASS AND THEN THE .FIGHT()
			//Sorcerer will take damage when this function is called.
			wiz.fight2();

			//if created to check if your opponent is still alive
			if (wiz.characterAlive())
			{
				//Call our get name 2 function and display the name
				cout << wiz.getName2() << " retaliates!";
				//Same as the last function, if you want your character to take damage, there must be a function that takes damage on your character.
				sor.takeDamage2();

			}
			//else created IF character or opponent health is 0
			else
			{
				//Call our get name 2 function and display the name
				cout << wiz.getName2() << " has died. You are victorious!";
				//string for user choice value
				string userQuestion;
				//Call our string function
				userQuestion = userQuestionPlayAgain();
			}
		}
		//Else if created for if user chooses to heal
		else if (fightOrRun == "H" || fightOrRun == "h" || fightOrRun == "Heal" || fightOrRun == "heal")
		{
			//Call our heal function from character file
			sor.heal();
			//Call our take damage 2 function from character file
			sor.takeDamage2();
		}
		//Else if created if user gives up
		else if (fightOrRun == "G" || fightOrRun == "g" || fightOrRun == "Give up" || fightOrRun == "give up")
		{
			//couts display when chosen
			cout << "\nYou chose to give up, you have lost this battle.";
			cout << "\n\nThank you for playing!";
			//This will break the while loop
			break;
		}
	}
}

// string function created for user choice
std::string getUserChoice()
{ //Starting scope operator, this starts a code block
	//string for user choice
	//Clears screen so it is not jumbled up with information

	string userChoice;

	cout << "\n\nYour choices are: \n\nWizards \nSorcerers";

	//cout for question
	cout << "\n\nWhat would you like to see? ";
	//getline will get users choice and store it here and display
	getline(std::cin, userChoice);

	//if created for wizard choice
	if (userChoice == "Wizards" || userChoice == "Wizard" || userChoice == "wizards" || userChoice == "wizard")
	{ //Starting scope operator, this starts a code block
		//call wizard function
		wizard();
	} // Ending scope operator, this end a block of code.
	// else if for sorcerer choice
	else if (userChoice == "Sorcerers" || userChoice == "Sorcerer" || userChoice == "sorcerers" || userChoice == "sorcerer")
	{ //Starting scope operator, this starts a code block
		//call sorcerer function
		sorcerers();
	} // Ending scope operator, this end a block of code.

	// catch all if user does not make a choice
	else
	{ //Starting scope operator, this starts a code block
		//string for user choice
		string userChoice;
		cout << "\nInvalid Response, please try again or check spelling.";
		//call our function
		userChoice = getUserChoice();

	}// Ending scope operator, this end a block of code.


	//return userchoice value
	return userChoice;
} // Ending scope operator, this end a block of code.

//string function for second user choice
std::string getUserChoice2()
{//Starting scope operator, this starts a code block
	//string for user choice value
	string userChoice2;

	cout << "\n\nAre you ready to choose your character? (Yes or No) ";
	//getline for user inpt
	getline(std::cin, userChoice2);
	//if created for yes
	if (userChoice2 == "Yes" || userChoice2 == "yes" || userChoice2 == "Y" || userChoice2 == "y")
	{//Starting scope operator, this starts a code block

		//string for user choice value
		string userChoice3;
		//Call the third user choice
		userChoice3 = getUserChoice3();

	}// Ending scope operator, this end a block of code.
	//else if for user choice no
	else if (userChoice2 == "No" || userChoice2 == "no" || userChoice2 == "N" || userChoice2 == "n")
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice;
		//Call the first user Choice
		userChoice = getUserChoice();

	}// Ending scope operator, this end a block of code.
	//catch all if no user input or invalid input
	else
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice2;

		cout << "\nYou must choose!";
		//Call back the getUserChoice2 function
		userChoice2 = getUserChoice2();
	}// Ending scope operator, this end a block of code.

	//return the value of userChoice2
	return userChoice2;

}// Ending scope operator, this end a block of code.

//string function for user choice
std::string getUserChoice3()
{//Starting scope operator, this starts a code block



	//clears the screen for better UX
	system("cls");
	//string for user choice value
	string userChoice3;

	//couts display user choices and question
	cout << "\nAwesome!";
	cout << "\n\nWizards: \nKalimvor of Time \nKelter of the Undead";
	cout << "\n\nSorcerers: \nArther of the Lost \nDr. Strange: The Sorcerer Supreme";

	cout << "\n\nWho would you like to play as? (Be sure to spell the name correctly) ";
	//get line for user input
	getline(std::cin, userChoice3);
	//if created for choice 1
	if (userChoice3 == "Kalimvor of Time" || userChoice3 == "kalimvor of time" || userChoice3 == "Kalimvor" || userChoice3 == "kalimvor")
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice4;
		//Call the string function
		userChoice4 = getUserChoice4();

	}// Ending scope operator, this end a block of code.
	//else if created for choice 2
	else if (userChoice3 == "Kelter of the Undead" || userChoice3 == "kelter of the undead" || userChoice3 == "Kelter" || userChoice3 == "kelter")
	{//Starting scope operator, this starts a code block

		//String for choices
		string userChoice6;
		//Call back the getUserChoice2 function
		userChoice6 = getUserChoice6();

	}// Ending scope operator, this end a block of code.
	//else if created for choice 3
	else if (userChoice3 == "Arther of the Lost" || userChoice3 == "arther of the lost" || userChoice3 == "Arther" || userChoice3 == "arther")
	{//Starting scope operator, this starts a code block

		//string for user choice value
		string userChoice7;
		//Call back the getUserChoice7 function
		userChoice7 = getUserChoice7();
	}// Ending scope operator, this end a block of code.
	//else if created for choice 4
	else if (userChoice3 == "Dr. Strange" || userChoice3 == "dr. strange" || userChoice3 == "Dr Strange" || userChoice3 == "dr strange")
	{//Starting scope operator, this starts a code block

		//string for user choice value
		string userChoice5;
		//Call the string function
		userChoice5 = getUserChoice5();

	}// Ending scope operator, this end a block of code.
	//catch all for invalid input
	else
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice3;

		//call our string function
		userChoice3 = getUserChoice3();

	}// Ending scope operator, this end a block of code.


	//return the value of userChoice 3
	return userChoice3;
}// Ending scope operator, this end a block of code.

//string function for choice of Sim or Fight
std::string getUserChoice4()
{//Starting scope operator, this starts a code block
	//string for user choice value
	string userChoice4;

	cout << "\n\nWould you like the (S)imulation or (F)ight? ";
	//getline for user inpt
	getline(std::cin, userChoice4);
	//if created for yes
	if (userChoice4 == "S" || userChoice4 == "s")
	{//Starting scope operator, this starts a code block

		firstFight();

	}// Ending scope operator, this end a block of code.
	//else if for user choice no
	else if (userChoice4 == "F" || userChoice4 == "f")
	{//Starting scope operator, this starts a code block
		
		firstPlayableFight();

	}// Ending scope operator, this end a block of code.
	//catch all if no user input or invalid input
	else
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice4;

		cout << "\nYou must choose!";
		//Call back the getUserChoice2 function
		userChoice4 = getUserChoice4();
	}// Ending scope operator, this end a block of code.

	//return the value of userChoice2
	return userChoice4;

}// Ending scope operator, this end a block of code.

//string function for choice of Sim or Fight
std::string getUserChoice5()
{//Starting scope operator, this starts a code block
	//string for user choice value
	string userChoice5;

	cout << "\n\nWould you like the (S)imulation or (F)ight? ";
	//getline for user inpt
	getline(std::cin, userChoice5);
	//if created for yes
	if (userChoice5 == "S" || userChoice5 == "s")
	{//Starting scope operator, this starts a code block

		//Call the fourth fight function
		fourthFight();

	}// Ending scope operator, this end a block of code.
	//else if for user choice no
	else if (userChoice5 == "F" || userChoice5 == "f")
	{//Starting scope operator, this starts a code block
		//Call the playable function
		secondPlayableFight();

	}// Ending scope operator, this end a block of code.
	//catch all if no user input or invalid input
	else
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice5;

		cout << "\nYou must choose!";
		//Call back the getUserChoice2 function
		userChoice5 = getUserChoice5();
	}// Ending scope operator, this end a block of code.

	//return the value of userChoice2
	return userChoice5;

}// Ending scope operator, this end a block of code.

std::string getUserChoice6()
{//Starting scope operator, this starts a code block
	//string for user choice value
	string userChoice6;

	cout << "\n\nWould you like the (S)imulation or (F)ight? ";
	//getline for user inpt
	getline(std::cin, userChoice6);
	//if created for yes
	if (userChoice6 == "S" || userChoice6 == "s")
	{//Starting scope operator, this starts a code block
		//Call the second fight function
		secondFight();

	}// Ending scope operator, this end a block of code.
	//else if for user choice no
	else if (userChoice6 == "F" || userChoice6 == "f")
	{//Starting scope operator, this starts a code block
		//Call the playable function
		thirdPlayableFight();

	}// Ending scope operator, this end a block of code.
	//catch all if no user input or invalid input
	else
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice6;

		cout << "\nYou must choose!";
		//Call back the getUserChoice2 function
		userChoice6 = getUserChoice6();
	}// Ending scope operator, this end a block of code.

	//return the value of userChoice2
	return userChoice6;

}// Ending scope operator, this end a block of code.

//String function for looping the game
std::string getUserChoice7()
{//Starting scope operator, this starts a code block
	//string for user choice value
	string userChoice7;

	cout << "\n\nWould you like the (S)imulation or (F)ight? ";
	//getline for user inpt
	getline(std::cin, userChoice7);
	//if created for yes
	if (userChoice7 == "S" || userChoice7 == "s")
	{//Starting scope operator, this starts a code block
		//Realized after all finished that the number in which the fights are in make no sense, that was my mistake
		thirdFight();

	}// Ending scope operator, this end a block of code.
	//else if for user choice no
	else if (userChoice7 == "F" || userChoice7 == "f")
	{//Starting scope operator, this starts a code block
		//Call the playable function
		fourthPlayableFight();

	}// Ending scope operator, this end a block of code.
	//catch all if no user input or invalid input
	else
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice7;

		cout << "\nYou must choose!";
		//Call back the getUserChoice2 function
		userChoice7 = getUserChoice7();
	}// Ending scope operator, this end a block of code.

	//return the value of userChoice2
	return userChoice7;

}// Ending scope operator, this end a block of code.

std::string userQuestionPlayAgain()
{//Starting scope operator, this starts a code block
	//string for user choice value
	string userQuestion;

	cout << "\n\nWould you like to play again? (Yes or No) ";
	//getline for user input 
	getline(std::cin, userQuestion);
	//if created for yes
	if (userQuestion == "Yes" || userQuestion == "yes" || userQuestion == "Y" || userQuestion == "y")
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userChoice3;
		//call our string function
		userChoice3 = getUserChoice3();


	}// Ending scope operator, this end a block of code.
	//else if created for No
	else if (userQuestion == "No" || userQuestion == "no" || userQuestion == "N" || userQuestion == "n")
	{//Starting scope operator, this starts a code block
		//exit function ends the game
		exit(0);

	}// Ending scope operator, this end a block of code.
	//catch all for invalid input
	else
	{//Starting scope operator, this starts a code block
		//string for user choice value
		string userQuestion;

		cout << "\nYou must choose!";
		//call our string function
		userQuestion = userQuestionPlayAgain();
	}// Ending scope operator, this end a block of code.

	//return the value of the userQuestion
	return userQuestion;
}// Ending scope operator, this end a block of code.



// Update ideas:
/*
	Make actual game and add spells and health aids
	For Abstract: Just add to base class
	For Encapsulation:
	For Polymorphism:



*/