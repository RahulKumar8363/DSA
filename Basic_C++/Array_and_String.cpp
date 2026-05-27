#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[5];
    // cin >> arr[0] >> arr[1] >>arr[2] >> arr[3] >> arr[4];
    // arr[3]=10; // change the value of array index
    // cout<< arr[3];

    // 2D Array
    // int arr[3][5];

    // arr[1][3] = 78;
    // cout << arr[1][3];
    // 1. print 5 element of array
    /*int a[5];
    for(int i = 0; i < 5; i++) cin>> a[i];
    for(int i = 0; i < 5; i++) cout<<a[i]<<" ";*/

    //2. sum of array
    /*int arr[5], sum = 0;
    for (int i = 0; i<5; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "sum =" << sum;*/

    string s = "Rahul";
    // cout << s [2]; - access the index in string
    int len = s.size();
    s[len-1]='k';
    cout << s[len - 1];




    return 0;
} 