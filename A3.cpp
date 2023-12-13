#include<iostream>
#include<graphics.h>
#include <math.h>
using namespace std;
void dda(int x1,int y1,int x2,int y2){
    int i;
    float dx,dy,x,y,xi,yi,length;
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    if(dx>=dy){
        length=dx;
    }else{
        length=dy;
    }

    xi=(x2-x1)/(float)length;
    yi=(y2-y1)/(float)length;
    x=x1+0.5;
    y=y1+0.5;
    for(i=0;i<=length;i++) {
        putpixel(x,y,2);
        x=x+xi;
        y=y+yi;
        }
    delay(500);
}

void bres(int centx,int centy,int r,int c){
    int x,y,p;
    x=0;
    y=r;
    p=3-(2*r);
    do{
    putpixel(centx+x,centy+y,c);
    putpixel(centx+x,centy-y,c);
    putpixel(centx-x,centy+y,c);
    putpixel(centx-x,centy-y,c);
    putpixel(centx+y,centy-x,c);
    putpixel(centx+y,centy+x,c);
    putpixel(centx-y,centy-x,c);
    putpixel(centx-y,centy+x,c);

    if(p<0){
        p=p+(4*x)+6;
    }else{
        p=p+(4*(x-y))+10;
        y=y-1;
    }
    x=x+1;
    }while(x<y);
    delay(500);
}

int main(){
    int gd=DETECT, gm=DETECT;
    initgraph(&gd,&gm,NULL);
    int x1,y1,x2,y2,r,d,D,v;

    cout<<"Enter co of 1st diagonal: ";
    cin>>x1>>y1;
    cout<<"\nEnter co of 2nd diagonal: ";
    cin>>x2>>y2;
    d=abs(x2-x1);
    D=abs(y2-y1);
    v=sqrt((d*d)+(D*D));
    r=abs((d*D)/(2*v));
    r=(int)r;
bres((x1+x2)/2,(y1+y2)/2,r,12);
dda(x1,y1,x2,y1);
dda(x2,y1,x2,y2);
dda(x2,y2,x1,y2);
dda(x1,y2,x1,y1);
dda((x1+x2)/2,y1,x2,(y1+y2)/2);
dda(x2,(y1+y2)/2,(x1+x2)/2,y2);
dda((x1+x2)/2,y2,x1,(y1+y2)/2);
dda(x1,(y1+y2)/2,(x1+x2)/2,y1);
delay(1000);

cleardevice();
/*
int centx,centy,r1;
cout<<"Enter Center Co-ordinates and radius: .";
cin>>centx>>centy>>r1;

bres(centx,centy,r1,12);
bres(centx,centy,r1/2,12);
dda(centx,centy-r1,centx-0.865*r1,centy+r1/2);
dda(centx-0.865*r1,centy+r1/2,centx+0.865*r1,centy+r1/2);
dda(centx+0.865*r1,centy+r1/2,centx,centy-r1);
*/
return 0;
}
