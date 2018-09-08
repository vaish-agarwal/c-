#include<iostream>
using namespace std;



/*(By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum.*/
int max(int a, int b, int max1){

  if(a>b){
  max1 = a;
  }
  else if(a == b){
  max1 = a;
  }
  else{
  max1 = b;
  }
  return max1;  
}

    /* The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.
    */
    int main(){
    int a,b, max1;
    cout<<"enter numbers"<<endl;
    cin>>a>>b;
    cout<<"MAX:"<< max(a,b);

    }
