#include<iostream>
using namespace std;

int gcd(int x,int y){
    while (y != 0){
        int remainder = x % y;
        
        x = y;
        y = remainder;
    }
    
    return x;
}
int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}
