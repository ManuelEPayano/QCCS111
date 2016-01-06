//Question 2: Write a program that contains interleave function.
//Interleave function should take two string argument, and print two
//string alternatively. The program should start from the longer string,
//if shorter one stops early, it need to repeat use the shorter string
//until display all the longer string character. 
//Manuel Payano


#include <iostream>
#include <string>
using namespace std;

void interleave (string a, string b){
   string c;
   int x = a.length();
   int y = b.length();
   int z= 0;
   for (int i = 0; i < x; i++){
       if (z < y-1) z=i; 
       else z=0;
       cout << a[i] << b[z];
    }
    
}

int main()
{
   string noma;
   string mano;
   cout << "Enter the 1 string: ";
   getline(cin,noma);
   cout << "Enter the 2 string: ";
   getline(cin,mano);
   if (mano.size() > noma.size()) interleave(mano,noma);
   else interleave(noma,mano);
   
   
   return 0;
  
}
