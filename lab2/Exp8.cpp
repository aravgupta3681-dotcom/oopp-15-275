#include <iostream>
using namespace std;

class Demo {
public:

    void byValue(int x) {
        x = x + 10;
        cout << "Inside Call by Value: " << x << endl;
    }

    void byReference(int &x) {
        x = x + 10;
        cout << "\nInside Call by Reference: " << x << endl;
    }

    void byAddress(int *x) {
        *x = *x + 10;
        cout << "\nInside Call by Address: " << *x << endl;
    }
};

int main() {
    Demo obj;

    int a = 10;
    int b = 10;
    int c = 10;

    obj.byValue(a);
    cout << "After Call by Value: " << a << endl;

    obj.byReference(b);
    cout << "After Call by Reference: " << b << endl;

    obj.byAddress(&c);
    cout << "After Call by Address: " << c << endl;

    return 0;
}