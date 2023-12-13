#include<iostream>
#include<graphics.h>
#include <math.h>
using namespace std;
void koch(int x1,int y1,int x2,int y2,int i){
    float angle=60*3.14/180;
    int x3=(2*x1+x2)/3;
    int y3=(2*y1+y2)/3;
    int x4=(x1+2*x2)/3;
    int y4=(y1+2*y2)/3;

    int x=x3+(x4-x3)*cos(angle)+(y4-y3)*sin(angle);
    int y=y3-(x4-x3)*sin(angle)+(y4-y3)*cos(angle);

    if(i>1){
        koch(x1,y1,x3,y3,i-1);
        koch(x3,y3,x,y,i-1);
        koch(x,y,x4,y4,i-1);
        koch(x4,y4,x2,y2,i-1);
    }else{
        line(x1,y1,x3,y3);
        line(x3,y3,x,y);
        line(x,y,x4,y4);
        line(x4,y4,x2,y2);
    }
}
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm,NULL);
    cout<<"Enter Co-ordinates: ";
    int x1,x2,y1,y2,n;
    int x3,y3;
    float angle1=60*3.14/180;
    cin>>x1>>y1>>x2>>y2;
    cout<<"How many curves do you want: ";
    cin>>n;
    x3=x1+(x2-x1)*cos(angle1)+(y2-y1)*sin(angle1);
    y3=y1-(x2-x1)*sin(angle1)+(y2-y1)*cos(angle1);
    koch(x1,y1,x3,y3,n);
    // koch(x3,y3,x2,y2,n);
    // koch(x2,y2,x1,y1,n);
    getch();
    return 0;
}