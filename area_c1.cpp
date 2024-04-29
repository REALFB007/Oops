#include<iostream>
#include<math.h>
using namespace std;

float area(int r);
float area(float l,float b);
float area(float x,float y,float z);

int main() {
    
    int r ,length,breath,b,h,a;

    
    cout<<"enter radius of circle :" <<endl;
    cin>>r;
    cout<< "area of circle =" << area(r) <<endl;

    cout<<"enter l and b  of rect :" <<endl;
    cin>>length>>breath;
    cout<< "area of rect =" << area(length,breath) <<endl;

    cout<<"enter b ,h and a  of triangle :" <<endl;
    cin>>b>>h>>a;
    cout<< "area of triangle =" << area(b,h,a) <<endl;
    return 0;
}

float area(float x,float y,float z)
{

    float s = (x+y+z)/2;
    float ar = sqrt(s * (s-x) * (s-y) * (s-z));
    return ar;
}

float area(float l,float b)
{
    return l * b;
}

float area(int r)
{
    return 3.14 * r * r;
}