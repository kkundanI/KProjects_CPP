#include<iostream>
using namespace std;
int main() 
{ int a[5]{1,2,3,4,5};
char b[4]{'+','+','+','+'};

 cout<<"Before cal : \n";
for(int i=0;i<5;i++){
	cout<<"a["<<i<<"] = "<<a[i]<<"\t"<<"b["<<i<<"] = "<<b[i]<<endl;
}
 for(int i=0;i<5;i++){
 	if(b[i]=='+'){
 	 a[i]=a[i]+a[i+1];
 	 for(int j=i;j<4;j++){
 	 	a[j+1]=a[j+2];
 	 	b[j]=b[j+1];}
 	 	i--;}
 	 	
 	 cout<<"\nloop "<<i+1<<" :\n";
 	 for( i=0;i<5;i++){
	cout<<"a["<<i<<"] = "<<a[i]<<"\t"<<"b["<<i<<"] = "<<b[i]<<endl;
}
cout<<endl;
 }
 cout<<"After cal : \n";
for(int i=0;i<5;i++){
	cout<<"a["<<i<<"] = "<<a[i]<<"\t"<<"b["<<i<<"] = "<<b[i]<<endl;
}
return 0;
}