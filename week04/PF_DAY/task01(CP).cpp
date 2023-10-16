#include <iostream>
using namespace std;
void IsEqual(int n1, int n2);
main(){
    int n_1, n_2;
    cout<<"Enter the first number: ";
    cin>>n_1;
    cout<<"Enter the second number: ";
    cin>>n_2;
    IsEqual(n_1, n_2);

    
} // namespace std;
void IsEqual(int n1, int n2){
    if(n1 == n2){
        cout<<"true";
    }else{
        cout<<"false";
    }
}

