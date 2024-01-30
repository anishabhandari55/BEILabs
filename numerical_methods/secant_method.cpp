//SECANT METHOD
#include<iostream>
#include<math.h>
using namespace std;

float f(float x){
    return pow(x,3)-3*x*x-x+3;
}

int main(){
    //to keep track of the number of iteration
    int i=0, itr;
    //decide two initial guesses that need not bracket the root (Open-End method)
    float x1, x2, x3, E;
    cout<<"Enter the initial guesses"<<endl;
    cin>>x1>>x2;
    cout<<"Enter the stopping criterion E"<<endl;
    cin>>E;
    cout<<"Enter maximum number of iteration";
    cin>>itr;
    //Invalid case
    if(f(x2)-f(x1)==0){
        cout<<"Invalid initial guesses."<<endl;
        return 0;
    }
    //iteration for solution using do-while loop
    do{
        x3 = x2 - (f(x2)*(x2-x1))/(f(x2)-f(x1));
        x1=x2;
        x2=x3;
        i++;
        if(i==itr){
            cout<<"Not converging to a solution"<<endl;
            return 0;
        }
    }while(fabs(f(x3))>E);
    cout<<"The root of the given equation is: "<<x3<<endl;
    cout<<"The number of iterations required is: "<<i<<endl;
    return 0;
}