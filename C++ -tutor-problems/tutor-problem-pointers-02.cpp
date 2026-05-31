#include <iostream>
using namespace std;

void pointer_test_array() {
    int nums [10];

    for(int i = 0; i < 10; i++) 
        nums[i] = i;                      // nums[i] = i+10;

    int*p;
    p = nums; // notice the missing &

    cout << "Value of p          : " << p << endl;
    cout << "Value of *p         : " << *p << endl;

    //return;


    




    cout << "Inc p" << endl;
    p++; // incrementing the pointer

    cout << "Value of p  : " << p << endl;
    cout << "Value of *p : " << *p << endl;

    //return;




    cout << "Entering loop after resetting p -----" << endl;

    p = &nums[0]; // or nums    -> same as nums
    for(int i = 0; i < 10; i++) {
        cout << "Value of p  : " << p <<  "   ";
        cout << "Value of *p : " << *p << "   ";

        cout << "Inc p" << endl;
        p++;  
    }
}





int main() {
    int x;
    x = 2;
    
    // pointer_test();
    pointer_test_array();
}