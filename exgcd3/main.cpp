#include <iostream>

using namespace std;


int exgcd(int a, int b, int &x, int &y)
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

        a = b, b = r, r = a % b;
        q = (a - r) / b;
    }
    return b;
}


int main()
{
    int a, b, n;

    cin >> a >> b >> n;
    int x, y;
    int d = exgcd(a, n, x, y);
    if (b % d) {
        return 0;
    }
    int x0 = x * (b / d) % n;

    for (int i = 0; i < d; ++i) {
        x = (x0 + i * (n / d)) % n;
        cout << x << "  ";
    }

    return 0;
}