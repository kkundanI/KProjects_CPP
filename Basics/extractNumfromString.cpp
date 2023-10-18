#include<iostream>
using namespace std;

int main() {
    string inp;
    int num[5]={0,0,0,0,0},o[4]={0,0,0,0};
    int i=0,f1=0,f2=0;
    cout<<"Enter calculation : ";
    cin>>inp;
      while(inp[i]!='='){
       
        if(inp[i]=='+'){
            f1++;
            i++;
            o[f2]=1;
            cout<<"\tO"<<f2<<" "<<o[f2];
            f2++;
        } 
        if(inp[i]=='-'){
            f1++;
            i++;
            o[f2]=2;
            cout<<"\tO"<<f2<<" "<<o[f2];
            f2++;
        }
        if(inp[i]=='*'){
            f1++;
            i++;
            o[f2]=3;
            cout<<"\tO"<<f2<<" "<<o[f2];
            f2++;
        }
        if(inp[i]=='%'){
            f1++;
            i++;
            o[f2]=4;
            cout<<"\tO"<<f2<<" "<<o[f2];
            f2++;
        }
    num[f1]=(inp[i]-48)+(10*(num[f1]));
   cout<<"\nnum"<<f1<<" "<<num[f1];
    i++;
    }
   cout<<"Range of num : "<<sizeof(num)/sizeof(num[0])<<endl;
   return 0;
}