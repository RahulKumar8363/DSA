#include<iostream>
using namespace std;
int main(){
    //Q1. Write a program that takes an input of age 
    // and prints if you are adult or not
//     int age;
//     cin >> age;
//     if(age >=18){
//         cout << " You are in Adult.";
//     }
//     else{
//         cout << " You are not Adult";
//     }
// }

    /*
    A school has following rules for grading system:
    a. Below 25 - F
    b. 25 to 39 - E
    c. 40 to 49 - D
    d. 50 to 59 -C
    e. 60 to 79 - B
    f. 80 to 100 - A
    Ask user to enter marks and print the corresponding grade.
    */
//    int marks;
//    cin >> marks;
//    if(marks <= 25){
//     cout << "Grade F";
//    }
//    else if(marks <=39){
//     cout << "Grade E";
//    }
//    else if(marks <= 49){
//     cout << "Grade D";
//    }
//    else if(marks <=59){
//     cout << "Grade C";
//    }
//    else if(marks <=79){
//     cout << "Grade B";
//    }
//    else if(marks <= 100){
//     cout << "Grade A";
//    }
//    else{
//     cout << "Invalid Marks";
//    }

/*
Take the age from the user and then decided accordoingly.
1. age < 18,
print-> not eligible for job
2. age >= 18.
print-> Eligible for job
3. age >= 55 and age <= 57,
print-> eligible for job and retirement soon.
4. age > 57,
print-> Retriement time
*/    

    int age;
    cin >> age;

    if (age < 18) {
        cout << "Not eligible for job";
    }
    else if (age >= 18 && age < 55) {
        cout << "Eligible for job";
    }
    else if (age >= 55 && age <= 57) {
        cout << "Eligible for job and retirement soon";
    }
    else { // age > 57
        cout << "Retirement time";
    }

    return 0;
}