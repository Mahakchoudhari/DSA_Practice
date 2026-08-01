#include<iostream>
using namespace std;
void sort(int arr[],int size){
    int l=0;
    int r=size-1;
    while(l<r){
        while(arr[l]==0){
            l++;
        }
        while(arr[r]==1){
            r--;
        }
        if(l<r){
            swap(arr[l],arr[r]);
        }
    }
}

int main(){
    int arr[]={1,0,1,0,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}