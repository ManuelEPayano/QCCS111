//Question 3: Use nested for loops to write a n x n multiplication table. 

// Manuel Payano

#include <iostream>
using namespace std;

int main()
{
	long nu1 = 0;
    cout << "Please enter the number: " ;
	cin >> nu1;
        for (long counter=1;counter <= nu1;counter++) {
	    	for (long counter2=1;counter2 <= nu1 ;counter2++) {
	    		cout << counter * counter2 << " ";
	    	}
		cout << endl;
		}	
	    return 0;
}