// For n number
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        bool swapped = false;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    bubble_sort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

// Already Example arr[]={ 2,4,1,5,8,9}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={2,4,1,5,8,9};

//     int n=6;

//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout << arr[i] <<" "; 
//     }

// }