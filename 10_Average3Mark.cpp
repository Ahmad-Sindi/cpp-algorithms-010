// Algorithm Challenge
// 10 - Average of 3 Marks
#include <iostream>
using namespace std;

int main()
{
    int mark1, mark2, mark3;

    // Ask the user to enter 3 marks
    cout << "Please enter 3 marks separated by spaces: ";
    cin >> mark1 >> mark2 >> mark3;

    // Correct average calculation: use parentheses to ensure proper order of operations
    float average = (mark1 + mark2 + mark3) / 3.0; // use 3.0 to get float division

    // Display the calculation process and result
    cout << "\nCalculation: (" << mark1 << " + " << mark2 << " + " << mark3 << ") / 3 = " << average << endl;
    cout << "Average Mark: " << average << endl;

    return 0;
}
