#include <iostream>
using namespace std;

        /*a.	Write a function that outputs the sum of all even numbers between firstNum and    secondNum. (use loop)*/
	/* create a user-defined function called sumEvenNumbers().*/
	int sumEvenNumbers(int a, int b){
		int sum = 0;
		if(a%2 ==0){
			for(int i = (a +2) ; i< b ; i =(i+2)){
			sum = sum + i;
			}
		}	
		else{
			for(int i = (a+1) ; i < b ; i =(i + 2)){
			sum = sum + i;
			}
		
		}
	return sum;
	}

        /*b.    create a user-defined function called sumOddNumbers().*/
	int sumOddNumbers(int a, int b){
		/*Write a function that outputs the sum of all odd numbers between firstNum and 		secondNum. (use loop)*/
		int sum = 0;
		if(a%2 ==1){
			for(int i = (a +2) ; i< b ; i =(i+2)){
			sum = sum + i;
			}
		}	
		else{
			for(int i = (a+1) ; i < b; i =(i+2)){
			sum = sum + i;
			}
		
		}
	return sum;
	}

	/*Write a function that outputs the sum of the square of the odd numbers between firstNum 		and secondNum.(use while loop)*/

	/*  create a user-defined function called sumSquareOddNumbers  ().*/ 
	int sumSquareOddNumbers(int a, int b){
		
		int sum = 0;
		if(a%2 ==1){
			for(int i = (a +2) ; i< b ; i=i+2){		
			sum = sum + (i*i);
			}
		}	
		else{
			for(int i = (a+1) ; i < b ;i=i+2){
			sum = sum + (i*i);
			}
		
		}
	return sum;
	}

	/*Write a function that outputs the sum of the square of the even numbers between firstNum  		and secondNum. (use while loop)*/

	/* create a user-defined function called sumSquareEvenNumbers(). */

	int sumSquareEvenNumbers(int a, int b){
		
		int sum = 0;
		if(a%2 ==0){
			for(int i = (a +2) ; i < b  ; i=i+2){
			sum=sum+(i*i);
			}
		}	
		else{
			for(int i = (a+1) ; i < b ; i=i+2){
			sum = sum + (i*i);
			}
		
		}
	return sum;
	}


                int main(){
		int x,y;
		cout<< "enter statrting and ending numbers of the function"<<endl;
		cin>>x>>y;
		
		int sumEven = sumEvenNumbers(x,y);
		int sumOdd = sumOddNumbers(x,y);
		int sumSquareEven = sumSquareEvenNumbers(x,y);
		int sumSquareOdd = sumSquareOddNumbers(x,y);

		cout<<"sum of even numbers:"<<sumEven<<endl;
		cout<<"sum of odd numbers:"<<sumOdd<<endl;
		cout<<"sum of squares of even numbers:"<<sumSquareEven<<endl;
		cout<<"sum of squares of odd numbers:"<<sumSquareOdd<<endl;

		}


