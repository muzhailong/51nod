#include <iostream>
using namespace std;

int gcd(long a,long long b){
    long long temp;
    while(b){
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

long long lcm(long long a,long long b){

    return a*b/gcd(a,b);
}


int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<lcm(a,b);

    return 0;
}