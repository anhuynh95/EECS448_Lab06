/**
*	@file Test.hpp
*	@author An Huynh
*	@date 11/04/2018
*	@brief Implemented file for Test class
*/


using namespace std;
Test::Test(){}
void Test::run()
{
  cout<<"Test 1 - ";
  sizeTest();
  cout<<"Test 2 - ";
  consTest();
  cout<<"Test 3 - ";
  addFrontTest();
  cout<<"Test 4 - ";
  addBackTest();
  cout<<"Test 5 - ";
  emptyTest();
  cout<<"Test 6 - ";
  removeBackTest();
  cout<<"Test 7 - ";
  removeFrontTest();
  cout<<"Test 8 - ";
  searchTest();
}

void Test::sizeTest()
{
  bool before = false;
  bool after = false;
  bool after2 = false;
  LinkedListOfInts test;
  cout<<"Size Test: ";
  if(test.size() == 0)
    before = true;
  test.addFront(9); // I tried this method in other tests and I'm sure that this
  //method would work
  if(test.size() == 1)
    after = true;
  test.addFront(9);
  if(test.size() == 2)
    after2 = true;
  if(before == true && after == true && after2 == true)
    cout<<"PASSED \n";
  else
    cout<<"FAILED \n";
}


void Test::consTest()
{
  LinkedListOfInts cons;
  cout<<"Constructor Test: ";
  if(cons.size() == 0)
  {
    cout<<"PASSED";
  }
  else
    cout<<"FAILED";
  cout<<"\n";

}

void Test::emptyTest()
{
  bool before = false;
  bool after = false;
  LinkedListOfInts test;
  cout<<"Empty Test: ";
  if(test.isEmpty() == true)
    before = true;
  test.addFront(9);

  if(test.isEmpty() == false)
    after = true;
  if(before == true && after == true)
    cout<<"PASSED\n";
  else
    cout<<"FAILED\n";

}

void Test::addFrontTest()
{
  bool result = true;
  int arr[3] = {3, 2, 1};
  LinkedListOfInts test;
  cout<<"Add Front Test: ";
  test.addFront(1);
  test.addFront(2);
  test.addFront(3);

  for(int i = 0; (unsigned)i<test.toVector().size(); i++){
    if(test.toVector().at(i) != arr[i])
      result = false;
  }
  if(result == false && test.size() == 3)
    cout<<"FAILED \n";
  else
    cout<<"PASSED \n";
}


void Test::addBackTest()
{
  bool result = true;
  int arr[3] = {1, 2, 3};
  LinkedListOfInts test;
  cout<<"Add Back Test: ";
  test.addBack(1);
  test.addBack(2);
  test.addBack(3);
  if(test.size() != 3) result = false;
  for(int i = 0; (unsigned)i<test.toVector().size(); i++){
    //cout<<test.toVector().at(i)<<" "; use to find bug
    if(test.toVector().at(i) != arr[i])
      result = false;
  }

  if(result == false && test.size() == 3)
    cout<<"FAILED \n";
  else
    cout<<"PASSED \n";
}

void Test::removeBackTest()
{
  bool result = true;
  int arr[3] = {4,3};
  LinkedListOfInts test;
  cout<<"Remove Back Test: ";
  test.addFront(1);
  test.addFront(2);
  test.addFront(3);
  test.addFront(4);

  test.removeBack();
  if(test.size() != 3) result = false;
  //cout<<test.size()<<" ";
  test.removeBack();
   for(int i = 0; (unsigned)i<test.toVector().size(); i++){
     //cout<<test.toVector().at(i)<<" "; //use to find bug
     if(test.toVector().at(i) != arr[i])
       result = false;
  }

  if(result == false)
    cout<<"FAILED \n";
  else
    cout<<"PASSED \n";
}

void Test::removeFrontTest()
{
  bool result = true;
  int arr[3] = {2,1};
  LinkedListOfInts test;
  cout<<"Remove Front Test: ";
  test.addFront(1);
  test.addFront(2);
  test.addFront(3);
  test.addFront(4);

  test.removeFront();
  if(test.size() != 3) result = false;
  test.removeFront();
  for(int i = 0; (unsigned)i<test.toVector().size(); i++){
    //cout<<test.toVector().at(i)<<" "; //use to find bug
     if(test.toVector().at(i) != arr[i])
       result = false;
 }

 if(result == false)
   cout<<"FAILED \n";
 else
   cout<<"PASSED \n";
}

void Test::searchTest()
{
  bool result = false;
  LinkedListOfInts test;
  cout<<"Search Test: ";
  test.addFront(1);
  test.addFront(2);
  test.addFront(3);
  test.addFront(4);

  if(test.search(3) == true){
    result = true;
  }
  if(test.search(9) == true){
    result = false;
  }
  if(result == false){
    cout<<"FAILED \n";
  }
  else{
    cout<<"PASSED \n";
  }
}
