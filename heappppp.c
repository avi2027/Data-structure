#include<stdio.h>
#define s(x) scanf("%d",&x)
#define p(x) printf("%d ",x)
int arr[100];
int x;
void Init(){
    x=0;
    arr[0]=-__INT_MAX__;
}
void insert(int val){
    x++;
    arr[x]=val;
    int index=x;
    while(arr[index/2]>val){
        arr[index]=arr[index/2];
        index/=2;
    }
    arr[index]=val;
}
void Delete_min(){
    x--;
    int index=x;
    int val=arr[index];
    while(index>0){
        if(arr[index/2]>val){
            arr[index]=arr[index/2];
            index/=2;
            }
            else
            break;
            }
            arr[index]=val;
}

int main(){
    int y;
    s(y);
    Init();
    for(int i=0;i<y;i++){
        int m;
        s(m);
        insert(m);
    }
    for(int i=0;i<y;i++){
        printf("%d ", Delete_min());
    }
}