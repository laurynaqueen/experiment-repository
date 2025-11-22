#include <iostream>
#include <string>
using namespace std;    
int main()
{
    int age;
    string interest;
     cout << "Enter age of the child: ";
     cin >> age;

     if (age>= 4 && age <= 10){
        cout << " Enter the childs interest";
        cin >> interest;
        if( interest ==" soccer")
        cout << "admitted to school";
        cout<< " Assigned to Soccer playgroup."<<endl;
         }
     if (interest == "art"){
        cout <<" Admitted to school.";
        cout<< " Assigned to Art playgroup."<<endl;
    }
      
        else { 

        
            cout << " Admitted to school"<< endl;
        
            cout << " Assigned to other playgroup"<< endl;
            return 0;
        }
         
    
          {
            cout<< " Declined! NOT admitted to school."<< endl; 

        }
        return 0;
    }