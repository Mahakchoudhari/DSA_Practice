#include<iostream>
#include <vector>
using namespace std;
void  countingSort(int arr[]  ,int size){
    int max = arr[0];
    for(int i=1 ;i<size;i++){
        if(arr[i]>max){
              max=arr[i];
        }
    }
    
    vector<int> count(max+1 , 0);
    for(int i=0 ;i<size;i++){
         count[arr[i]]++;

     }
       

    int index = 0;

    for (int i = 0; i <= max; i++)
    {
        while (count[i] > 0)
        {
            arr[index++] = i;
            count[i]--;
        }
    }


}
int main(){
    int arr[] = {4,2,2,8,3,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    countingSort(arr , size);

    for(int x : arr)
        cout << x << " ";
}