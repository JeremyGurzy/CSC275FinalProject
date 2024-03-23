// iostream = Input and Output Stream, think of Stream as data flowing like water. A river flowing of data.
#include <iostream>
// Included string file to utilize strings
#include <string>
//Included wizard1 header file
#include "wizard1.h"

//Constructor for wizard1 
wizard1::wizard1()
{
	//All variables have assigned values, unlike the character header these are different for the fighting portion
	name = "Kalimvor";
	name2 = "Kelter";
	attackDamage = 50;
	attackDamage2 = 25;
	health = 250;
};
//ALL FUNCTIONS HOLD THE DATA FOR WIZARDS AND ALL FUNCTIONS DISPLAY WHEN CALLED
void wizard1::display()
{
	//couts display to screen and have respected values
	cout << R"(
_  _ ____ _    _ _  _ _  _ ____ ____    ____ ____    ___ _ _  _ ____ 
|_/  |__| |    | |\/| |  | |  | |__/    |  | |___     |  | |\/| |___ 
| \_ |  | |___ | |  |  \/  |__| |  \    |__| |        |  | |  | |___)";
	
	cout << "\nHealth: " << health;
	cout <<"\nAttack Damage: " << attackDamage;
}

void wizard1::display2()
{
	//couts display to screen and have respected values
	cout << R"(
_  _ ____ _    _ _  _ _  _ ____ ____    ____ ____    ___ _ _  _ ____ 
|_/  |__| |    | |\/| |  | |  | |__/    |  | |___     |  | |\/| |___ 
| \_ |  | |___ | |  |  \/  |__| |  \    |__| |        |  | |  | |___)";
	cout << "\nHealth: " << health;
	cout << "\nAttack Damage: " << attackDamage2;
}

void wizard1::display3()
{
	//couts display to screen and have respected values
	cout << R"(
_  _ ____ _    ___ ____ ____    ____ ____    ___ _  _ ____    _  _ _  _ ___  ____ ____ ___  
|_/  |___ |     |  |___ |__/    |  | |___     |  |__| |___    |  | |\ | |  \ |___ |__| |  \ 
| \_ |___ |___  |  |___ |  \    |__| |        |  |  | |___    |__| | \| |__/ |___ |  | |__/)";
	cout << "\nHealth: " << health;
	cout << "\nAttack Damage: " << attackDamage;
}

void wizard1::display4()
{
	//couts display to screen and have respected values
	cout << R"(
_  _ ____ _    ___ ____ ____    ____ ____    ___ _  _ ____    _  _ _  _ ___  ____ ____ ___  
|_/  |___ |     |  |___ |__/    |  | |___     |  |__| |___    |  | |\ | |  \ |___ |__| |  \ 
| \_ |___ |___  |  |___ |  \    |__| |        |  |  | |___    |__| | \| |__/ |___ |  | |__/)";
	cout << "\nHealth: " << health;
	cout << "\nAttack Damage: " << attackDamage2;
}