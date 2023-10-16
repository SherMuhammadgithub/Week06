#include <iostream>
using namespace std;
void apply(float dis);
main()
{
float _dis;
cout<<"Enter the distance: ";
cin>>_dis;
apply(_dis);


}
void apply(float dis){
float fuel_amount;
fuel_amount = 10 * dis;
if(fuel_amount < 100){
cout<<"Fuel needed: 100";
}else{
cout<<"Fuel needed: "<<fuel_amount;

}



}

