#include<iostream>
#include<math.h>
using namespace std;

float f(float x,float y){
    return (x+sqrt(y));
}

int main(){
    int n;
    float x,y,h, xn, yn, m1, m2;
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
        x=x+h;
        m2=f(x,y+h*m1);
        y=y+h*(m1+m2)/2;
    }
    cout<<"The required solution is: "<<y<<endl;
    return 0;
}