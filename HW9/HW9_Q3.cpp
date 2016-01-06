//Question 3: Write a program that randomly generate 30 character
//string, and count the number of char ‘a’ in the string. If the number
//of ‘a’ is 3, then stop and print out the string. (Hint: use ASCII code
//and rand function to generate the random string.)

#include <iostream>
#include <string>
using namespace std;


bool countTHEAS(string e[]){
    int x=0;
    for (int i=0;i<30;i++){
        if (e[i] == "a") x++;
        if (x >= 3 )  for (int i=0;i<30;i++) return 1;   
    }
    return 0;
}


int main()
{
   int x=0;     
   srand(time(NULL));
   string z[30];
   for (int i=0;i<30;i++){
        x = rand()%25+97;
        z[i]=x;
    }
    if (countTHEAS(z)) for (int i=0;i<30;i++) cout << z[i]; 
    else cout << "They were less than 3 a in the string"; 
    return 0;
	
}