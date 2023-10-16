#include<iostream>
using namespace std;
main()
{
	int adprice , chprice , adtickets , chtickets , doper , total ;
	float donated , rem; 
	string movie;
	cout<<"Enter the movie name: "; 
	cin>>movie;
	cout<<"Enter the adult ticket price: $";
	cin>>adprice;
	cout<<"Enter the child ticket price: $";
	cin>>chprice;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adtickets;
	cout<<"Enter the number of child tickets sold: ";
	cin>>chtickets;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>doper;
	cout<<""<<endl;
	cout<<"Movie: "<<movie<<endl;
	total = (adprice * adtickets) + (chprice * chtickets);
	cout<<"Total amount generated from ticket sales: $"<<total<<endl;
	donated = (total * doper)/100;
	cout<<"Donation to charity ("<<doper<<"%): $"<<donated<<endl;
	rem = total - donated;
	cout<<"Remaining amount after donation: $"<<rem;
	
	 
	




}