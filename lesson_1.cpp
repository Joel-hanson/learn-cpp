// In this file it contains.
//     - Comments.
//     - Introduction to variables.
//     - Variable assignment and initialization.
// By the way this is a comment in c++.

#include <iostream>
using namespace std;
int main() {
    int  x;
    // This is a variable declaration with definition x.
    // This will be instantiated when program runned.
    // The data type or type is Integer(Int).
    cout << x << endl; //endl is a new line.
    int y;
    y = 5;
    // The above is the variable assignment, This does a copy assignment.
    cout << y;
    cout << "\n"; // \n is also a new line.
    // so for copy and direct initialization.
    int width = 5; // This is called a copy initialization.
    int height(5); // This is the direct initialization.
    cout << "width: " << width << endl << "height: " << height;
    // Initializing multiple variables.
    int a, b; // This is multiple variable initialization.
    int c, d(5); // The multiple variable initialization can have the direct or copy initialization;
    int e = 5, f = 6; // copy initialization
    int g( 7 ), h( 8 ); // direct initialization
    cout << endl << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl << g << endl << h << endl;
}