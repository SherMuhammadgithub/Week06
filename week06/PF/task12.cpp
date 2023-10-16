#include<iostream>
using namespace std;
float totalIncome(string, int, int);
main(){
    string screening;
    int rows,columns;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>screening;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    float income = totalIncome(screening,rows,columns);
    cout<<income;
}

float totalIncome(string screen, int r, int c){
    float seats = r*c;
    if (screen == "Premiere"){
        return seats * 12.00;
    }
    if (screen == "Normal"){
        return seats * 7.50;
    }
    if (screen == "Discount"){
        return seats * 5.00;
    }
}