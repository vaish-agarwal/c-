#include<iostream>
using namespace std;

//1.Tax Rate Calculation using Functions

/*
Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.*/
void rValue(float &unitCst, float &units, float &taxRt ){
cout<<"Enter cost of the commodity."<<endl;
cin>>unitCst;
cout<<"Enter no. of the commodity."<<endl;
cin>>units;
cout<<"Enter taxt rate on the commodity."<<endl;
cin>>taxRt;

}



	//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
	void receive(float unitCst, float units, float taxRt, float salesTax, float totDue){
	salesTax = unitCst * taxRt/100;
	totDue = units * salesTax;

	}



		//Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
		float read(float unitCst, float units, float taxRt, float salesTax, float totDue){
		cout<<"The no. of the commodities brougt is: "<<units<<endl<<"The cost of the commodity is: "<<unitCst<<endl<<"Your percentage tax rate is: "<<taxRt<<endl<<"With this tax rate your total due is: "<<totDue<<endl<<"Hence your sales tax is: "<<salesTax;
		}


			//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
			int main(){
			float unitCst, units, taxRt, salesTax, totDue;
			rValue(unitCst, units, taxRt );
			receive( unitCst,  units,  taxRt, salesTax,  totDue);
			read( unitCst,  units, taxRt, salesTax, totDue);



			}











