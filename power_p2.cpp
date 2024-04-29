#include<iostream>
using namespace std;

double power(double n, int p=2);
double power(double n, int p){
   double ans = 1;
   for(int i = 0;i<p ;i++)
   {
   ans = ans * n;
   }
   return ans;
}

int main() {
    
double n,answer;
int p;
char choice;

cout<<"enter number :"<<endl;
cin>>n;

cout<<" you want to enter power ?"<<endl;
cin>>choice;


if(choice == 'y'){
    cout<<"enter power"<<endl;
    cin>>p;
    answer = power(n,p);
}
else {
    answer = power(n);
}
cout<<"answer = " <<answer<<endl;

    return 0;
}