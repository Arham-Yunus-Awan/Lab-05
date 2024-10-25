#include<iostream>
using namespace std;
 int main()
{
    // Task 3
    int table_choice;
    cout << "Enter the number for which you want table: ";
    cin >> table_choice;
    for (int i = 1; i < 11; i++) {
        cout << table_choice << " * " << i <<   " = " << (table_choice * i) << endl;
    }
    return 0;
}
