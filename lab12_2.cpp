#include<iostream>
using namespace std;

int gcd(int x,int y);
    
int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x,int y){
    
    while (y != 0){
        int something = y;
        y = x % y;
        x = something;
    }
    
    return x;
}