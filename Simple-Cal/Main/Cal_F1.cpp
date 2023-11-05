//Final(0)
#include<iostream>

using namespace std;
int main() {

    string inp;
    cout<<"\n\tCalculate : ";
    cin>>inp;
    //Calculation is saved in inp

    //extract nums and Operators and save them
    int n=3,i=0,f1=0,f2=0,j=0;
    int *num = new int[n]{};
    int *o = new int[n]{};
    int *begin = num,*end = num+n;
     cout<<"Size of num : "<<end-begin<<endl;
    	begin=o,end=o+n;
    cout<<"Size of o : "<<end-begin<<endl;
    while(inp[i]!='='){
                if(i>=n){
              int *num0=new int[n];
              int *o0=new int[n];
              for(int j=0;j<n;j++)
              {	num0[j]=num[j];
                o0[j]=o[j];
                }
              delete []num;
              delete []o;
              int z=n;
                n+=2;
              num=new int[n]{};
              o= new int[n]{};
              for(int j=0;j<z;j++)
              {	
                num[j]=num0[j];
                o[j]=o0[j];
                }
              delete []num0;
              delete []o0;
              // for(int j=z;j<n;j++){
              //   num[j]=0;
              // }
            }
        
        if(inp[i]=='+'){
            f1++;
            i++;
            o[f2]=1;
            cout<<"\nO"<<f2<<" "<<o[f2];
            f2++;
        }
        if(inp[i]=='-'){
            f1++;
            i++;
            o[f2]=2;
             cout<<"\nO"<<f2<<" "<<o[f2];
            f2++;
        }
        if(inp[i]=='*'){
            f1++;
            i++;
            o[f2]=3;
            cout<<"\nO"<<f2<<" "<<o[f2];
            f2++;
        }
        if(inp[i]=='%'){
            f1++;
            i++;
            o[f2]=4;
            cout<<"\nO"<<f2<<" "<<o[f2];
            f2++;
        }
    
    num[f1]=(inp[i]-48)+(10*(num[f1]));
    cout<<"\nnum"<<f1<<" "<<num[f1];
    i++;
    }
    f2--;
     cout<<"\nf1 : "<<f1<<"\tf2 : "<<f2<<"\ti : "<<i<<"\tn : "<<n<<endl;
    //Resizing num and o a/c to input
    float *num0 = new float[f1+1];
    
    for(j=0;j<=f1;j++){
    	num0[j]=num[j];}
 
     //Checking Num0 and o0 
     cout<<"Checking num0 : "<<endl;
     for(j=0;j<=f1;j++)
     	cout<<"	"<<num0[j]<<endl;
     cout<<"Checking o : "<<endl;
     for(j=0;j<=f2;j++)
     	cout<<"	"<<o[j]<<endl;
     	
     float *begn = num0,*ed = num0+f1+1;
     cout<<"Size of num0 : "<<ed-begn<<endl;
    	begin=o,end=o+f2+1;
    cout<<"Size of o : "<<end-begin<<endl;
    
    //Calculation !
    //Division
    cout<<"F1 :"<<f1<<"\tF2 :"<<f2<<endl;
    for(j=0;j<=f2;j++){
    	if(o[j]==4){
    		num0[j]=num0[j]/num0[j+1];
    	  for(int k=j;k<=f2;k++){
    	  	num0[k+1]=num0[k+2];
    	  	o[k]=o[k+1];
    	  }
    	  f2--;
    	  f1--;
    	  j--;
    	}
    }
	cout<<"AFTER DIV :\n";   
      cout<<"Checking num0 : "<<endl;
     for(j=0;j<=f1;j++)
     	cout<<"	"<<num0[j]<<endl;
     cout<<"Checking o : "<<endl;
     for(j=0;j<=f2;j++)
     	cout<<"	"<<o[j]<<endl;
   //Multiplication
     for(j=0;j<=f2;j++){
    	if(o[j]==3){
    		num0[j]=num0[j]*num0[j+1];
    	  for(int k=j;k<=f2;k++){
    	  	num0[k+1]=num0[k+2];
    	  	o[k]=o[k+1];
    	  }
    	  f2--;
    	  f1--;
    	  j--;
    	}
    }
	cout<<"AFTER MULTI :\n";   
      cout<<"Checking num0 : "<<endl;
     for(j=0;j<=f1;j++)
     	cout<<"	"<<num0[j]<<endl;
     cout<<"Checking o : "<<endl;
     for(j=0;j<=f2;j++)
     	cout<<"	"<<o[j]<<endl;
    //Substraction
     for(j=0;j<=f2;j++){
    	if(o[j]==2){
    		num0[j]=num0[j]-num0[j+1];
    	  for(int k=j;k<=f2;k++){
    	  	num0[k+1]=num0[k+2];
    	  	o[k]=o[k+1];
    	  }
    	  f2--;
    	  f1--;
    	  j--;
    	}
    }
	cout<<"AFTER SUBS :\n";   
      cout<<"Checking num0 : "<<endl;
     for(j=0;j<=f1;j++)
     	cout<<"	"<<num0[j]<<endl;
     cout<<"Checking o : "<<endl;
     for(j=0;j<=f2;j++)
     	cout<<"	"<<o[j]<<endl;
      cout<<"\nf1 : "<<f1<<"\tf2 : "<<f2;
   //Addition
 //  int f=0;
   for(j=0;j<=f2;j++){
    	if(o[j]==1){
    		num0[j]=num0[j]+num0[j+1];
    	  for(int k=j;k<=f2;k++){
    	  	num0[k+1]=num0[k+2];
    	  	o[k]=o[k+1];
    	  }
    	  f1--;
    	  f2--;
    	  j--;
    	}
    	
    }
   
	cout<<"AFTER ADD :\n";   
      cout<<"Checking num0 : "<<endl;
     for(j=0;j<=f1;j++)
     	cout<<"	"<<num0[j]<<endl;
     cout<<"Checking o : "<<endl;
     for(j=0;j<=f2;j++)
     	cout<<"	"<<o[j]<<endl;
   cout<<"Result :"<<num0[0];

    return 0;
}