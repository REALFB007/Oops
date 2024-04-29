 #include <iostream>
 using namespace std;
 
 class A                  
 {
 private:
 int privdataA;     
 protected:            
 int protdataA;
 public:
 int pubdataA;
 };
 
 class B : public A       
 {
 public:
 void funct()
 {
 int a;
  
 a = protdataA;  
 a = pubdataA;   
 }
 };
 
 class C : private A      
 {
 public:
 void funct()
 {
 int a;
 
 a = protdataA;  
 a = pubdataA;   
 }
 };
 
 int main()
 {
 int a;
 
 B objB;  
 a = objB.pubdataA;    
     
 return 0;
 }