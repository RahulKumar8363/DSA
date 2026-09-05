#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // precompute

    unordered_map<int ,int> umpp;
    for(int i =0; i<n; i++){
        umpp[arr[i]]++;
    }

    //iterate the unorder map

    for(auto it:umpp)
{
    cout << it.first << "->" << it.second << endl;
}


    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;

        // fetch part
        cout << umpp[number] << endl;
    }

    return 0;
}