#include<iostream>
using namespace std;
/*Write a program that includes the above three (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. */


//find sum
void sum1(int a, int b, int &c ){
c = (a + b);
}
	//find max
	int max(int a, int b, int d){
		if (a>b){
		d = a;
		}
		else if(a ==b){
		d = a;
		}
		else {
		d = b;
		}
	return d;
	}

		//find min
		int min(int a, int b, int f){
			if (a<b){
			f = a;
			}
			else if(a ==b){
			f = a;
			}
			else {
			f = b;
			}
		return f;
		}


			//ask user for 2 nos.
			int main(){
			int c,e;
			int a,b,sum;
			cout<<"enter 2 numbers"<<endl;
			cin>>a>>b;

			cout<<"Which operation do you want to operate between numbers given?"<<endl<<"1.sum"<<endl<<"2.maximum"<<endl<<"3.minimum"<<endl<<"enter the serial no. of that particular function"<<endl;
			cin>>e;
				
				//ask user which function it wants to perform and perform the 					function
				if (e == 1){
				sum1(a ,b , sum);
                                cout<<"sum:"<<sum<<endl;
				}
				
				else if(e == 2){
                                cout<<"maximum:"<<max(a,b)<<endl; 
                                }

				else {
				cout<<"minimum:"<<min(a,b)<<endl;
				}			
			
			
			}
