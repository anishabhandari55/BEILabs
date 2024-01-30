//SIMPSON'S 3/8 RULE
#include<iostream>
using namespace std;

float f(float x){
    return 1/(1+x*x);
}
int main(){
    float a, b, h, Is;
    int n;
    
    cout << "Enter the number of sub intervals (must be a multiple of 3): ";
    cin >> n;

    while(n % 3 != 0){
        cout << "Invalid number of sub intervals. Please enter a multiple of 3: ";
        cin >> n;
    }

    cout << "Enter lower limit of integration: ";
    cin >> a;
    cout << "Enter upper limit of integration: ";
    cin >> b;

    // height of the interval
    h = (b - a) / n;

    // calculating integration using 3/8 Simpson's rule
    Is = f(a) + f(b);

    for(int i = 1; i < n; i++){
        if (i % 3 == 0){
            Is += 2 * f(a + i * h);
        } else {
            Is += 3 * f(a + i * h);
        }
    }

    // completing the calculation of integration
    Is = (3 * Is * h) / 8;

    cout << "The required value of integration is: " << Is << endl;
    return 0;
}
