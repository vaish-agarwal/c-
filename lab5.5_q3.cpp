#include <iostream>
using namespace std;
int main(){
cout<<"rhombus star pattern"<<endl;
/*
    *****
   *****
  *****
 *****
*****

*/
   //print spaces in rows
   for(int i = 0; i <5; i++){

      //print spaces
      for(int j = 0; j <4-i; j++){
      cout<<" ";
      }

         //print stars
         for(int a = 0; a <5; a++){
         cout<<"*";
         }
      cout<<endl;
   }
}
