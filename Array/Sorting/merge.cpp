#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[] ,int low,int high ,int mid){
    vector<int>temp;
    int i=low , j=mid+1;

    while(i <= mid && j <= high){
         if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }

     }
    while(i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= high)
    {
        temp.push_back(arr[j]);
        j++;
    }
    // Temp array ko original array mein copy karo
    for (int k = low; k <= high; k++)
    {
        arr[k] = temp[k - low];
    }
    
    
}
void mergesort(int arr[] ,int low ,int high){
    if(low>=high){
        return;
    }
    int mid=low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);

    merge(arr,low,high,mid);

}
int main(){
    int arr[]={5,2,4,6,1,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0 ,size-1);
    for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
}