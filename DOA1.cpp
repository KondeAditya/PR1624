#include<iostream>
using namespace std;

class complex{
      int real,img;
public:
      complex(){
         real=0;
         img=0;
              }
      complex operator+(complex c1){
      complex tmp;
      tmp.real=real+c1.real;
      tmp.img=img+c1.img;
      return tmp;
     }
      complex operator*(complex c2){
      complex tmp1;
      tmp1.real=(real*c2.real)-(img*c2.img);
      tmp1.img=(real*c2.img)+(c2.real*img);
      return tmp1;
     }
friend istream& operator>>(istream&, complex&);
friend ostream& operator<<(ostream&, complex&);
};
   istream& operator>>(istream& din, complex& c3)
   { 
     din>>c3.real>>c3.img;
   }
  
   ostream& operator<<(ostream& dout, complex& c4)  
   { 
     dout<<c4.real<<"+"<<c4.img<<"i";
   }
int main(){
     complex c1,c2,c3,c4;
     cout<<"default representation of complex numbers"<<endl;
     cout<<"   "<<c1<<endl;
     cout<<"Enter first complex number"<<endl;
     cin>>c2;
     cout<<"Enter second complex number"<<endl;
     cin>>c3;
     c4= c2+c3;
     cout<<"Addition is"<<c4<<endl;
     c4=c2*c3;
     cout<<"Multiplication is"<<c4<<endl;
     return 0;

}
   
