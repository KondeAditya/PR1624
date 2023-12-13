#include<iostream>
#include<graphics.h>
using namespace std;
int move(int j,int h,int &x,int &y){
    if(j==1){//jr aplyala vr jaycha asel tr y-h kartat karan graphics madhe inverted asta
        y=y-h;
    }else if(j==2){
        x=x+h;
    }else if(j==3){
        y=y+h;
    }else if(j==4){
        x=x-h;
    }
    lineto(x,y);
}
void hilbert(int r,int d, int l,int u,int i,int h,int &x, int &y){
    if(i>0){
        i--;
        hilbert(d,r,u,l,i,h,x,y);
        move(r,h,x,y);//r
        hilbert(r,d,l,u,i,h,x,y);
        move(d,h,x,y);//d
        hilbert(r,d,l,u,i,h,x,y);
        move(l,h,x,y);//l
        hilbert(u,l,d,r,i,h,x,y);
    }
}
int main(){
    int x0=50,y0=150,x,y,h=10,n,u=1,r=2,d=3,l=4;
    x=x0;
    y=y0;
    cout<<"Enter n: ";
    cin>>n;
    int gm,gd=DETECT;
    initgraph(&gd,&gm,NULL);
    moveto(x,y);
    hilbert(r,d,l,u,n,h,x,y);
    delay(5000);
    getch();
    return 0;
}