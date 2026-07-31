#include<iostream>
using namespace std;
void l_rot(int k ,int st ,int end ,int arr[]){
    while(k!=0){
        int temp=arr[0];
        for(int i=st;i<end;i++){
            arr[i]=arr[i+1];
        }
        arr[end]=temp;
        k--;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    l_rot(k,0,size-1,arr);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}