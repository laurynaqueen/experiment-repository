#include <iostream>
using namespace std;    
int main() {
    int nums[5];// Declaration of an array to store 5 values
     //prompt user for input and store them into specific positions
    cout << "Enter five values:"<< endl;
    cin >> nums[0]>> nums[1] >> nums[2] >> nums[3] >> nums[4];
    //Display values from an array
    cout<< nums[0]<<",";
    cout<< nums[1]<<",";
    cout << nums[2]<<",";
    cout << nums[3]<<",";
    cout << nums[4]<<",";
return 0;
}