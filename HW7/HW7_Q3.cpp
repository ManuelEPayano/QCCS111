//Question 3: Write a recursive function with title: string baseChange(int n, int base) which converts the decimal
//number n to the given base. For example, baseChange(5,156) would return 1111, because 156 is 125 + 25 + 5 +
//1 which is written as 1111 in base 5. 
//Manuel Payano

#include<iostream>
#include<cmath>
using namespace std;


string baseChange(int a, int b) {
   string baseXchange[36]={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
   if (a < b) return baseXchange[a];
   else return baseChange(a / b, b) + baseChange(a % b, b);
}


int main() {
   cout << baseChange(5,156) << endl; // prints 1111
   int a,b;
   cin>>a>>b;
   cout << baseChange(a,b) << endl;
   return 0; 
}