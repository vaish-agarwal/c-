#include<iostream>
using namespace std;



/*(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void,and takes a third,*/
void sum(int a, int b , int &result){
result = a+b ;


}





//  pass by reference parameter; then puts the sum in that.


int main(){
int a,b,result;
cout<<"enter numbers."<<endl;
cin>>a>>b;
sum(a,b,result);
cout<<"SUM:"<< result;


}
