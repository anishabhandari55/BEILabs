//TRAPEZOIDAL RULE
#include<iostream>
#include<math.h>
using namespace std;

float f(float x){
    return 1/(1+x*x);
}

int main(){
    int n;
    //where Ict is the composite trapezoidal
    float a,b,h, Ict;
    //the end points fo the interval
    cout<<"Enter the end points of the interval"<<endl;
    cin>>a>>b;
    cout<<"Enter the number of intervals"<<endl;
    cin>>n;
    //width of interval
    h = (b-a)/n;
    Ict = f(a)+f(b);
    for(int i=1; i<n; i++){
        Ict += 2*f(a+i*h); //we know, h= x1-x0/i so, x1 = x0 + i*h 
    }
     // completing the calculation
    cout<<"The value of the integral is: "<<Ict*(h/2)<<endl;
    return 0;
}