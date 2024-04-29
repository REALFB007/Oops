#include<iostream>
using namespace std;

const double toll = 0.5;
const char ESC = 27;

class tollbooth {
private :
unsigned int totalCars;
double totalAmount;
public:

tollbooth(){
    totalCars = 0;
    totalAmount = 0;
}

void payingCar(){
    totalCars++;
    totalAmount = totalAmount + toll;
}

void nopayCar(){
    totalCars++;
}

void display(){
    cout<<"total cars = " <<totalCars <<endl <<"total amount =" <<totalAmount <<endl;
}

};


int main() {
    tollbooth t;
    char ch;
    cout<<"enter 0 , 1 or ESC :" <<endl;
    

   do {
    cin>> ch;
    if(ch == '0'){
        t.nopayCar();
    }
    if(ch == '1'){
        t.payingCar();
    }

   }

while (ch == ESC);
t.display();
    return 0;
}