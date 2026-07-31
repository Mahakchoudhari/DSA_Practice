#include<iostream>
using namespace std;
void l_rot(int st , int end ,int arr[]){
    int temp=arr[0];
    while(st<end){
        arr[st]=arr[st+1];
        st++;
    }
    arr[end]=temp;
 
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    l_rot(0,size-1,arr);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}