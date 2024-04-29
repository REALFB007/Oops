#include<iostream>
using namespace std;

class point {
private :
int x;
int y;
public:

point(){
    x=0;
    y=0;
}

void getxy(){
    cout<<"enter coordinates :"<<endl;
    cin>>x >>y;
}
void showxy(){
    cout<< x << y;
    
}

point operator +=(point m){
    point p;
  //  p = m.x;
    //p = m.y;
    return p;
}
};


int main() {
    point p1,p2,p3;
    p1.getxy();
    p2.getxy();
     p1 += p2;
    p1.showxy();
    p2.showxy();
    
    return 0;
}