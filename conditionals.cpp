#include<iostream>
using namespace std;

int out(int x){
    cout << "   ->   called with value: " << x << endl;
    return x;
}

// if_test()

void if_test(){
    int x = 29;

    if(x < 25){
        cout << "x is less than 25" << endl;
    } else {
        cout << "x is NOT less than 25" << endl;
    }

    

    //return;


    // booleans 
    int v = 0;                  // 0 is 'false', all other values are 'true' in C++

    if(v)
        cout << "v is true!" << endl;
    else
        cout << "v is false" << endl;


    // 0 is 'false', all other values are 'true' in C++
    //return;


    // boolean operators
    
    cout << "Checking and: " << (true && true) << endl;      // python and 
    cout << "Checking or: " << (false || false) << endl;      // python or
    cout << "Checking not: " << (!true) << endl;             // python not

    //return;

    // short circulating
    // cout << "Checking short circulating ... " << endl;

    int final_val = out(1) && out(1);   // && is the boolean operator so we make operands is also boolean(true -> 1, false -> 0)  
    //int final_val = 1 && 1;         // out(1) is 1, so we can replace it with 1, and 1 && 1 is 1
    //int final_val = out(1) && out(0);   // int final_val = out(1) && out(0);   // out(0) is 0, so we can replace it with 0, and 1 && 0 is 0
    //int final_val = out(0) && out(1);   // int final_val = out(0) && out(1);   // out(0) is 0, so we can replace it with 0, and 0 && 1 is 0   , so this is also called short circulating, because we don't need to evaluate the second operand (out(1)) since the first operand (out(0)) is already false, so the final value will be false regardless of the second operand, so we can skip evaluating the second operand and directly return false.
    //int final_val = out(1) || out(0);   // int final_val = out(1) || out(0);   // out(1) is 1, so we can replace it with 1, and 1 || 0 is 1   , so this is also called short circulating, because we don't need to evaluate the second operand (out(0)) since the first operand (out(1)) is already true, so we can replace it with 1, and 1 || 0 is 1, so we can skip evaluating the second operand and directly return true.

    cout << "final value: " << final_val << endl;
    
    
    //return;



    // ternary operator
    // ?:    is a ternary operator that takes three operands
    // ?:    is one operator  so we have three operands so.   A ? B : C   is the syntax of the ternary operator, where A is the condition, B is the value if the condition is true, and C is the value if the condition is false. If A is true, then the expression evaluates to B, otherwise it evaluates to C.
    int t = (3 > 2) ?  7  :  3;  
    //int t = (1 > 2) ?  7  :  3;
    cout << "t = " << t << endl;
    
    

}

// while_test()

void while_test(){
    int i = 0;
    while(i < 5){
        cout << i << endl;
        i++;            // (almost) the same as: i += 1;
                        // which is the same as: i = i + 1;
    }
}

// for_test()

void for_test(){
    for(int i = 0    ;      i < 5      ;         i++){
        cout << i << endl;
    }
}



int main(){

    //if_test();

    //while_test();

    for_test();

    //return 0;

}



