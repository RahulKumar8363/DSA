#include<iostream>
using namespace std;
    void PrintName(int i, int n){
        if(i > n)
        return;
        cout << "Rahul" << endl;
        PrintName(i+1,n);
    }
    int main(){
        int n;
        cin >> n;
        PrintName(1,n);
    }
