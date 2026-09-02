#include<iostream>
using namespace std;

void printname(int i, int n){
    if(i > n)
    return;
    cout << "Rahul" << endl;
    printname(i+1,n);

}

int main(){
    float n;
    cin >> n;
    printname(1,n);
}
