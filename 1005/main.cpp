#include <iostream>
#include <cstring>

using namespace std;
char A[10002];
char B[10002];

int main()
{
    int a, b;
    int markA = 0, markB = 0;
    cin >> A >> B;

    a = strlen(A);
    b = strlen(B);


    markA = (A[0] == '-' ? -1 : 1);
    markB = (B[0] == '-' ? -1 : 1);

    int i, j;

    if (markA == 1 && markB == 1) {
        for (i = a - 1, j = b - 1; i >= 0 && j >= 0; --i, --j) {
            A[i] = (A[i] - '0') + (B[i] - '0');
        }
    } else if (markA == 1 && markB == -1) {
        for (i = a - 1, b = j - 1; i >= 0 && j > 0; --i, --j) {
            A[i] = (A[i] - '0') - (B[i] - '0');
        }
    }


    std::cout << "Hello, World!" << std::endl;
    return 0;
}