#include <iostream>

using namespace std;


int quick_mod(int x, int n, int m)
{

    int result = 1;

    while (n) {
        if (n & 1) {
            result = (result * x) % m;
        }

        n >>= 1;
        x = (x * x) % m;
    }

    return result;
}


int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    cout << quick_mod(n % 10, n, 10);
    return 0;
}