#include <iostream>
#include <cstring>

using namespace std;
char A[10002]="-12011";
char B[10002]="12000";
int result[10002]={0};
int len;
bool sign;


void swap(char&t1,char&t2){
    char temp=t1;
    t1=t2;
    t2=temp;
}

void add(){

    int len1=strlen(A);
    int len2=strlen(B);
    int i,j;

    for(i=0,j=0;i<len1&&j<len2;++i,++j){
        result[i]=(int)((A[i]-'0')+(B[j]-'0'));
    }


    if(i!=len1) {
        while (i!=len1) {

            result[i] = (int)(A[i] - '0');
            ++i;
        }
        len=len1;
    }else if(j!=len2) {
        while (j!=len2) {
            result[j] = (int)(B[j] - '0');
            ++j;
        }
        len=len2;
    }else{
        len=i;
    }



    for(i=0;i<len;++i){
        result[i+1]+=result[i]/10;
        result[i]%=10;
    }

    if(result[i]!=0){
        ++len;
    }
}


void sub(){
    int i,j;
    int len1=strlen(A);
    int len2=strlen(B);

    for(i=0,j=0;i<len1&&j<len2;++i,++j){
        result[i]=(int)((A[i]-'0')-(B[j]-'0'));
        if(result[i]<0){
            --result[i+1];
            result[i]+=10;
        }
    }


    if(i!=len1){
        while(i!=len1){
            if(result[i]<0){
                --result[i+1];
                result[i]+=10;
            }else{
                result[i]=A[i]-'0';
            }
            ++i;
        }
        len=len1;
    }else{
        len=i;
    }

    i=len-1;
    while(i>=0&&result[i]==0){
        --len;
        --i;
    }
}

void print(){
    int i;
    if(len<=0){
        cout<<0;
        return;
    }

    for(i=len-1;i>=0;--i){
        cout<<result[i];
    }
}

void reverse(int b=0){
    int i,j;
    int len1;
    int len2;
    switch (b){
       case 0:
            len1=strlen(A);
            for(i=0,j=len1-1;i<j;++i,--j){
                swap(A[i],A[j]);
            }
           break;
       case 1:
           len2=strlen(B);
            for(i=0,j=len2-1;i<j;++i,--j){
                swap(B[i],B[j]);
            }
            break;
       default:
           len1=strlen(A);
            for(i=0,j=len1-1;i<j;++i,--j){
                swap(A[i],A[j]);
            }
            len2=strlen(B);
            for(i=0,j=len2-1;i<j;++i,--j){
                swap(B[i],B[j]);
            }
   }
}

bool cmp(int t){
    int i,j;
    int len1,len2;
    len1=strlen(A);
    len2=strlen(B);

    if(t==1){//A<0
        if(len1-1>len2){
            return true;
        }else if(len1-1<len2){
            return false;
        }

        for(i=1,j=0;i<len1&&j<len2;++i,++j){
            if(A[i]>B[j]){
                return true;
            }else if(A[i]<B[j]){
                return false;
            }
        }
        return false;
    }else{//B<0
        if(len1>len2-1){
            return true;
        }else if(len1<len2-1){
            return false;
        }
        for(i=0,j=1;i<len1&&j<len2;++i,++j){
            if(A[i]>B[j]){
                return true;
            }else if(A[i]<B[j]){
                return false;
            }
        }
        return true;
    }
}


void init()
{
    int i,j;
    int len1=strlen(A);
    int len2=strlen(B);

    if(A[0]!='-'&&B[0]!='-'){
        reverse(3);
        sign=false;
        add();
        return;
    }else if(A[0]=='-'&&B[0]=='-'){
        reverse(3);
        sign=true;
        A[len1-1]='\0';
        B[len2-1]='\0';
        add();
    }
    else if(A[0]=='-'&&B[0]!='-'){
        if(cmp(1)){
            sign=true;
            reverse(3);
            A[len1-1]='\0';
        }else{
            sign=false;
            reverse(3);
            A[len1-1]='\0';
            --len1;
            int maxNum=max(len1,len2);
            for(i=0;i<maxNum;++i){
                swap(A[i],B[i]);
            }
        }
        sub();
    }else{

        if(cmp(0)){
            sign= false;
            reverse(3);
            B[strlen(B)-1]='\0';
        }else{
            sign=true;
            reverse(3);
            B[len2-1]='\0';
            --len2;
            int maxNum=max(len1,len2);
            for(i=0;i<maxNum;++i){
                swap(A[i],B[i]);
            }
        }
        sub();
    }
}

int main(){
    ios::sync_with_stdio(false);
//    cin>>A>>B;
    init();
    if(sign){
        cout<<"-";
    }
    print();
    return 0;
}