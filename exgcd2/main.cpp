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
    y = temp - r / b * y;
    return r;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int x, y;

    cout << exgcd(a, b, x, y);


    return 0;
}