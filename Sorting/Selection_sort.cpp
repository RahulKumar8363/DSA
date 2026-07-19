// Selection Sort with n elements 
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex=j;
            }
        }
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    selection_sort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

// With User Input arr[]={2,5,6,1,7,4,8}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,5,6,1,7,4,8};
    int n=7;

    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i=0; i<n; i++){
    cout << arr[i] <<" ";
    }
}

// Space Complexcity = o(1) constant
// Time Compexcity = o(n^2)
// Best case = o(n^2)
// Worst case = o(n^2)
// Use Case = best for small size

