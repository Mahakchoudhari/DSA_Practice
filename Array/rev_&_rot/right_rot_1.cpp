#include<iostream>
using namespace std;
void R_rot(int st , int end ,int arr[]){
    int temp=arr[end];
    while(st<end){
        arr[end]=arr[end-1];
        end--;
    }
    arr[st]=temp;
 
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    R_rot(0,size-1,arr);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}