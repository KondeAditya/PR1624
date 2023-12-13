#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;

int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
    int b[3][3];
    int d;
    cout<<"Enter value of x1: ";
    cin>>b[0][0];
    cout<<"Enter value of y1: ";
    cin>>b[1][0];
    cout<<"Enter value of x2: ";
    cin>>b[0][1];
    cout<<"Enter value of y2: ";
    cin>>b[1][1];
    cout<<"Enter value of x3: ";
    cin>>b[0][2];
    cout<<"Enter value of y3: ";
    cin>>b[1][2];
    b[2][0] = b[2][1] = b[2][2];
    setcolor(RED);
    line(b[0][0],b[1][0],b[0][1],b[1][1]);  //x1,y1,x2,y2
    line(b[0][1],b[1][1],b[0][2],b[1][2]);  //x2,y2,x3,y3
    line(b[0][2],b[1][2],b[0][0],b[1][0]);  //x3,y3,x1,y1
    delay(5000);
    cout<<"\nYour Choices Are!! \n";
    cout<<"1. Translation: \n2. Scaling: \n3. Rotation: ";
    cout<<"\nEnter your choice: ";
    cin>>d;
    switch(d)
    {
        case 1:
        {
            float a[3][3],c[3][3];
            cout<<"\nEnter value value of tx and ty: ";
            cin>>a[0][2]>>a[1][2];
            a[0][0] = a[1][1] = a[2][2] = 1;
            a[1][0] = a[2][0] = a[0][1] = a[2][1] = 0;
            for(int i = 0; i<3; i++)
            {
                for(int j = 0; j<3; j++)
                {
                    c[i][j] = 0;
                    for(int k = 0; k<3; k++)
                    {
                        c[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }
            setcolor(BLUE);
            line(c[0][0],c[1][0],c[0][1],c[1][1]);
            line(c[0][1],c[1][1],c[0][2],c[1][2]);
            line(c[0][2],c[1][2],c[0][0],c[1][0]);
            delay(5000);
            break;
        }
        case 2:
        {
            float sx,sy;
            float a[3][3],c[3][3];
            cout<<"\nEnter value value of sx and sy: ";
            cin>>a[0][0]>>a[1][1];
            a[2][2] = 1;
            a[0][1] = a[0][2] = a[1][0] = a[1][2] = a[2][0] = a[2][1] = 0;
            for(int i = 0; i<3; i++)
            {
                for(int j = 0; j<3; j++)
                {
                    c[i][j] = 0;
                    for(int k = 0; k<3; k++)
                    {
                        c[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }
            setcolor(BLUE);
            line(c[0][0],c[1][0],c[0][1],c[1][1]);
            line(c[0][1],c[1][1],c[0][2],c[1][2]);
            line(c[0][2],c[1][2],c[0][0],c[1][0]);
            delay(5000);
            break;
         }
         case 3:
         {
            float z, A;
            float a[3][3];
            float c[3][3];
            cout<<"\nEnter the angle: ";
            cin>>z;
            A = (z*3.14)/180;
            a[2][2] = 1;
            a[0][2] = a[1][2] = a[2][0] = a[2][1] = 0;
            a[0][0] = a[1][1] = cos(A);
            a[0][1] = sin(A);
            a[1][0] = (-sin(A));
            for(int i = 0; i<3; i++)
            {
                for(int j = 0; j<3; j++)
                {
                    c[i][j] = 0;
                    for(int k = 0; k<3; k++)
                    {
                        c[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }
            setcolor(BLUE);
            line(c[0][0],c[1][0],c[0][1],c[1][1]);
            line(c[0][1],c[1][1],c[0][2],c[1][2]);
            line(c[0][2],c[1][2],c[0][0],c[1][0]);
            delay(5000);
            break;
         }
         default:
         	cout<<"\nEnter valid choice!!";
         	break;

    }
    return 0;
}
