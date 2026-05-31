#include<iostream>
using namespace std;

// variables_test()

int variables_test(int p) {
   int x;     // local scope variable

    x = 2147483647;
    cout << "int: " << x << endl;
    
    

    //x = 2147483648;      // can't do that!
    cout << "int: " << x << endl;
    
    long y;
    y = 2147483648;     
    cout << "long: " << y << endl;
    
    y = 9223372036854775807;  // This is the upper limit of long
    cout <<"long upper limit: " << y << endl;

    //y = 9223372036854775808;    // Can't do this!
    
    float f;


    f = 3.40282e+38;       // 3.40282e+38 = 3.4 x 10^38
    cout << "float: " << f << endl;


    f = 3.40282e+39;       // 3.40282e+39 = 3.4 x 10^39
    cout << "float: " << f << endl;         // great result


    double g;
    g = 3.40282e+39;    // 3.40282e+39 = 3.4 x 10^39
    cout << "double: " << g << endl;

    return 0;
}

// char_test()

int char_test() {
    char x = 'A';    // 65 -- ASCII values .. Unicode

    cout << "Value of variable = " << x << endl;
    cout << "Converted to int = " << (int) x << endl;
    cout << "Adding 1 = " << (char) (x + 1) << endl;
    
    //return 0;
}



int main() {

    int v;  // C/C++ are statically typed languages
    v = 2;

    //variables_test(v);

    //char_test();

    return 0;
}

/*
Extra notes:

#include <limits.h>
#include <float.h>

printf("INT_MAX     :   %d\n", INT_MAX);
printf("INT_MIN     :   %d\n", INT_MIN);
printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);


FLT_MAX      :   3.40282e+38
FLT_MIN      :   1.17549e-38
-FLT_MAX      :   3.40282e+38
-FLT_MIN      :   1.17549e-38
DBL_MAX      :   1.79769e+308
DBL_MIN      :   2.22507e-308
-DBL_MAX       :   1.79769e+308


*/