#include <iostream>

int main() {
    // Defining Variables
    int x;
    double variable;
    int one, two;  // Avoid it

    // Variable assignment
    //  = operator (Assignment Operator)
    x = 10;

    // Initialization
    int copy = 5;   // Copy initialization
    int direct(6);  // Direct initialization

    // Brace Initialization
    /* Brace initialization has an added benefit:
     * it disallows “narrowing conversions”.
     * This means that if you try to brace initialize a variable
     * using a value that the variable can not safely hold,
     * the compiler will produce an error
     * For Example:
     * int width { 4.5 } this produces following error
     * error: a number with a fractional value can't fit into an int
     */
    int width{7};      // Direct brace initialiaztion
    int height = {5};  // Copy brace initialization
    int depth{};       // Value initialization and Zero Initialization

    // Initializing multiple variables
    int a = 5, b = 6;  // Copy initialization
    int c(7), d(8);    // Direct initialization
    int e{9}, f{10};   // Brace initialization

    /*
     * int a, b = 5; -> wrong (a is not initialized!)
     * int a = 5, b = 5; -> correct
     */

    /* Unused initialized variables and [[maybe_unused]]
     * [[maybe_unused]] attribute:
     * This attribute tells the compiler to expect that the
     * variable may not be used, so it will not generate unused
     * variable warnings.
     */
    [[maybe_unused]] int unused{5};

    return 0;
}