#include <iostream>		// Load iostream "library"
#include "Header.h"		// Header contains declarations of many "names", therefore introduces them into the current scope.

int addint(int num_a, int num_b); // forward "declaration". Usually included in header files.

int addint(int num_a, int num_b)
{
	// "Define" a function addint
	// whose "parameter" is num_a and num_b,
	// and returns "int"(integer) value.
	int sum = num_a + num_b;
	return sum;
}

void printHelloWorld()
{
	// Define a function printHelloWorld
	// which does not return anything(what "void" means).
	std::cout << "Hello World" << std::endl;
}

int main()
{
	using namespace std;	// Use functionalities defined in the "namespace" std without referencing it.
							// Actually, namespace std is defined in iostream library.

	/* To declare a variable is to assign a space somewhere in the memory.
		For example, executing the "statement" "int x = 2" means:
		Save a "literal" 2 in the memory which can hold integer value and call that memory as x. */

	int x = 2;				// "Initialize" a variable x using "assignment operator".
							// Declaring a variable without initialization may cause unexpected outcome.
	cout << &x << endl;		// Show the real address of the variable that we promised to call as x. 
	cout << x << " is assigned to the variable x, stored at " << &x << endl;

	cout << x + 3 << endl;	// 2 of x and 3 is an "operand", where + is "operator".
	cin >> x;				// Use "input operator" >> to allow user to enter the new value.
	cout << "Plug " << x << " of x and 3 as an 'argument' of addint function to obtain " << addint(x, 3) << endl;

	int y = (x > 0) ? 1 : 2;// This is "conditional operator", the only ternary operator in C++ language.

	cout << multint(x, y) << endl; // Header file introduces multint function, which isn't defined or declared in current script.
	extreme::printHelloWorld();	   // Also, the namespace 'extreme' is not defined or declared in current script, but declared in header
								   // That is, to use names that are defined in other script, include header that declares those names.
	printHelloWorld();			   // This returns normal Hello world. 
								   // That is, to avoid ambiguous call, use namespace to specify which name to call

	return 0;
}

/* A Few Other Notes
   1. To remove file is letting Visual Studio to ignore the existence of certain file, which is different from delete.
   2. To dive into the "local scope" of certain function, make "breakpoint" to certain line and press "Local Windows Debugger".
   3. Object file is been built when the cpp script is compiled.
	  One or more object file is linked to make an exe file corresponding to the project.
   4. One name can be contained in multiple header files, and might be declared multiple times when including header files.
	  "pragma once" in header file prevents same names declared twice.
   5. List of files looks tidy when looking through Visual Studio Solution Explorer, but they are just scattered in real repository folder.
	  If so, we might want to create subdirectory in that project folder to manage them cleanly.
	  In case of header files, (1) include them in the subfolder, (2) "remove" them from Visual Studio Solution Explorer,
	  (3) drag and drop the header file to the Explorer to let Visual Studio track the location of header file,
	  (4) include the name of the subfolder in front of the include statement (ex. #include "subfolder/header.h") */