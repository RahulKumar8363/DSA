// #include <bits/stdc++.h>
// using namespace std;
// int main()
//  {
    /*
    Take the day no and print the corresponding day
    for 1 print monday
    for 2 print tuesday and so on for 7 print sunday.
    */
//     int day;
//     cin >> day;
//     switch (day)
//     {
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;
//     default:
//         cout<<"Invalid";
//     }
//     return 0;
// }


    /*
    Write a C++ program that simulates a simple banking system with the following features:

Check Balance
Deposit Money
Withdraw Money
Exit
    */

#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 10000.0, amount;
 
    do {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful!\n";
                } else {
                    cout << "Invalid amount!\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!\n";
                } else if (amount <= 0) {
                    cout << "Invalid amount!\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful!\n";
                }
                break;

            case 4:
                cout << "Thank you for using banking system!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}    

 