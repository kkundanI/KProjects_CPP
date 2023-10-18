#include<iostream>
using namespace std;

int main() {
string a="7.7";
int i=0;
while(a[i]!='\0'){
    if(a[i]=='.'){
        cout<<"caught !"<<i+1<<endl;
    }
    i++;
}
    return 0;
}