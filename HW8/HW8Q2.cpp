//• Question 2: Write a program that reads in ten numbers and displays
// distinct numbers. If a number appears multiple times, it is displayed
// only once. For example: if user enters 1,1,2,3,4,4,5,1,0,9. You should
// output: 1,2,3,4,5,0,9. Order doesn’t matter. 

//Manuel Payano


#include<iostream>
#include<cmath>
using namespace std;


  
int main(){
    int num[11];
    int size=0, max=10, no=0;
    while (size < max){
        cout << "Enter the number: ";
        cin >> num[size];
        size++;
    }
    for (int x = 0; x < max; x++){
        no=0;
        for(int y = x+1; y < max; y++){
            if (num[x] == num[y]){  
                no=1;
            } 
        }
        if (no != 1) cout << num[x];
    }
}