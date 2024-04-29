#include<iostream>
using namespace std;

double power(double n1, int p=2);
char power(char ch, int p = 2);
int power(int n2, int p = 2);
long power(long n3,int p = 2);
float power(float n4,int p = 2);

int main() {
    
double n1;
char ch;
int n3;
long n4;
float n5;

cout<<"enter double value :"<<endl;
cin>>n1;
cout<<"power of " <<n1 << "=" <<power(n1)<<endl;

cout<<"enter char value :"<<endl;
cin>>ch;
cout<<"power of " <<(int)ch << "=" <<(int)power(n3)<<endl;

cout<<"enter int value :"<<endl;
cin>>n3;
cout<<"power of " <<n3 << "=" <<power(n3)<<endl;

cout<<"enter long value:"<<endl;
cin>>n4;
cout<<"power of " <<n4 << "=" <<power(n4)<<endl;

cout<<"enter float value :"<<endl;
cin>>n5;
cout<<"power of " <<n5 << "=" <<power(n5)<<endl;

    return 0;
}


double power(double n1, int p){
   double power = 1;
   for(int i = 0;i<p ;i++)
   {
   power = power* n1;
   }
   return power;
}

char power(char ch, int p){
   char power = 1;
   for(int i = 0;i<p ;i++)
   {
   power = power * ch;
   }
   return power;
}

int  power(int  n3, int p){
   int power= 1;
   for(int i = 0;i<p ;i++)
   {
    power = power * n3 ;
   }
   return power;
}

long  power(long n4, int p){
   long power= 1;
   for(int i = 0;i<p ;i++)
   {
    power = power * n4 ;
   }
   return power;
}

float  power(float  n5, int p){
   float power= 1;
   for(int i = 0;i<p ;i++)
   {
    power = power * n5;
   }
   return power;
}
