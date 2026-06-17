// for n elements
/*#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j;

        for(j = i - 1; j >= 0; j--){
            if(arr[j] > temp){
                arr[j + 1] = arr[j]; // shift
            }
            else{
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    insertion_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}*/

// For User Example
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j;

        for(j = i - 1; j >= 0; j--){
            if(arr[j] > temp){
                arr[j + 1] = arr[j]; // shift
            }
            else{
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main(){
    int arr[] = {5, 3, 1, 4, 2}; // hardcoded array
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}