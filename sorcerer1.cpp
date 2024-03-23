// iostream = Input and Output Stream, think of Stream as data flowing like water. A river flowing of data.
#include <iostream>
// Included string file to utilize strings
#include <string>
//Included sorcerer1 header file
#include "sorcerer1.h"

//Constructor for the sorcerers
sorcerer1::sorcerer1()
{
	//All variables have assigned values, unlike the character header these are different for the fighting portion
	name = "Dr. Strange";
	name2 = "Arther";
	attackDamage = 50;
	attackDamage2 = 25;
	health = 250;
};

//function for Dr. Strange vs Kalimvor
void sorcerer1::display()
{
	//couts display to screen and have respected values
	cout << R"(
___  ____     ____ ___ ____ ____ _  _ ____ ____ 
|  \ |__/     [__   |  |__/ |__| |\ | | __ |___ 
|__/ |  \ .   ___]  |  |  \ |  | | \| |__] |___)";
	cout << "\nHealth: " << health;
	cout << "\nAttack Damage: " << attackDamage;
}
//Function for Kalimvor vs Dr. Strange
void sorcerer1::display2()
{
	//couts display to screen and have respected values
	cout << R"(
___  ____     ____ ___ ____ ____ _  _ ____ ____ 
|  \ |__/     [__   |  |__/ |__| |\ | | __ |___ 
|__/ |  \ .   ___]  |  |  \ |  | | \| |__] |___)";
	cout << "\nHealth: " << health;
	cout << "\nAttack Damage: " << attackDamage2;
}
//void function for Arther vs Kelter
void sorcerer1::display3()
{
	//couts display to screen and have respected values
	cout << R"(  
  ___  ____  ______ __  __  ____ ____       ___    ____    ______ __  __  ____    __      ___    __  ______
 // \\ || \\ | || | ||  || ||    || \\     // \\  ||       | || | ||  || ||       ||     // \\  (( \ | || |
 ||=|| ||_//   ||   ||==|| ||==  ||_//    ((   )) ||==       ||   ||==|| ||==     ||    ((   ))  \\    ||  
 || || || \\   ||   ||  || ||___ || \\     \\_//  ||         ||   ||  || ||___    ||__|  \\_//  \_))   ||)";
	cout << "\nHealth: " << health;
	cout << "\nAttack Damage: " << attackDamage;
}
//This function is for Kelter vs Arther
void sorcerer1::display4()
{
	//couts display to screen and have respected values
	cout << R"(  
  ___  ____  ______ __  __  ____ ____       ___    ____    ______ __  __  ____    __      ___    __  ______
 // \\ || \\ | || | ||  || ||    || \\     // \\  ||       | || | ||  || ||       ||     // \\  (( \ | || |
 ||=|| ||_//   ||   ||==|| ||==  ||_//    ((   )) ||==       ||   ||==|| ||==     ||    ((   ))  \\    ||  
 || || || \\   ||   ||  || ||___ || \\     \\_//  ||         ||   ||  || ||___    ||__|  \\_//  \_))   ||)";
	cout << "\nHealth: " << health;
	cout << "\nAttack Damage: " << attackDamage2;
}