#include <iostream>
using namespace std;    
int main() {
    int nums[6];// Declaration of an array to store 5 values
     //prompt user for input and store them into specific positions
    cout << "Enter five values:"<< endl;
    cin >> nums[0]>> nums[1] >> nums[2] >> nums[3] >> nums[4];
    //Display values from an array
    cout<< nums[0]<<",";
    cout<< nums[1]<<",";
    cout << nums[2]<<",";
    cout << nums[3]<<",";
    cout << nums[4]<<",";
    cout<< nums[5]<<","; 
    int sum=0;
    
   //sum=nums[0]+nums[1]+nums[2]+nums[3]+nums[4]+nums[5];
   cout<<"Enter six whole numbers to be stored by this program: "<<endl;
   for (int i=0; i<5; i++){
       cin>> nums[i];
       sum +=nums[i]; // sum=sum+nums[i];
    }
       cout<< "You entered the following values: "<<endl;
       for (int i=0; i<5; i++)
       {
           cout<< nums[i]<<",";
       }
           cout<<"\b" << "\n";
    cout << "The sum of elements=" << sum <<endl;
    cout<<"The array size="<< sizeof(nums);

}   
    
    
