//Question 2: Ask user enter an integer, and do the prime test use
//for loop. 

// Manuel Payano 10/20/2015

#include <iostream>
using namespace std;

int main()
{
	int nu1 = 0, checker = 0;
	 
		cout << "Please enter the number to test: " ;
		cin >> nu1;
		for (int counter=2;counter <= nu1 / 2;counter++) {
        	if (nu1 % counter == 0) cout << counter << " divides " << nu1 <<" therefore is not prime. \n";
            if (nu1 % counter == 0) checker = 1;
        }
		if (checker = 1) cout << nu1 <<" is prime.";
    	return 0;
}