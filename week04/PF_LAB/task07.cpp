#include <iostream>
using namespace std;
void check(int no1);

main()
	{

int num;
cout<<"Enter a number: ";
cin>>num;
check(num);



}
void check(int no1){
	if(no1%2 == 0){
cout<<"Number "<<no1<<" is even";

}else{
	cout<<"Number "<<no1<<" is odd";

}


}