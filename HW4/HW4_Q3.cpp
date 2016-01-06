// Question 3: Ask user enter an integer n, and print n^n .(use for
//loop, do not use pow() function)

// Manuel Payano 10/20/2015

#include <iostream>
using namespace std;

int main()
{
	int nu1 = 0, checker = 1;
	 
		cout << "Please enter the number to raise: " ;
		cin >> nu1;
		for (int counter=0; counter < nu1; counter++) {
        	checker = checker * nu1;
        }
		cout << nu1 <<"^" << nu1 << "=" << checker;
    	return 0;
}