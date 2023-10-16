#include<iostream>
#include<math.h>
using namespace std;
void cal(double a, double b, double c);
main()
{
    double _a, _b, _c;
cout<<"Enter a: ";
cin>>_a;
cout<<"Enter b: ";
cin>>_b;
cout<<"Enter c: ";
cin>>_c;
cal(_a, _b, _c);
    
    
} 
void cal(double a, double b, double c){
    double ans1 , ans2;
    ans1 = (-b + sqrt(b*b - 4*a*c))/2*a;
    ans2 = (-b - sqrt(b*b - 4*a*c))/2*a;
    cout<<"x = "<<ans1<<endl;
    cout<<"x = "<<ans2;

}
