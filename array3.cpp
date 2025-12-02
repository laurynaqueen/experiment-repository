#include<iostream>
using namespace std;
int main() {
    int ten[]={10,20,30,40,50,60,70,80,90,100};
    int sum=0, product=1;
    for (int i=0; i<10; i++){
        sum += ten[i]; // sum=sum+ten[i];
        product *= ten[i]; // product=product*ten[i];
    }
    cout<<"The sum of elements in the array is: "<< sum << endl;
    cout<<"The product of elements in the array is: "<< product << endl;    
    cout<<" The mean of elements in the array is: "<< sum / (sizeof (ten)/4) << endl;
    return 0;
}