#include<iostream>
using namespace std;
main()
{
	float a , vf , vi , t ;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>vi;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>a;
	cout<<"Enter Time (s): ";
	cin>>t;
	vf = (a*t) + vi;
	cout<<"Final Velocity (m/s): "<<vf;	



}