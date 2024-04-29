#include<iostream>
using namespace std;


class timee {
private :
 int hours;
 int mins;
 int secs;
public:

timee(){
    hours = 0;
    mins = 0;
    secs = 0;
}
timee(int h ,int m , int s){
    hours = h;
    mins = m;
    secs = s;
}

void display(){
    cout<< hours << ":" << mins << ":" << secs<<endl;
}

void addtime(timee t1 , timee t2){
    secs += t1.secs + t2.secs;
    if(secs > 59){
        secs = secs - 60;
        mins ++;
    }
    mins += t1.mins + t2.mins;
    if(mins > 59){
        mins = mins - 60;
        hours ++;
    }
    hours += t1.hours + t2.hours;
}
};

int main(){

timee t1(2,49,30);
timee t2(3,20,15);
timee t3;

t3.addtime(t1,t2);

cout<<"sum of :" <<endl;
t1.display();
t2.display();
cout<< "is" <<endl;
t3.display();

return 0;

}









