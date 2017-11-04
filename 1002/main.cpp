#include <iostream>

using namespace std;
int arr[2][501];

int main()
{
    int n;
    cin >> n;
    int t;
    int maxValue = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> t;
            if (i & 1) {
                arr[1][j] = max(arr[0][j - 1], arr[0][j]) + t;
                maxValue = maxValue > arr[1][j] ? maxValue : arr[1][j];
            } else {
                arr[0][j] = max(arr[1][j - 1], arr[1][j]) + t;
                maxValue = maxValue > arr[0][j] ? maxValue : arr[0][j];
            }
        }
    }
    cout << maxValue;
    return 0;
}