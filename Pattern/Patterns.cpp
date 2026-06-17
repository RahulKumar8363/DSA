//  # include<bits/stdc++.h>

// ****
// ****
// ****
// ****

// using namespace std;
// void print1(int n){
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=n; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
//     int main(){
//         int n;
//         cin >> n;
//         print1(n);
// }
// 2nd pattern
// *
// **
// ***
// ****
// *****
// # include<bits/stdc++.h>
// using namespace std;

// void print2(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     print2(n);
// }

// 3rd pattern
// 1
// 12
// 123
// 1234
// 12345
// # include<bits/stdc++.h>
// using namespace std;
// void print3(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
            
//             cout << j << " " ;
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int t;
//     for(int i = 0;i<t;i++){
//         int n;
//         cin >> n;
//         print3(n);
//     }
// }

// 4th pattern
// 12345
// 1234
// 123
// 12
//1
// # include<bits/stdc++.h>
// using namespace std;
// void print4(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j <= n - i + 1;j++){
            
//             cout << j ;
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int t;
//     for(int i = 0;i<t;i++){
//         int n;
//         cin >> n;
//         print4(n);
//     }
// }

// pattern 5
//     *
//    ***
//   *****
//  *******
// *********
// # include<bits/stdc++.h>
// using namespace std;
// void print5(int n){
//     for(int i=1;i<=n;i++){

//         //space
//         for(int j=1;j <=n-i;j++){
            
//             cout << " " ;
//         }
//         for(int j=1; j<=2*i-1;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int t;
//     cin >> t;
//     for(int i = 0;i<t;i++){
//         int n;
//         cin >> n;
//         print5(n);
//     }
// }

// pattern 6
// *********
//  *******
//   *****
//    ***
//     *

// #include<bits/stdc++.h>
// using namespace std;

// void print6(int n){
//     for(int i = 1; i <= n; i++){

//         // spaces
//         for(int j = 1; j <= i - 1; j++){
//             cout << " ";
//         }

//         // stars
//         for(int j = 1; j <= 2*n - (2*i - 1); j++){
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

// int main(){
//     int t;
//     cin >> t;

//     for(int i = 0; i < t; i++){
//         int n;
//         cin >> n;
//         print6(n);
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;

// int largestElement(vector<int> &arr, int n){
//     int largest = arr[0];

//     for(int i = 0; i < n; i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     }
//     return largest;
// }

// int main(){
//     vector<int> arr = {3, 7, 2, 9, 5};
//     int n = arr.size();

//     cout << largestElement(arr, n);
// }

// #include<bits/stdc++.h>
// using namespace std;

// int largestElement(vector<int> &nums){
//     int largest = nums[0];

//     for(int i = 0; i < nums.size(); i++){
//         if(nums[i] > largest){
//             largest = nums[i];
//         }
//     }

//     return largest;
// }

// int main(){
//     vector<int> nums = {-4, -3, 0, 1, -8};

//     int ans = largestElement(nums);

//     cout << "Largest element is: " << ans;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &nums){
    int largest = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < nums.size(); i++){

        if(nums[i] > largest){
            second = largest;        // पुराना largest → second
            largest = nums[i];       // नया largest
        }
        else if(nums[i] > second && nums[i] != largest){
            second = nums[i];
        }
    }

    if(second == INT_MIN) return -1;

    return second;
}

int main(){
    vector<int> nums = {8, 8, 7, 6, 5};

    cout << "Second largest: " << secondLargest(nums);
}