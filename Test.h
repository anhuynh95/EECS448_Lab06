/**
*	@file Test.h
*	@author An Huynh
*	@date 11/04/2018
*	@brief A header file for Test class
*/

#ifndef TEST_H
#define TEST_H

#include "List.h"
#include "Node.h"

class Test
{
public:
  /** @pre None.
	*   @post A new test object is created.
	*/
  Test();
  /** @pre None.
	*   @post Run all test methods
	*   @return None
	*/
  void run();
private:
  /** @pre None.
	*   @post Check if we create a valid LinkedListOfInts object
	*   @return None
	*/
  void consTest();
  /** @pre None.
	*   @post Check if the list if empty before and after we add element
	*   @return None
	*/
  void emptyTest();
  /** @pre None.
	*   @post Check the size of the list before and after we add elements
	*   @return None
	*/
  void sizeTest();
  /** @pre None.
	*   @post Check if we actually and elemts to the front of the list
	*   @return None
	*/
  void addFrontTest();
  /** @pre None.
	*   @post Check if we actually and elemts to the back of the list
	*   @return None
	*/
  void addBackTest();
  /** @pre None.
	*   @post Check if we actually remove elements at the back of the list
	*   @return None
	*/
  void removeBackTest();
  /** @pre None.
	*   @post Check if we actually remove elements at the front of the list
	*   @return None
	*/
  void removeFrontTest();
  /** @pre None.
	*   @post Check if we actually find the element in the list
	*   @return None
	*/
  void searchTest();
};

#include "Test.hpp"
#endif
