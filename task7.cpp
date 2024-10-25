#include<iostream>
using namespace std;
 int main()
{    
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
    return 0;
}
