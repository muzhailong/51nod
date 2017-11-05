#include <iostream>
#include <algorithm>

using  namespace std;
#define MAX 1e18+999
long long data[99999];
int len;
int n;
long long arr[10009];
long long result[10009];


void init()
{
    long long i,j,k;
    long long temp;

    for(i=1;i<MAX;i*=2){
        for(j=1;i*j<MAX;j*=3){
            for(k=1;(temp=i*j*k)<MAX;k*=5){
                data[len++]=temp;
            }
        }
    }
}

long long binary_find(long long element){

    int left=1,right=len-1;
    int mid;
    while(left<=right){
        mid=(left+right)/2;

        if(data[mid]>element){
            right=mid-1;
        }else if(data[mid]<element){
            left=mid+1;
        }else{
            return data[mid];
        }
    }
    return data[left];
}

void swap(long long&a,long long&b){
    long long temp=a;
    a=b;
    b=temp;
}

void insert_sort(int left,int right){
   int i,j;
    long long k;

    for(i=left+1;i<=right;++i){
        k=data[i];
        for(j=i;j>left;--j){
            if(data[j-1]<=k){
                break;
            }
            data[j]=data[j-1];
        }
        data[j]=k;
    }
}

long long choose_pivot(int left,int right){

    int mid=(left+right)/2;
    if(data[left]>data[mid]){
        swap(data[left],data[mid]);
    }

    if(data[left]>data[right]){
        swap(data[left],data[right]);
    }

    if(data[mid]>data[right]){
        swap(data[mid],data[right]);
    }

    swap(data[right-1],data[mid]);
    return data[right-1];
}


void quick_sort(int left,int right){
    if(right-left<15){
        insert_sort(left,right);
        return;
    }
    int i,j;
    long long pivot=choose_pivot(left,right);
    i=left;
    j=right-1;
    while(true){
        while(data[++i]<pivot){}
        while(data[--j]>pivot){}
        if(i>=j) break;

        swap(data[i],data[j]);
    }
    swap(data[i],data[right-1]);
    quick_sort(left,i-1);
    quick_sort(i+1,right);
}


int main()
{
    init();
    quick_sort(1,len-1);
    cin>>n;
    int i;

    for(i=0;i<n;++i){
        cin>>arr[i];
    }

    for(i=0;i<n;++i){
        cout<<binary_find(arr[i])<<endl;
    }
    return 0;
}