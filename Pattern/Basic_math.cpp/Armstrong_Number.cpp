
// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
// Examples
// Example 1:
// Input:N = 153
// Output:True
// Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153
                                        
// Example 2:
// Input:N = 371                
// Output: True
// Explanation: 3^3+7^3+1^3 = 27 + 343 + 1 = 371

// Simpe solution
/*#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int sum=0;
int  dup = n;
while (n > 0){
    int ld = n % 10;
    sum=sum + (ld*ld*ld);
    n = n / 10;
}
if(sum == dup){
    cout <<"Armstronge Number" << endl;
} else {
    cout << "Not Armstronge Number" << endl;
}
}*/

#include <bits/stdc++.h>
using namespace std;

class ArmstrongChecker {
public:
    static int power(int base, int exp) {
        int result = 1;
        for(int i = 0; i < exp; i++) {
            result *= base;
        }
        return result;
    }

    static bool isArmstrong(int num) {
        int k = to_string(num).length();
        int sum = 0;
        int n = num;

        while (n > 0) {
            int ld = n % 10;
            sum += power(ld, k);
            n /= 10;
        }

        return sum == num;
    }
};

int main() {
    int number = 153;

    if (ArmstrongChecker::isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}