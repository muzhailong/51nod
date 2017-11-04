#include <iostream>

using namespace std;

int main()
{
    long long n, p;
    cin >> n >> p;
    if (n == 0) {
        cout << 1 % p;
    } else {

        long long result = 1;
        for (long long i = 1; i <= n; ++i) {
            result = result % p * i % p;
        }
        cout << result;
    }
    return 0;
}