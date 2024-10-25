#include<iostream>
using namespace std;
 int main()
{
    // Task 2
    int user_number;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> user_number;
    for (int i = 1; i <= user_number; i++) {
        sum += i;
    }
    cout << "The sum of numbers till " << user_number << " is " << sum << endl;
    return 0;
}
