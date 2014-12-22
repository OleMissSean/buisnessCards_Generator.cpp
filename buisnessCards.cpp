/*
Sean Staz
CSC 2134
Buisness Cards
This program will produce 8 business cards
*/

#include <iostream>
#include <string>

using namespace std; 

const string stars =    "**********************************"; // Top/Bottom Boarder
const string blank =    "*                                *"; // Blank string
const string name =     "*            Sean Staz           *"; // My name
const string address1 = "*       7777 Rage Against Rd     *"; // Street address
const string address2 = "*             Apt 1277           *"; // Apartment number
const string location = "*      Nirvanaville, MS 39777    *"; // City, State, & Zip
const string phone =    "*          (601)-777-7777        *"; // Phone number
const string email =    "* sean.stasny.4@student.prcc.edu *"; // email

int main ()
{
	// Order of lines
	string line1;
	string line2;
	string line3;
	string line4;
	string line5;
	string line6;
	string line7;
	string line8;
	string line9;
	string line10;
	
	// Duplicate lines with a gap between them.
	line1 = stars + " " + stars;
	line2 = blank    + " " + blank;
	line3 = name     + " " + name;
	line4 = address1 + " " + address1;
	line5 = address2 + " " + address2;
	line6 = location + " " + location;
	line7 = phone    + " " + phone;
	line8 = email    + " " + email;
	line9 = blank    + " " + blank;
	line10 = stars   + " " + stars;
	
	// The outputs for the lines
    cout << line1 << endl;
	cout << line2 << endl;
	cout << line3 << endl;
	cout << line4 << endl;
	cout << line5 << endl;
	cout << line6 << endl;
	cout << line7 << endl;
	cout << line8 << endl;
	cout << line9 << endl;
    cout << line10 << endl;
    
    // Creates a gap
    cout << endl;
    cout << endl; 
    
    	// The outputs for the lines
    cout << line1 << endl;
	cout << line2 << endl;
	cout << line3 << endl;
	cout << line4 << endl;
	cout << line5 << endl;
	cout << line6 << endl;
	cout << line7 << endl;
	cout << line8 << endl;
	cout << line9 << endl;
    cout << line10 << endl;
    
    // Creates a gap
    cout << endl;
    cout << endl; 
    
    	// The outputs for the lines
    cout << line1 << endl;
	cout << line2 << endl;
	cout << line3 << endl;
	cout << line4 << endl;
	cout << line5 << endl;
	cout << line6 << endl;
	cout << line7 << endl;
	cout << line8 << endl;
	cout << line9 << endl;
    cout << line10 << endl;
    
    // Creates a gap
    cout << endl;
    cout << endl; 
    
    	// The outputs for the lines
    cout << line1 << endl;
	cout << line2 << endl;
	cout << line3 << endl;
	cout << line4 << endl;
	cout << line5 << endl;
	cout << line6 << endl;
	cout << line7 << endl;
	cout << line8 << endl;
	cout << line9 << endl;
    cout << line10 << endl;
    
    // Creates a gap
    cout << endl;
    
	return 0;   
}
