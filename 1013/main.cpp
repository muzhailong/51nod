//逆元

#include <iostream>
using namespace std;
long long N=1000000007;

long long quick_power_mod(long long a,long long b){
    long long result=1;
    while(b){
        if(b%2==1){
            result=result*a%N;
        }
        b/=2;
        a=(a*a)%N;
    }
    return result;
}

int main()
{
    long long n;
    cin>>n;
    long long result=(quick_power_mod(2,N-2)*(quick_power_mod(3,n+1)-1))%N;
    cout<<result;
    return 0;
}