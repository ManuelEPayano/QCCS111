//• Question 2: Write a program called recursive function printBinary, that prints a positive integer n in binary. For
//example, a program that uses the function useRecursion follows. 
//Manuel Payano

#include<iostream>
#include<cmath>
using namespace std;


string printBinary(int num) {
    if (num == 0) return "0";
    else if (num == 1) return "1";
    else if (num >= 2) return printBinary(num / 2) + printBinary(num % 2);
    else exit(0);
}

int main()
{
    cout << printBinary(23) << endl; // print 10111
    int a;
    cin>>a;
    cout << printBinary(a) << endl;
    return 0;
}