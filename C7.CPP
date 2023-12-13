#include<iostream>
#include<math.h>
#include<graphics.h>
using namespace std;
void man(int x,int y){
        circle(x,y,10);
        rectangle(x-10,y+10,x+10,y+50);
        line(x,y+50,x+10,y+70);
        line(x,y+50,x-10,y+70);
}
void umb(int x,int y){
    line(x,y,x,y-30);
    pieslice(x,y-30,0,180,30);

}
void rain(){
    for(int i = 0;i<100;++i){
        int x=rand()%getmaxx();
        int y=rand()%getmaxy();
        line(x,y,x,y+10);
    }
}
int main(){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
    int x = getmaxx()/2;
    int y = getmaxy() - 120;  // Set the initial y position above the ground

    while(!kbhit()){
        cleardevice();
        man(x,y);
        umb(x,y);
        rain();
        x+=100;
        delay(100);
    }
    return 0;
}