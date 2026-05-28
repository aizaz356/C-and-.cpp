#include <iostream>
using namespace std;



// array_test()

void array_test() {


    int a[5];   // fixed size, continguous memory locations!
                // a poor man's list

    //a[0] = 24;   // 0-based index


    cout << "Before assignment --- " << endl;
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";   // notice the garbage values
    }

    cout << endl;
    //return;



    for (int i = 0; i < 5; i++) {
        a[i] = i*i;
    }

    

    // let's output again:
    cout << "After assignment --- " << endl;
    for (int i = 0; i < 5; i++) {            // for (int i = 0; i < 15; i++) {
        cout << a[i] << " ";   // notice the garbage values
    }

    cout << endl;
}

// array_test_2d()

void array_test_2d() {

    int a[2][3];   // 2 rows, 3 columns            // 0 0 0
                                                   // 0 2 0           -> a[1][1]

    cout << "Before assignment --- " << endl;
    for (int i = 0; i < 2; i++) {
        // i = 1
        for (int j = 0; j < 3; j++) {
            // j = 2
            cout << a[i][j] << " ";   // a[i][j] -> a[1][2]  
        }

        cout << endl;
    }

    //return;

    int val = 1;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = val;
            val += 1;
        }
    }


    cout << "After assignment --- " << endl;
    for (int i = 0; i < 2; i++) {         // here not use {}  bcz in compound statement, except function definition, we can use {} to group multiple statements together, but in this case, we only have one statement (the inner loop) , so we use the for loop without {}. If we had more than one statement, we would need to use {} to group them together. 
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";   // notice the garbage values
        }

        cout << endl;
    }
}



//struct_test()

void struct_test() {
    // a struct is a kind of class, a template

    struct student {
        int rollno;
        float marks;
    };

    student s1;   // an object of type student
    student s2;



        s1.rollno = 1;
        s1.marks = 19.9;
        s2.rollno = 2;
        s2.marks = 2.0;

        cout << "Student s1 has "  << s1.marks << " marks "  << endl;
        cout << "Student s2 has "  << s2.marks << " marks "  << endl;

        student s[5];
        s[0].marks = 45;
}
    
        
int main() {

    //array_test();

    //array_test_2d();

    //struct_test();

    return 0;

}






