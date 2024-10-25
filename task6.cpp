#include<iostream>
using namespace std;
 int main()
{
    // Task 6
    int cube_choice_num;
    cout << "Enter number till you want cube: ";
    cin >> cube_choice_num;
    for (int i = 1; i <= cube_choice_num; i++) {
        cout << (i * i * i) << endl;
    }
    return 0;
}
