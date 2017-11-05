#include <iostream>
int arr[10000];
int len;


//常规的二分查找
int binary_search(int element){

    int left=0;
    int right=len-1;
    int mid=(left+right)/2;
    while(left<=right){
        if(arr[mid]>element){
            right=mid-1;
        }else if(arr[mid]<element){
            left=mid+1;
        }else{
             return mid;
        }
    }
    //结束时候 arr[right] element arr[left]
    return -1;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}