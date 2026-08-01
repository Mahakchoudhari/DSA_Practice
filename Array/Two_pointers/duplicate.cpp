#include<iostream>
using namespace std;
int duplicate(int arr[],int size){
    int i =0 ;
    int j;
    for(j=1;j<size;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int arr[]={1,1,2,2,3,4,4,5,6,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int j= duplicate(arr,size);
    for(int i=0;i<j;i++){
        cout<<arr[i]<<" ";
    }
    
}