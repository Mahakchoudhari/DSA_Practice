#include<iostream>
using namespace std;
int BinarySearch(int arr[] , int n ,int target){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
              return mid;
        }
        else if(arr[mid]<target){
              low=mid+1;
        }
        else{
            high=mid-1;
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
    int ans = BinarySearch(arr,size,k);
    if(ans == -1){
        cout << "Element not present";
    }
    else{
        cout << "Index of element " << k << ": " << ans;
    }
    
}