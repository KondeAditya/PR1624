#include<iostream>
using namespace std;

class complex{

    public:
    int real_no,img_no;

    complex(){
        real_no=0;
        img_no=0;
    }
};

int main(){

    complex x,y,z,m;

    cout<<"Enter first real number:";
    cin>>x.real_no;
    cout<<"Enter first img number:";
    cin>>x.img_no;
    cout<<"First Complex Number:"<<x.real_no<<"+"<<x.img_no<<"i";

    cout<<"\nEnter second real number:";
    cin>>y.real_no;
    cout<<"Enter second img number:";
    cin>>y.img_no;
    cout<<"Second Complex Number:"<<y.real_no<<"+"<<y.img_no<<"i";

    z.real_no=(x.real_no + y.real_no);
    z.img_no=(x.img_no + y.img_no);

    cout<<"\nSum of two Complex Numbers:"<<z.real_no<<"+"<<z.img_no<<"i";


    m.real_no=(x.real_no*y.real_no) + (x.img_no*y.img_no);
    m.img_no=(x.real_no*y.img_no) + (x.img_no*y.real_no);

    cout<<"\nMultiply of Two Complex Numbers"<<m.real_no<<"+"<<m.img_no<<"i";

    return 0;
}
