#include<iostream>
using namespace std;

class Int {
private :
int i;
public:

Int(){
    i=0;
}

Int(int i1){
    i = i1;
}

void add( Int i2, Int i3){
     i = i2.i + i3.i;
}

void displayi(){
    cout<< i <<endl;
}

};


int main() {
    Int a(2);
    Int b(7);
    Int c;

    c.add(a,b);
    c.displayi();
    
    return 0;
}