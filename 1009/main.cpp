#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int i,after,current,before;
    i=1;
    int count=0;

    while(n/i){
        current=(n/i)%10;
        before=n/(i*10);
        after=n-(n/i)*i;

        if(current==0){
            count+=before*i;
        }else if(current==1){
            count+=before*i+after+1;
        }else{
            count+=(before+1)*i;
        }
        i*=10;
    }

    cout<<count;
    return 0;
}