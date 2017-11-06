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


int main()
{
    int a, n;
    cin >> a >> n;
    int x, y;
    int d = exgcd(a, n, x, y);

    if (d == 1) {
        cout << x;
    }

    return 0;
}