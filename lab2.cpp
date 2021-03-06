#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
  // int hours, minutes; //To hold example time data

  //Testing initialization constructor
  cout << "Creating two Time objects..." << endl;
  
  Time first(7, 46);
  Time second(18, 2);

  //Testing accessor function
  cout << "first: ";
  first.displayTime();
  cout << endl
	   << "second: ";
  second.displayTime();
  cout << endl;

  //Testing mutator functions
  cout << endl << "Changing first to 6:45..." << endl;

  first.setHours(6);
  first.setMinutes(45);
  cout << "first: ";
  first.displayTime();
  cout  << endl;

  //Testing copy constructor
  cout << endl << "Creating a copy of second..." << endl;

  Time third = second;
  cout << "third: ";
  third.displayTime();
  cout << endl;

  //Testing relational operators
  cout << endl << "Testing relational operators..." << endl;

      //Overloaded ==operator
  if (first == second)
	cout << "first is equal to second";
  else
	cout << "first is not equal to second" << endl;

      //Overloaded >operator
  if (first > second)
	cout << "first is greater than second" << endl;
  else
	cout << "first is not greater than second" << endl;

      //Overloaded <operator
  if (first < second)
	cout << "first is less than second" << endl;
  else
	cout << "first is not less than second" << endl;

  //Testing arithmetic operators

      //Overloaded +operator
  Time sum = first + second;
  cout << "first + second: ";
  sum.displayTime();
  cout << endl;

      //Overloaded -operator
  Time diff = second - first;
  cout << "first + second: ";
  diff.displayTime();
  cout << endl;
  
      //Overloaded post++
  Time post = diff++;

  cout << "diff++: ";
  post.displayTime();
  cout  << endl;

      //Overloaded ++pre
  Time pre = ++diff;

  cout << "++diff: ";
  pre.displayTime();
  cout << endl;

  //Test simplify()
  cout << endl << "Initializing a Time object with 185 minutes" << endl
	   << "to demonstrate simplify()..." << endl;

  Time simpleMinutes(0, 185);

  cout << "simpleMinutes: ";
  simpleMinutes.displayTime();
  cout << endl;

  cout << "And now an object with 26 hours and 30 minutes..." << endl;

  Time simpleHours(26, 30);

  cout << "simpleHours: ";
  simpleHours.displayTime();
  cout << endl;
  
  return 0;
}
