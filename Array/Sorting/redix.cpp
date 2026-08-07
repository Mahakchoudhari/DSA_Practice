#include<iostream>
#include <vector>
using namespace std;
void  countingSort(int arr[]  ,int size , int place){
    vector<int> count(10, 0); //digit 0-9
    vector<int> output(size);

    // Step 1: Count digits
    for(int i=0 ;i<size;i++){
        int digit = (arr[i] / place) % 10;
        count[digit]++;

     }
      // Step 2: Prefix sum
    for(int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i-1];
    }  

    
    // Step 3: Put elements in output array
    for(int i = size-1; i >= 0; i--)
    {
        int digit = (arr[i] / place) % 10;

        output[count[digit]-1] = arr[i];

        count[digit]--;
    }


    // Step 4: Copy output to original array
    for(int i = 0; i < size; i++)
    {
        arr[i] = output[i];
    }

}
void redixSort(int arr[] ,int size){
    int max = arr[0];
    for(int i=1 ;i<size;i++){
        if(arr[i]>max){
              max=arr[i];
        }
    }
     // Apply counting sort on every digit
    for(int place = 1; max/place > 0; place *= 10)
    {
        countingSort(arr, size, place);
    }

}
int main(){
    int arr[] = {4,2,2,803,3,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    redixSort(arr , size);

    for(int x : arr)
        cout << x << " ";
}