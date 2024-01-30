//BISECTION METHOD
#include<iostream>
#include<cmath>
using namespace std;

float func(float x){
    return pow(x,2)-4*x-10;
}

int main(){
    //to keep track of the number of iteration required
    int i=0;
    //two initial guesses x1 and x2 that must bracket the root and the stopping criterion E
    float x1, x2,x0, E; 
    cout<<"Enter the initial guesses"<<endl;
    cin>>x1>>x2;
    cout<<"\nEnter the stopping criterion"<<endl;
    cin>>E;
    if(func(x1)*func(x2)>0){
        cout<<"Invalid guesses"<<endl;
        return 0;
    }
    //calculate x0 (The midpoint between x1 and x2)
    x0 = (x1+x2)/2;
    while(fabs(func(x0))>E){
        if(func(x0)*func(x1)<0){
            x2=x0;
        }else{
            x1=x0;
        }
        x0 = (x1+x2)/2;
        i++;
        // to stop if the number of iteration becomes very large
        if(i>100){
            cout<<"No solution";
            return 0;
        }
    }
    cout<<"The root of the given non linear equation is: "<<x0;
    cout<<"\nThe number of iteration required is "<<i<<endl;
    return 0;
}