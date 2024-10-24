#include<iostream>
using namespace std;
 int main()
{
    // Task 1
    for (int i = 1; i < 6; i++) {
        cout << i <<endl; 
    }
    
    // Task 2
    int user_number;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> user_number;
    for (int i = 1; i <= user_number; i++) {
        sum += i;
    }
    cout << "The sum of numbers till " << user_number << " is " << sum << endl;
    
    // Task 3
    int table_choice;
    cout << "Enter the number for which you want table: ";
    cin >> table_choice;
    for (int i = 1; i < 11; i++) {
        cout << table_choice << " * " << i <<   " = " << (table_choice * i) << endl;
    }
    
    //  Task 4
    for (int i = 1; i < 21; i = i + 1) {
        if (i % 2 == 0) {
            cout << "Even: " << i << endl;
        }
        else {
            cout << "Odd : "<< i << endl;
        }
        
        // cout << i<< endl;
    }
    
    
    
    //  Task 5
    for (int i = 10; i > 0; i--) {
        cout << i << " ";
    }
    cout << endl;
    
    // Task 6
    int cube_choice_num;
    cout << "Enter number till you want cube: ";
    cin >> cube_choice_num;
    for (int i = 1; i <= cube_choice_num; i++) {
        cout << (i * i * i) << endl;
    }
    
    // Task 7
    int number_of_subject, marks;
    int total = 0;
    int average = 0;
    cout << "Enter number of subjects: ";
    cin >> number_of_subject;
    for (int i = 1; i <= number_of_subject; i ++) {
        cout << "Enter your marks out of 100: ";
        cin >> marks;
        total += marks;
    }
    average = total / number_of_subject;
    cout << "Total is: " << total << " out of " << (100 * number_of_subject) << endl;
    cout << "Average is: " << average << endl;
    if (average > 89) {
        cout << "Grade A" <<endl;}
    else if (average >74) {
        cout << "Grade B" << endl;
    }
    else if (average > 49) {
        cout << "Grade C" << endl;
    }
    else {
         cout << "Grade F" << endl;
    }
    
    
}
