#include<iostream>
using namespace std;



/*(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void,and takes a third,(By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.
*/
void sum(int a, int b , int &result){
result = a+b ;


}

    //  calls the function and display the result
    int main(){
    int a,b,result;
    cout<<"enter numbers."<<endl;
    cin>>a>>b;
    sum(a,b,result);
    cout<<"SUM:"<< result;


    }
