#include <iostream>
using namespace std;
void check(int Price, string day);
main()
{
 int _price;
string _day;
cout<<"Enter the day of purchase: ";
cin>>_day;
cout<<"Enter the total purchase amount: $";
cin>>_price;
check(_price , _day);
}
void check(int Price, string day){
int dis_price = 10 , payable;
if(day == "Sunday"){
payable = Price - (Price * 10)/100;
cout<<"Payable Amount: $"<<payable;
}else{
payable = Price;
cout<<"Payable Amount: $"<<payable;

}



}