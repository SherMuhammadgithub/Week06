#include <iostream>
using namespace std;
void Reverse(string value);
main(){
    string _value;
    cout<<"Enter 'true' or 'false': "; 
    cin>>_value;
    Reverse(_value); 
} // namespace std;
void Reverse(string value){
    if(value == "true"){
        cout<<"false";

    }else{
        cout<<"true";
    }
}

