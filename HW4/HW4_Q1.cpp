//Question 1: Ask user enter a number N1 bigger than 30 or less
//than 10, keep asking a valid number if the number is not valid.
//After get the valid number, if the number is bigger than 30 and
//less than 60 print number N1 - 30, else print number N1 - 60. If
//the number is less than 10 bigger than 0, print number N1 +10,
//else print number N1 itself. 

// Manuel Payano 10/20/2015

#include <iostream>
using namespace std;

int main()
{
	int nu1 = 25;
	 while (nu1 < 30 && nu1 > 10)  {
		cout << "Please enter the number to guess between 10 and 30: " ;
		cin >> nu1;
	 }
	if (nu1 > 30 && nu1 <60) cout << nu1 - 30;
	else if (nu1 < 10 && nu1 >0) cout << nu1 + 10;
	else cout << nu1;
 	return 0;
}