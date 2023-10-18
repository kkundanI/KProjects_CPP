#include<iostream>
#include<cmath>
using namespace std;

int main() {
   string n="37.37*32.98=";
    int i=0;
    int num=0,num0=0,f=0,f1=0,c=0;
    float Num[2];
   while(n[i]!='='){
     if(n[i]=='*'){
            Num[f1]= num + (num0/pow(10,c));
             cout<<"Num["<<f1<<"] : "<<Num[f1]<<endl;
            f=0;
            c=0;
            num=0,num0=0;
            i++;
            f1++;  
        }
   
        if(n[i]=='.'){
            f++;
            cout<<"decimal caught : "<<endl;
            i++;
        }
    if(f==0){ 
        num=(n[i]-48)+(10*(num));
          cout<<"num "<<f1<<" : "<<num<<endl;
          i++;
        
   }
    if(f==1){ 
    num0=(n[i]-48)+(10*(num0));
    cout<<"num0 "<<f1<<" : "<<num0<<endl;   
    c++;
    i++;
    }
    if(n[i]=='='){
          Num[f1]= num + (num0/pow(10,c));
             cout<<"Num["<<f1<<"] : "<<Num[f1]<<endl;        
    }
   }
cout<<"Num[0] = "<<Num[0]<<" , Num[1] = "<<Num[1]<<endl;
    return 0;
}