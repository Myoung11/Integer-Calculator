// Matthew Young
// Integer Sum  

/* This program will ask the user how many integers they want to enter, then
   it will prompt them to enter in integers from 1 to 10. It will then output
   a summary of what they entered and what the sum of the integers is. */


#include <iostream>
#include <vector>
using namespace std;

int main() {        // Beginning of Main Function
   
   int numIntegers; // Variable for amount of user inputed integers
   int i;           // Variable for 'for' loop.
   int sumIntegers; // Variable for sum of user inputed integers 
   
   cout << "How many integers do you wish to enter?" << endl; // Ask user for amount of integers
   cin >> numIntegers;                                        // User inputed number of integers
   
   cout << endl;                                              // Adds a blank line for spacing
   
   vector<int> varIntegers(numIntegers);                      // Vector for user inputed integers
   
   cout << "Please enter integers from 1 to 10." << endl << endl;  // Ask user to enter integers in range 1- 10
   
   for (i = 0; i < varIntegers.size(); ++i) {                      // For loop for user to enter in integers
      cout << "Please enter integer " << i + 1 << ": ";            // Asks user to enter in each integer
      cin >> varIntegers.at(i);                                    // User inputed integer
   }
   
   cout << endl;                                                   // Adds a blank line for spacing
   
   cout << "You have entered: " << endl;                           // Tells user what they have enterd
   
   for (i = 0; i < varIntegers.size(); ++i) {                      // For loop for output of user integers
       cout << varIntegers.at(i) << endl;                          // Ouput user integers
   }
   
   cout << endl;                                                   // Adds a blank line for spacing
   
   sumIntegers = 0;                                                // Variable for sum of user integers 
   
   for (i = 0; i < varIntegers.size(); ++i) {                      // For loop for sum of user integers
      sumIntegers = sumIntegers + varIntegers.at(i);               // Equation for sum of user integers
   }
   
   cout << "The sum of these integers is: " << sumIntegers << endl; // Tells user what the sum of their integers is
   
   return 0;
}                                                                   // End of Main Function
