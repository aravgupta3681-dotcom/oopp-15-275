#include<bits/stdc++.h>
using namespace std;
int swapbyref(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    return 0;
}
int callbyvalue(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    return 0;
}
int callbyaddress(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

int main(){
    // Call by reference
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapbyref(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    //call by value
    int a = 15, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    callbyvalue(a, b);
    cout << "After swapping: a = " << b << ", b = " << a << endl;
    //call by address
    int c = 25, d = 30;
    cout << "Before swapping: c = " << c << ", d = " << d << endl;
    callbyaddress(&c, &d);

    cout << "After swapping: c = " << c << ", d = " << d << endl;
    return 0;
}





