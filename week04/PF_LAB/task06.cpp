#include <iostream>
using namespace std;
void match(int score);
main()
	{
		int soc;
		cout<<"Enter your score: ";
		cin>>soc;
		match(soc);

	}

	void match(int score){
		if(score > 50){
			cout<<"Pass";

	}else{
		cout<<"Fail";

	}



	}