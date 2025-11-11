// simple program to demonstrate a greeting message

#include<iostream>

using namespace std;    
int main() 
{ 
   
    string fullName, alsoknownas, firstName, lastName, favoritemeal, favoritemovie, whyamIinthisclass;
     cout << "Enter your fullName\n";
      cin >> fullName;
        cout<< " also known as \n";
        cin >> alsoknownas;
     cout<< " Enter your firstName\n";
      cin >> firstName;
     cout<< " Enter your lastName\n";
     cin>> lastName;
     cout<< " Enter your favoritemeal\n"; 
        cin>> favoritemeal; 
     cout<< " Enter your favoritemovie\n";
        cin>> favoritemovie;
     cout<< " WhyamIinthisclass?\n";
      cin>> whyamIinthisclass;
     
     cout << firstName << "firstName" << endl;
    cout << lastName << "lastName" << endl;
    cout << "Full Name: " << fullName << endl;  
    cout<< " also known as " << alsoknownas << endl;
   cout << "Your favorite meal is " << favoritemeal << endl;
    cout << "Your favorite movie is " << favoritemovie << endl;
    cout << "whyamIinthisclass?" << whyamIinthisclass << endl;
   
    return 0;
}