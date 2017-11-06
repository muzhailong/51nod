#include <iostream>

using namespace std;

int exgcd(int a, int b, int &x, int &y)
{
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int r = exgcd(b, a % b, x, y);
    int temp = x;
    x = y;
    y = temp - a / b * y;
    return r;
}


int exgcd(int a, int b, int &x, int &y, bool)
{
    int x0 = 1, y0 = 0;
    int x1 = 0, y1 = 1;
    x = 0, y = 1;
    int r = a % b;
    int q = (a - r) / b;

    while (r) {
        x = x0 - q * x1, y = y0 - q * y1;
        x0 = x1, y0 = y1;
        x1 = x, y1 = y;
        a = b, b = r;
        r = a % b;
        q = (a - r) / b;
    }
    return b;
}

int main()
{
    int a, b, c;
    int d;
    cin >> a >> b >> c;
    int t = 10;

    int x, y;

    d = exgcd(a, b, x, y, true);
    if (c % d) {
        return 0;
    }

    x = x * c / d;
    y = y * c / d;

    int px, py;
    int bb = b / d;
    int aa = a / d;

    for (int i = 0; i <= t; ++i) {
        px = x + bb * i;
        py = y - aa * i;
        cout << "x: " << px << "  " << "y: " << py << endl;
    }

    return 0;
}