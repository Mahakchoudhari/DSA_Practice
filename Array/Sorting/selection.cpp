#include<iostream>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int m_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[m_idx]){
                m_idx=j;
            }
            }
            swap(arr[i],arr[m_idx]);
        }
    }

int main(){
   int arr[]={4,1,2,5,3};
   int n=sizeof(arr)/sizeof(arr[0]);
   selection(arr,n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}