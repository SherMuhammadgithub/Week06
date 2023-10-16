#include<iostream>
float findPerimeter(char name, float num);

using namespace std;
main()
{
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    char name;
    cin>>name;
    cout<<"Enter the value: ";
    float num;
    cin>>num;
    float result = findPerimeter(name, num);
    cout<<"The perimeter is: "<<result;
} 
float findPerimeter(char name, float num){
    float perimeter;
    if (name == 's')
    {
        perimeter = 4*num;
    }
    else if(name == 'c'){
        perimeter = 6.28*(num/2);

    }
    else if(name == 't'){
        perimeter = 3*num;
    }
    else{
        perimeter = 6*num;
    }
    return perimeter;
}


