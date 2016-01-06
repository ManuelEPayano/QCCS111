//Question 1: Write a program that take an user input of String, and
//replace any space in the string to ‘$’ symbol. 


#include <iostream>
#include <string>
using namespace std;


int main()
{
   string noma;
   cout << "Enter the string: ";
   getline(cin,noma);

   for (int i=0;i <= noma.length();i++){
      if (noma[i] == " ") noma[i] = "$"
    }
   cout << noma;
   return 0;
  
}
