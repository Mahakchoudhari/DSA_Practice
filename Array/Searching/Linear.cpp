#include<iostream>
using namespace std;
int linear(int arr[] ,int size , int k){
    for(int i=0 ;i<size;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;

}
int main(){
    int arr[]={1,2,5,7,9,13};
    int size= sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Element:";
    cin>>k;
    int ans = linear(arr,size,k);
    if(ans == -1){
        cout << "Element not present";
    }
    else{
        cout << "Index of element " << k << ": " << ans;
    }

}