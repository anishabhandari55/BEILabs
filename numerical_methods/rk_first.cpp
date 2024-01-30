#include<iostream>
#include<math.h>
using namespace std;

float f(float x){
    return 3*x*x+1;
}

int main(){
    int n;
    float x,y,h, xn, yn;
    cout<<"Enter the initial value of x"<<endl;
    cin>>x;
    cout<<"Enter the initial value of y"<<endl;
    cin>>y;
    cout<<"Enter the size of the interval"<<endl;
    cin>>h;
    cout<<"Enter the final value of x"<<endl;
    cin>>xn;
    while(x<xn){
        yn = y + h*f(x);
        cout<<yn;
        y=yn;
        x=x+h;
    }
    cout<<"The final value is: "<<yn<<endl;
    return 0;
}