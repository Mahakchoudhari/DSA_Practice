#include<iostream>
using  namespace std;
int first_occ(int arr[] ,int size , int target){
    int low=0;
    int high =size-1;
    int ans =-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
              ans=mid;
              high=mid-1;
        }
        else if(arr[mid]<target){
              low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return ans;

}
int main(){
    int arr[]={1,2,2,2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Element:";
    cin>>k;
    int ans = first_occ(arr,size,k);
    if(ans == -1){
        cout << "Element not present";
    }
    else{
        cout << "First occurance Index of element " << k << ": " << ans;
    }
    
}