// C++ program to convert
// float/double into string
#include<iostream>
using namespace std;

int main()
{int i=0,f1=0;
string str;
float num[3]{0,0,0};
cout<<"Enter : ";
cin>>str;
cout<<sizeof(str)/sizeof(string)<<endl<<str<<endl;
while(1){
    cout<<"loop"<<i+1<<" num["<<f1<<"] = "<<num[f1]<<endl;

	if(str[i]=='.')
		i++;
	if(str[i]=='+')
		f1++;
	
	if(str[i]=='=')
		break;
	if(str[i]=='\0')
		break;

    num[f1]=(str[i]-48)+(10*(num[f1]));
    i++;
}

cout<<"\n floats are : \n";
for(int j=0;j<3;j++)
  cout<<num[j]<<"\t";
	return 0;
}

