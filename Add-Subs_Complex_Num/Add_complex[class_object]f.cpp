#include<iostream>
using namespace std;

void hr(int, string);
class second; //2nd class declaration
class first //1st class
{ public: 
   	 string a;
  
   friend int cal(first , second ); 
};
class second //2nd class
{
	public:
	 	string b;
	
	  friend int cal(first,second);
};

//Calculate function
int cal(first frst,second secnd, int AddSub)
 { cout<<"Enter any two complex no.s :\n ";
    
   cin>>frst.a>>secnd.b;
   string a=frst.a,b=secnd.b;
 	 int fi=0,fr=0;
 	 int sr=0,si=0;
	   
     //1's real
	 int i=0;
 
 while(a[i]!='+')
 { if(a[i]=='\0')
     break;
   fr=(a[i]-48)+(10*(fr));
  i++;
 }
	 int ck=i,f=0;
 
/* cout<<endl<<"1's real no. "<<fr;*/
// cout<<endl<<i;
 if(a[i+1]=='i')//ib
  {
   ck=i+2;
   f=0;
   }
 if(a[i+1]!='i') //bi
   {ck++;
    f=1;}
   //cout<<endl<<ck;
 
 //1's imaginary
 while(a[ck]!='\0')
 { 
 
   if(f==1 && a[ck]=='i')
    break;
  
   fi=(a[ck]-48)+(10*fi);
   ck++;
 }
 /*cout<<endl<<"1's imaginary : "<<fi;*/
  
  
  //two .. 
 //2's real 
 
 i=0;
 while(b[i]!='+')
 {if(b[i]=='\0')
     break;
   
   sr=(b[i]-48)+(10*sr);
  i++;
 }
 ck=i,f=0;
 
 /*cout<<endl<<"2's real no. "<<sr;*/
 // cout<<endl<<i;
 if(b[i+1]=='i')//ib
  {
   ck=i+2;
   f=0;
   }
 if(b[i+1]!='i') //bi
   {ck++;
    f=1;}
   // cout<<endl<<ck;
 
 //2's imaginary
 while(b[ck]!='\0')
 { 
 
   if(f==1 && b[ck]=='i')
    break;
 
   si=(b[ck]-48)+(10*(si));
   ck++;
 }
system("cls");
/* cout<<endl<<"2's imaginary : "<<si;*/
 cout<<endl<<"      ("<<a<<")\n"<<"     +("<<b<<")\n      ";
 	hr(10, "dash");
  if(AddSub == 0)
    cout<<"\nresult : "<<fr+sr<<"+i"<<fi+si<<endl;
  else
    cout<<"\nresult : "<<fr-sr<<"+i"<<fi-si<<endl;
  
hr(25,"dash");
cout<<endl;
cout<<"\t\tThanks!\n";
hr(25,"dash");
 cout<<endl; 
hr(25,"dash");
  return 0;
 }
     

int main() 
{
 first frst;
 second secnd;
  int AddSub;
  cout<<" For  Addition : 0 , Substraction : 1  \n\t Enter : ";
  cin>>AddSub;
 cal(frst,secnd,AddSub);    
return 0;
}

void hr(int n ,string nature)
{ if(nature=="dot")
{
 for(int i=0;i<n;i++)
   cout<<"*";
   cout<<endl;}
 if(nature=="dash"){
  for(int i=0;i<n;i++)
   cout<<"-";
 // cout<<endl;
 }
}