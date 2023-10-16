#include<iostream>
#include<cmath>
void  checkAlphabetCase(char letter);

using namespace std;
main()
{
    char letter;
    cout<<"Enter a character (A/a): ";
    cin>>letter;
    checkAlphabetCase(letter);
    
}
void checkAlphabetCase(char letter){
    if (isupper(letter))
    {
        cout<<"You have entered Capital "<<letter;
    }
    else{
        cout<<"You have entered small "<<letter;
    }
    
}