#include<iostream>
using namespace std;
void zero(int arr[] ,int size){
    int i , j=0;
    for(i=0;i<size;i++){
      if(arr[i]!=0){
          swap(arr[i],arr[j]);
          j++;
      }
      
      
    }
}
int main(){
    int arr[]={1,0,2,0,3 ,0 ,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    zero(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
}