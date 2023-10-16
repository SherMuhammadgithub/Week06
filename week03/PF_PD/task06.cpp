#include<iostream>
using namespace std;
main()
{	int sizebag , bagcost , area , costfp;
	float costf;	
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>>sizebag;
	cout<<"Enter the cost of the bag: $";
	cin>>bagcost;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area;
	costf = bagcost / sizebag;
	costfp = bagcost / area;
	cout<<"Cost of fertilizer per pound: $"<<costf<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<costfp;
	
	

}