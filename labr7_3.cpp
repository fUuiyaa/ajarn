#include <iostream>
using namespace std;

int adiff(int a,int b){
    
    a = (a % 360 + 360) % 360;
    b = (b % 360 + 360) % 360;
    
    int c = abs(a-b);
    if(c>180){
        return 360-c;
    }
    else{
        return c;
    }


}
int main() {
    int a, b;
    cout << "Enter two angles: ";
    cin >> a >> b;

    cout << "Angle difference: " << adiff(a,b) << endl;
    return 0;
}