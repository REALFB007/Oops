#include<iostream>
using namespace std;

float circarea(float r);

float circarea(float r){
    return 3.14 * r * r;
}

int main() {
    
    int radius;
    cout<<"enter radius : "<<endl;
    cin>>radius;

    float area = circarea(radius);

    cout<<"Area of circle = "<<area <<endl;
    return 0;
}