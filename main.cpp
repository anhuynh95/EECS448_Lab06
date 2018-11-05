/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	std::cout<<"ALL TEST METHODS ARE BELOW: \n \n";
	Test myTester;
	myTester.run();

	std::cout << "\nRunning...\nAnd we're done.\nGoodbye.\n";

	return (0);

}
