#include<iostream>
using namespace std;
main()
{
	float vegpri , frtpri , total , texrate  ;
	float exrate = 1.94;
	int toveg , tofrt ;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vegpri;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>frtpri;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>toveg;
	cout<<"Enter total kilograms of fruits: ";
	cin>>tofrt;
	total = (toveg*vegpri) + (tofrt*frtpri);
	texrate = total / exrate;
	cout<<"Total earnings in Rupees (Rps): "<<texrate;
	
	



}