#include<iostream>
using namespace std;
main()
{	int num , sum ,mod1 , mod2 , mod3 , mod4 ;
	
	cout<<"Enter a 4-digit number: ";
	cin>>num;
	mod1 = num % 10 ; 
	num = num / 10 ;
	mod2 = num % 10 ;
	num = num / 10;
	mod3 = num % 10; // gives 2
	num = num / 10 ;
	mod4 = num % 10 ; // gives 1
	sum = mod1 + mod2 + mod3 + mod4;
	cout<<"Sum of the individual digits: "<<sum;


	
	
}