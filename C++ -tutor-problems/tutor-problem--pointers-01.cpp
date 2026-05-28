#include <iostream>
using namespace std;

// pointer_test():

void pointer_test() {
    int x = 25;
    cout << "Value of x itself             : " << x << endl;
    cout<< "Value of address of x          : " << &x << endl;
    
    //return;



    int *p; // an integer pointer
    p = &x; // address-of operator


    
    cout << "Value at address(pointed to by p)  : " << *p << endl;
    cout << "Value of p itself                  : " <<  p << endl; 


    // This -- *p is called pointer dereferencing
    // Let's see this in the tutor ! Yay!
}




int main() {
  int x;
  x = 2;
  pointer_test();
  return 0;
}