// simple program to demonstrate a greeting message

#include<iostream>

using namespace std;    
int main() 
{ 
   
    string fullName, alsoknownas, firstName, lastName, favouritemeal, favouritemovie, whyamIinthisclass;
     cout << "Enter your fullName\n";
      getline (cin, fullName);
        cout<< " also known as \n";
    getline (cin, alsoknownas);
     cout<< " Enter your firstName\n";
      getline(cin ,firstName);
     cout<< " Enter your lastName\n";
     getline(cin, lastName);
     cout<< " Enter your favouritemeal\n"; 
        getline(cin, favouritemeal); 
     cout<< " Enter your favouritemovie\n";
       getline( cin, favouritemovie);
     cout<< " WhyamIinthisclass?\n";
      getline(cin, whyamIinthisclass);
     
     cout << firstName << "firstName" << endl;
    cout << lastName << "lastName" << endl;
    cout << "Full Name: " << fullName << endl;  
    cout<< " also known as " << alsoknownas << endl;
   cout << "Your favourite meal is " << favouritemeal << endl;
    cout << "Your favourite movie is " << favouritemovie << endl;
    cout << "whyamIinthisclass?" << whyamIinthisclass << endl;

      // Prepare profile info
       // Prepare profile info
    string line1 = "First Name: " + firstName;
    string line2 = "Last Name: " + lastName;
    string line3 = "Full Name: " + fullName;
    string line4 = "Favourite Meal: " + favouritemeal;
    string line5 = "Favourite Movie: " + favouritemovie;
    string line6 = "whyamIinthisclass: " + whyamIinthisclass;

     // Find the longest line to size the box
    int maxLength = line1.length();
    string lines[] = {line1, line2, line3, line4, line5, line6};

    for (string line : lines) {
        if (line.length() > maxLength)
            maxLength = line.length();
    }

    // Print the box top border
    cout << "\n+" << string(maxLength + 2, '=') << "+\n";

    // Print title
    string title = fullName + " Profile";
    int padding = (maxLength - title.length()) / 2;
    cout << "| " << string(padding, ' ') << title
         << string(maxLength - title.length() - padding, ' ') << " |\n";

    // Separator line
    cout << "+" << string(maxLength + 2, '=') << "+\n";

    // Print profile details inside the box
    for (string line : lines) {
        cout << "| " << line
             << string(maxLength - line.length(), ' ') << " |\n";
    }

    // Print the bottom border
    cout << "+" << string(maxLength + 2, '=') << "+\n";

   
    return 0;
}