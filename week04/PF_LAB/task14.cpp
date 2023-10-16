#include<iostream>
using namespace std;
void getTriangleType(int a, int b, int c);
main()
{
  int sides_1, side_2, side_3;
  cout<<"Enter Side 1: "; 
  cin>>sides_1;
  cout<<"Enter Side 2: "; 
  cin>>side_2;
  cout<<"Enter Side 3: ";
  cin>>side_3;
  getTriangleType(sides_1, side_2, side_3);
} // namespace std
void getTriangleType(int a, int b, int c){
    if(a == b && b == c && a == c){
        cout<<"Sides of equiletral triangle";

    }
    else if(a == b || b == c || a == c){
        cout<<"Sides of isoceles triangle";

    }
    else {
        cout<<"Sides of scalene trinagle";
    }

    

}

