#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string interest;

    // Input age
    cout << "Enter child's age: ";
    cin >> age;
    

    // Check age validity
     if (age >= 4 && age <= 10)
     { cout << "Enter child's interest: ";
        getline(cin, interest);
     
        
    if (age <4 || age >10) {
        cout<< " Age input is invalid." << endl;
        cin.ignore();
        }
     
        
     
      

        // Input interest
        cout << "Enter child's interest: ";
        getline(cin, interest);

         if (age <4 && age >10)
            cout << " Age input is invalid." << endl;
}
        
     int opt;
    cout<<"\n1.Soccer\n2.Art\n3.Music\n4.Athletics\n5.Toys"<<endl<<endl;
    cout<<"Please enter child's interest ( e.g. 1, 2, 3, etc ... ): ";
    cin >> opt;
    switch (opt) {
            case 1:
                cout << "Assigned to: Soccer Play Group" << endl;
                break;
            case 2:
                cout << "Assigned to: Art Play Group" << endl;
                break;
            case 3:
                cout << "Assigned to: Music Play Group" << endl;
                break;
            case 4:
                cout << "Assigned to: Athletics Play Group" << endl;
                break;
            case 5:
                cout << "Assigned to: Toys Play Group" << endl;
                break;
            default:
                cout << "Assigned to: Other Groups" << endl;
                break;} 
                
                
        

    
    return 0;
}

