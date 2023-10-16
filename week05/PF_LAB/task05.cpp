#include<iostream>
#include<cmath>
using namespace std;
float determinant(float a, float b, float c);
void roots(float det, float a, float b, float c);
int main()
{
float a, b, c; 
cout <<"Enter the value of a: ";
cin >>a;
cout <<"Enter the value of b: ";
cin >>b;
cout <<"Enter the value of c: ";
cin >>c;
float deter=determinant(a,b,c);
roots(deter, a ,b ,c);
return 0;
}

float determinant(float a, float b, float c)
{
float det=(b*b)-(4*a*c);
return det;
}

void roots(float det, float a, float b, float c)
{
float root1, root2;
    if(det==0){
root2=-b/(2*a);
cout <<"Solution: x = "<<root2;
    }
    if(det>0){
root1=(-b+sqrt(det))/(2*a);
root2=(-b-sqrt(det))/(2*a);
cout <<"Solutions: x = "<<root1<<" and x = "<<root2;
    }
    if(det<0){
float halfpart=-b/(2*a);
float nexthalf=sqrt(-det)/(2*a);
cout<<"Complex Solutions: x = "<<halfpart<<" + "<<nexthalf<<"i and x = "<<halfpart<<" - "<<nexthalf<<"i";
}
}