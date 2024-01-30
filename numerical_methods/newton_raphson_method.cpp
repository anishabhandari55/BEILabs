#include<iostream>
#include<math.h>
using namespace std;


float f(float x){
    return 2*x*x+4*x-5;
}

float dervf(float x){
    return 4*x+4;
}

int main(){
    //start off with an initial guess x0 (approximate root of the equation)
    int i=0;
    //decide initial guess x0 and permissible error E
    float x1, x0, E;
    cout<<"Enter the initial approximate root"<<endl;
    cin>>x0;
    cout<<"Enter the permissible error"<<endl;
    cin>>E;
    if(dervf(x0)==0){
        cout<<"Invalid guess";
        return 0;
    }
    do{
        x1 = x0 - (f(x0)/dervf(x0));
        x0 = x1;
        i++;
        if(i>100){
            cout<<"Non-convergent"<<endl;
            return 0;
        }
    }while(fabs(f(x1))>E);
    cout<<"The root of the given equation is: "<<x1;
    return 0;
}
