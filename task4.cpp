#include<iostream>
using namespace std;
 int main()
{
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
    return 0;
}
