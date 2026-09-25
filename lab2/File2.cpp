#include <bits/stdc++.h>
using namespace std;

void callByValue(int x)
{
    x = x + 10;
    cout << "Value inside callByValue: " << x << endl;
}

void callByReference(int &x)
{
    x = x + 10;
    cout << "Value inside callByReference: " << x << endl;
}

void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Value inside callByAddress: " << *x << endl;
}

int main()
{
    int num = 20;

    cout << "Original Value: " << num << endl;

    callByValue(num);
    cout << "After callByValue: " << num << endl;

    callByReference(num);
    cout << "After callByReference: " << num << endl;

    callByAddress(&num);
    cout << "After callByAddress: " << num << endl;

    return 0;
}