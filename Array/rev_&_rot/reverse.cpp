#include<iostream>
using namespace std;
void rev(int st , int end ,int arr[]){
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
 
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    rev(0,size-1,arr);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}