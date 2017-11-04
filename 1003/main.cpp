#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;

    cin >> n;
    int num = 0;
    while (n) {
        num += n / 5;
        n /= 5;
    }
    cout << num;


    return 0;

}