//Ask the user food they like until the user types N
#include <iostream>
using namespace std;
int main() 
{    
string food;
char resp;
cout<<"Please enter a food you like ( type N to stop ):";
 getline ( cin, food);
cout<<"Do you wish to continue (Y/N)? ";
cin>>resp;
while (resp!='N'){
cout<<"Please enter a food you like: ";
getline (cin,food);
cout<<"Do you wish to continue (Y/N)? ";
cin>>resp;}
while ( resp!='Y'){
    cout<<"Thank you for responding: ";
    break;
}
return 0;
}   




