#include<iostream>
using namespace std;
main()
{
	int sqm , w , h, p;
	cout<<"Number of square meters you can paint: ";
	cin>>sqm;
	cout<<"Width of the single wall (in meters): ";
	cin>>w;
	cout<<"Height of the single wall (in meters): ";
	cin>>h;
	p = sqm/(w*h);
	cout<<"Number of walls you can paint: "<<p;
	
	


}