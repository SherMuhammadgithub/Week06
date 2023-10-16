#include <iostream>
#include <cmath>

void check(int a);
using namespace std;
main()
{
    int num;
    cout<<"Enter a five-digit number: ";
    cin>>num;
    check(num);


}
void check(int a){

if (a % 2 == 0)
{
    cout<<"Evenish";
}else{
    cout<<"Oddish";
}

}