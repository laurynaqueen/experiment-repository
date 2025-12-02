#include <iostream>
using namespace std;

int main()
{
    int oneDArray[5]; // This is an array to store 5 elements

    // Declare and initialize a 2D array using an initialization list
    int twoDArray[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // twoDArray[0][0] = 1
    // twoDArray[1][3] = 8

    // Use for-each loops to print elements of the 2D array
    for (auto& row : twoDArray)   // loops through each row
    {
        for (auto& element : row) // loops through each element in the row
        {
            cout << element << ",";
        }
    }

    return 0;
}