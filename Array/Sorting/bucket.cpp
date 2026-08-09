#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void bucketSort(float arr[] , int n){
     vector<float> bucket[n];

    // Elements ko buckets mein daalo
    for(int i=0 ; i<n ;i++){
        int index=arr[i] * n;
        bucket[index].push_back(arr[i]);
     }

     // Har bucket ko sort karo
    for (int i = 0; i < n; i++)
    {
        sort(bucket[i].begin(), bucket[i].end());
    }

     // Buckets ko combine karo
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (float x : bucket[i])
        {
            arr[index++] = x;
        }
    }
}
int main(){
    float arr[] = {
        0.42, 0.32, 0.45,
        0.25, 0.52, 0.23, 0.43
    };

    int n = 7;

    bucketSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}