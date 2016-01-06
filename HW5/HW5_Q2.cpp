//• Question 2: Ask user enter an integer n, and print 1^1, 2^2, 3^3
//…..n^n. (use long int here, and forloop, do not use pow() function) 
// Manuel Payano 10/23/2015

#include <iostream>
using namespace std;

int main()
{
	long nu1 = 0;
    cout << "Please enter the number: " ;
	cin >> nu1;
        for (long counter=1;counter <= nu1;counter++) {
	    	long nu2 = 1;
	    	for (long counter2=0;counter2 < counter;counter2++) {
	    		nu2 = nu2 * counter;
	    	}
			cout << nu2 << ", ";
		}
	    return 0;
}