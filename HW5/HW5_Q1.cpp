//Question 1: Ask user enter an integer, and print all the prime numbers less than user input
//integer.
//User enter integer: 10
//prime number less than 10: 2, 3, 5, 7 

// Manuel Payano 10/23/2015

#include <iostream>
using namespace std;

int main()
{
	int nu1 = 0;
	bool checker = true;
	 
		cout << "Please enter the number: " ;
		cin >> nu1;
	    for (int counter=2;counter <= nu1 ;counter++) {
	        checker = true;
	    	for (int counter2=2;counter2 < counter ;counter2++) if (counter % counter2 == 0) checker = false;
        	if (checker ==true) cout << counter <<", ";
		}
    	return 0;
}