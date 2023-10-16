#include<iostream>
#include<cmath>
float heightFind(float dis, float angle);
using namespace  std;

main()
{
  float dis, angle;
  cout<<"Enter the distance from the base of the tree (in feet): ";
  cin>>dis;
  cout<<"Enter the angle of elevation (in degrees): ";
  cin>>angle;
  float result = heightFind(dis, angle);
  cout<<"The height of the tree is: "<<result<<" feet";  
    
    
} // namespace  std;
float heightFind(float dis, float angle){
    float height = 0;
    height = tan(angle/57.2958f)*dis;
    return height;

}
