#include <iostream>
using namespace std;
#include <string>
int main()
{
    string a;
    int nn=0;
    cout << "Enter the string : ";
    getline(cin, a);
    int i = 0, f = 0;
    for(int i = 0; a[i] != '\0'; i++) {
        if (a[i] == ' ')
         {  nn= a[i];
         cout<<"Space in int : "<<nn;  
          f++;
         }
    }
    cout << "\n Space count : " << f;
    return 0;
}