#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int arr[50001];
    ios::sync_with_stdio(false);
    int k, n;
    cin >> k >> n;
    int i;

    int temp = k / 2;

    for (i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] < temp) {

        } else {
            arr[i] = k - arr[i];
        }
    }

    sort(arr, arr + n);
    bool t = false;

    for (i = 0; i < n - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            cout << arr[i] << " " << k - arr[i] << endl;
            t = true;
        }
    }

    if (!t) {
        cout << "No Solution" << endl;
    }

    return 0;
}