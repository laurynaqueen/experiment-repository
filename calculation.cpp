#include <iostream>
#include <cmath> //For mathematical functions

using namespace std;
/*Declarations*/
int main() {
     double num1, num2, result,result2;
     string operation;
     bool keeprunning = true;
     /*Control Loop*/
     while(keeprunning==true){
        cout<< "Enter first number: ";
        cin>> num1;
        cout<< "Enter second number: ";
        cin>> num2;
        cout<< "Enter Operations(+,-,*,/,^,sqrt,power,log,modulus): ";
        cin>> operation;
        /*Control Flow*/
        if(operation=="sqrt" || operation=="log" )
        //sqrt and log functions only needs first number
        {
             if (operation=="sqrt" || operation == "log") {
            if (num1 < 0)
                cout << "Error: Square root of a negative number is not real." << endl;
            else
                cout << "Square root: " << sqrt(num1) << endl;
        } 
        else if (operation == "log") {
            if (num1 <= 0)
                cout << "Error: Logarithm undefined for zero or negative numbers." << endl;
            else
                cout << "Logarithm: " << log(num1) << endl;
        }
    } 
        else{
            if(operation=="+"){
                result = num1 + num2;
                cout<<num1<<"+"<<num2<<"="<< result << endl;
            } else if(operation=="-"){
                result = num1 - num2;
                cout<<num1<<"-"<<num2<<"="<< result << endl;;
            } else if(operation=="*"){
                result = num1 * num2;
                cout<<num1<<"*"<<num2<<"="<< result << endl;
            } else if(operation=="/"){
                if(num2 != 0){
                    result = num1 / num2;
                    cout<<num1<<"/"<<num2<<"="<< result << endl;
                } else {
                    cout<< "Error: Division by zero!" << endl;/*Catch divide by 0 error*/
                }
            } else if(operation=="^"){
                result = pow(num1, num2);
                cout<<num1<<"^"<<num2<<"="<< result << endl;
            } else if(operation=="power"){
                cout << "Power: " << pow(num1, num2) << endl;
            }
            else if(operation=="modulus"){
                cout << "Modulus: " << fmod(num1, num2) << endl;
            }
                
    
        
            else {
                cout<< "Invalid operation!" << endl;
            }
        }
        /*End of Control Flow*/
        /*Exit option*/
        cout << "Do you want to perform another calculation? (y/n): ";
        char cont;
        cin >> cont;
        if (cont == 'n' || cont == 'N') {
            keeprunning = false;
        }
     }
    return 0;
}