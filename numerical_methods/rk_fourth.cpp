#include<iostream>
#include<math.h>
using namespace std;

float f(float x,float y){
    return (x-y)/(x+y);
}

int main(){
    int n;
    float x,y,h, xn, yn, m1, m2, m3, m4;
    cout<<"Enter the initial value of x"<<endl;
    cin>>x;
    cout<<"Enter the initial value of y"<<endl;
    cin>>y;
    cout<<"Enter the size of the interval"<<endl;
    cin>>h;
    cout<<"Enter the final value of x"<<endl;
    cin>>xn;
    while(x!=xn){
        m1=f(x,y);
        m2=f(x+h*0.5,y+m1*h*0.5);
        m3=f(x+h*0.5,y+m2*h*0.5);
        m4=f(x+h,y+m3*h);
        y=y+(h*(m1+2*(m2+m3)+m4))/6;
        x=x+h;
    }
    cout<<"The required solution is: "<<y<<endl;
    return 0;
}