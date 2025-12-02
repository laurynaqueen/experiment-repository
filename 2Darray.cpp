#include <iostream>
using namespace std;

int main()
{
    

    // Declare and initialize a 2D array using an initialization list
    int twoDArray[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    //twoDArray[columns][rows]
    // twoDArray[0][0] = 1
    // twoDArray[1][3] = 8
    // twoDArray[2][2] = 11


    // Use a loop to print elements of the 2D array on the screen
    for (int r = 0; r < 3; r++) // r = the index of the sub-array/rows/lists in the 2D
    {
        for (int c = 0; c < 4; c++) // c = the index of each element in the sub-array/row/list
        {
            // To output all numbers
            cout << twoDArray[r][c] << ",";
        }
    }
cout << "\b"; // backspace to erase the last comma
    return 0;
}