#include<iostream>
using namespace std;        
int main() 
{ 
    //variable declaration
    int num1 = 16, num2 = 4;

    //arithmetic operators
    cout << "Addition: " << (num1 + num2) << endl; 
    cout << "Subtraction: " << (num1 - num2) << endl;
    cout << "Multiplication: " << (num1 * num2) << endl;
    cout << "Division: " << (num1 / num2) << endl;      
    cout << "Modulus: " << (num1 % num2) << endl;
    cout << "Increment: " << (++num1) << endl; //pre-increment
    cout << "increment: " << (num1++) << endl; //post-increment
    cout << "Decrement: " << (--num2) << endl; //pre-decrement
    cout << "decrement: " << (num2--) << endl; //post-decrement 
    cout << "combined increment and assignment: num1 += 2>; " << (num1 += 2) << endl;
    cout << "combined decrement and assignment: num2 -= 2>; " << (num2 -= 2) << endl;   
    cout << "combined multiplication and assignment: num1 *= 2>; " << (num1 *= 2) << endl;
    cout << "combined division and assignment: num2 /= 2>; " << (num2 /= 2) << endl;
    cout << "combined modulus and assignment: num1 %= 2>; " << (num1 %= 2) << endl; 
    
    // comparison operators
    cout << "3>2"<< " = "<< (3 > 2) << endl;
    cout << "3<2" <<" = "<< (3 < 2) << endl;
    cout << "4>=3" <<" = " <<(4 >= 3) << endl;
    cout << "4<=3" <<" = " <<(4 <= 3) << endl;
    cout << "3==3" <<" = " <<(3 == 3) << endl;
    cout << "!(4>=3) "<<" = " <<!(4>=3)<< endl;

    //boolean operators ( AND, OR, ||, )
    cout << "true && true= " << ((3>2) && (4>=2)) << endl;
    cout << "true || false= " << ((3>2) || (4<=2)) << endl;
    cout << "(true && false)= " << ((3<2) && (4>=2)) << endl;

    //boolean OR
    cout << "true && true= " << ((3>2) && (4>=2)) << endl;
    cout << "true || false= " << ((3>2) || (4<=2)) << endl;
    cout << "(true && false)= " << ((3<2) && (4>=2)) << endl;

    return 0;




}
