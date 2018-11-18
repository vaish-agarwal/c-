#include<iostream>
using namespace std;

//create class rectangle
class rectangle
{
 public:
 double length;
 double breadth;
 
 double area();
 double perimeter();
};
//finding area
double rectangle:: area()
{
 return length*breadth;
}
//finding perimeter
double rectangle:: perimeter()
{
 return 2*(length + breadth);
}


int main(){
//declare objects of class
 rectangle rect1;
 rectangle rect2;

//ask l & b from user
 cout<<"enter the values of LENGTH of rectangle1 :"<<endl;
 cin>>rect1.length;

 cout<<"enter the values of BREADTH of rectangle1 :"<<endl;
 cin>>rect1.breadth; 

 cout<<"enter the values of LENGTH of rectangle2 :"<<endl;
 cin>>rect2.length;

 cout<<"enter the values of BREADTH of rectangle2 :"<<endl;
 cin>>rect2.breadth;

 //display result for rect1
 double a = rect1.area();
 double b = rect1.perimeter();
 cout<<"area of rectangle1:"<<a<<endl;
 cout<<"perimeter of rectangle1:"<<b<<endl<<endl<<endl;

 //display result for rect2
 double c = rect2.area();
 double d = rect2.perimeter();
 cout<<"area of rectangle2:"<<c<<endl;
 cout<<"perimeter of rectangle2:"<<d<<endl;
  
//comparing area
if(a>b){
cout<<"area of rectangle1 greater than rectangle2."<<endl;

}

else{
cout<<"area of rectangle1 greater than rectangle2."<<endl;
}
 
//comparing perimeter
if(c>d){
cout<<"perimeter of rectangle1 greater than rectangle2."<<endl;

}

else{
cout<<"perimeter of rectangle1 greater than rectangle2."<<endl;
}
}
