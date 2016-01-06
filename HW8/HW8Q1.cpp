//• Question 1: Write a program that take a word from user until the user
//input “stop”, then output all the word backward which the user previous
//input. Please use array to do it, not the recursion. (Max word capacity is
//10, so user does not allow to input more than 10 words.)

//Manuel Payano

#include<iostream>
#include<cmath>
using namespace std;


  
int main()
{
   string word[11];
   int size=0;

   while ((word[size] != "stop")&&(size < 10)){
        size++;
        cout << "Enter a word ('stop' to end program): ";
        cin >> word[size];
        }
    if (word[size]=="stop") size--; 
    for (int x = size; x > 0; x--) cout << word[x] << " ";
    return 0;
  }
    
  
