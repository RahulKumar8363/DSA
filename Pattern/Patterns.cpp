
// ****
// ****
// ****
// ****
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     print1(n);
// }

 
// 2nd pattern
// *
// **
// ***
// ****
// *****
// #include<bits/stdc++.h>
// using namespace std;
// void print2(int n){
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=i; j++){
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

// #include<bits/stdc++.h>
// using namespace std;
// void print3(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int t;
//     for(int i=0; i<t; i++){
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
// #include<bits/stdc++.h>
// using namespace std;
// void print4(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int t;
//     for(int i=0; i<t; i++){
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
// #include<bits/stdc++.h>
// using namespace std;

// void print5(int n) {
//     for(int i=1; i<=n; i++) {

//         for(int j=1; j<=n-i; j++){
//             cout << " ";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int t;
//     cin >> t;
//     for(int i=0; i<t; i++){
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

// void print5(int n) {
//     for(int i=1; i<=n; i++) {

//         for(int j=1; j<=i-1; j++){
//             cout << " ";
//         }
//         for(int j=1; j<=2*n-(2*i-1); j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int t;
//     cin >> t;
//     for(int i=0; i<t; i++){
//         int n;
//         cin >> n;
//         print5(n);
//     }
// }

// pattern 7
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

// #include<bits/stdc++.h>
// using namespace std;

// void print7(int n){

//     //Upper half

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout << " ";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Lower half
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i-1; j++){
//             cout << " ";
//         }
//         for(int j=1; j<=2*n-(2*i-1); j++){
//             cout << "*";
//         }
//         cout << endl;
//     }


// }

// int main(){
//     int t;
//     cin >> t;
//     for(int i=0; i<t; i++){
//         int n;
//         cin >> n;
//         print7(n);
//     }
// }

// Pattern 8
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


#include<bits/stdc++.h>
using namespace std;

void print8(int n){

    // Upper half
    for(int i=1; i<=n; i++){

        // Left stars
        for(int j=1; j<=n-i+1; j++)
            cout << "*";

        // Spaces
        for(int j=1; j<=2*(i-1); j++)
            cout << " ";

        // Right stars
        for(int j=1; j<=n-i+1; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for(int i=n; i>=1; i--){

        // Left stars
        for(int j=1; j<=n-i+1; j++)
            cout << "*";

        // Spaces
        for(int j=1; j<=2*(i-1); j++)
            cout << " ";

        // Right stars
        for(int j=1; j<=n-i+1; j++)
            cout << "*";

        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        print8(n);
    }
}

 
