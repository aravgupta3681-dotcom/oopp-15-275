#include <bits/stdc++.h>
using namespace std;

class point {
private:
    int x, y;

public:
    point() : x{0}, y{0} {
        cout << "Default constructor" << endl;
    }

    point(int p, int q) : x{p}, y{q} {
        cout << "Parameterized constructor" << endl;
    }

    // Add one point
    point add(point q) {
        point r;
        r.x = x + q.x;
        r.y = y + q.y;
        return r;
    }

    // Add two points
    point add(point p, point q) {
        return point(x + p.x + q.x, y + p.y + q.y);
    }

    void show() {
        cout << x << " , " << y << endl;
    }
};

int main() {
    point p, q(20, 50);

    p.show();
    q.show();

    point r = p.add(q);
    r.show();

    point s = p.add(p, q);
    s.show();

    return 0;
}