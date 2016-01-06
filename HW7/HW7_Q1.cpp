//Question 3 Write a program called useRecursion that returns the sum of the first two digits in a positive number. If
//there is only one digit, that digit is returned. For example, a program that uses the function useRecursion follows. 
//Manuel Payano

#include <iostream>
#include <string>
using namespace std;
void partA(string);
void partB(string);
bool parseString(string,string);

int main(){
  string a;
  cout<<"Please enter the string:";
  getline(cin,a);
  if(a.size()>100){
   cout<<"Please enter a string length less than 100:";
    getline(cin,a);
  }
  partA(a);
  partB(a);
  string b;
  cout<<"Please enter the second string:";
  getline(cin,b);
  cout<<parseString(a,b)<<endl;
  return 0;
}


void partA(string a){
  for(int i=0;i<a.size();i++){
    a[i]=tolower(a[i]);
    cout<<a[i];
  }
  cout<<endl;
}

void partB(string a){
  for(int i=0;i<a.size();i++){
    a[i]=toupper(a[i]);
    cout<<a[i];
  }
  cout<<endl;
}
  
bool parseString(string a,string b){
    int p=a.find(b);
    if (p>a.size()) return 0;
    else return 1;
}
