//Final(0)
#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main() {
    HANDLE console_color; 
	console_color = GetStdHandle( 
		STD_OUTPUT_HANDLE); 

    string inp; 
    	SetConsoleTextAttribute( 
			console_color, 4);
  
     cout<<"Enter the calculation ending with equal(=) symbol !"<<endl;
      	SetConsoleTextAttribute( 
			console_color, 7);
  
    cout<<"\n\t| Calculate : ";
       	SetConsoleTextAttribute( 
			console_color, 6);
    getline(cin,inp);
    //Calculation is saved in inp
 	SetConsoleTextAttribute( 
			console_color, 7);
    //extract nums and Operators and save them
    int n=3,i=0,f1=0,f2=0,j=0;
    int num=0,num0=0,f=0,c=0;
    float *Num = new float[n]{};
    int *o = new int[n]{};
    
   
    while(inp[i]!='='  ){
               //DMA increasing Num 
                if(i>=n){
              float *Num0=new float[n];
              int *o0=new int[n];
              for(int j=0;j<n;j++)
              {	Num0[j]=Num[j];
                o0[j]=o[j];
                }
              delete []Num;
              delete []o;
              int z=n;
                n+=2;
              Num=new float[n]{};
              o= new int[n]{};
              for(int j=0;j<z;j++)
              {	
                Num[j]=Num0[j];
                o[j]=o0[j];
                }
              delete []Num0;
              delete []o0;
            }

        if(inp[i]==' '){
          if(inp[i+1]=='=')
             Num[f1]= num + (num0/pow(10,c));
          i++;
          continue;
        }

        if(inp[i]=='+'){
            Num[f1]= num + (num0/pow(10,c));
            f=0;
            c=0;
            num=0,num0=0;
            f1++;
            i++;
            o[f2]=1;
            f2++;
        }

        if(inp[i]=='-'){
            Num[f1]= num + (num0/pow(10,c));
            f=0;
            c=0;
            num=0,num0=0;
            f1++;
            i++;
            o[f2]=2;
            f2++;
        }

        if(inp[i]=='*'){
            Num[f1]= num + (num0/pow(10,c));
            f=0;
            c=0;
            num=0,num0=0;
            f1++;
            i++;
            o[f2]=3;
            f2++;
        }

        if(inp[i]=='%'){
            Num[f1]= num + (num0/pow(10,c));
            f=0;
            c=0;
            num=0,num0=0;
            f1++;
            i++;
            o[f2]=4;
            f2++;
        }

          if(inp[i]=='.'){
            f++;
            i++;
        }

 if(inp[i]==' '){
          i++;
          if(inp[i]=='=')
           { Num[f1]= num + (num0/pow(10,c));
          }
           continue;
        }

   //Number before decimal 
    if(f==0){ 
        num=(inp[i]-48)+(10*(num));
          i++;    
   } 

   //Number after decimal 
    if(f==1){ 
    num0=(inp[i]-48)+(10*(num0));
    c++;
    i++;
    }

//Last float
 if(inp[i]=='='){
          Num[f1]= num + (num0/pow(10,c));
          break;
          
}

}
 f2--;
    
    
    //Calculation !
    //Division
    for(j=0;j<=f2;j++){
    	if(o[j]==4){
    		Num[j]=Num[j]/Num[j+1];
    	  for(int k=j;k<=f2;k++){
    	  	Num[k+1]=Num[k+2];
    	  	o[k]=o[k+1];
    	  }
    	  f2--;
    	  f1--;
    	  j--;
    	}
    }
	
   //Multiplication
     for(j=0;j<=f2;j++){
    	if(o[j]==3){
    		Num[j]=Num[j]*Num[j+1];
    	  for(int k=j;k<=f2;k++){
    	  	Num[k+1]=Num[k+2];
    	  	o[k]=o[k+1];
    	  }
    	  f2--;
    	  f1--;
    	  j--;
    	}
    }
	
    //Substraction
     for(j=0;j<=f2;j++){
    	if(o[j]==2){
    		Num[j]=Num[j]-Num[j+1];
    	  for(int k=j;k<=f2;k++){
    	  	Num[k+1]=Num[k+2];
    	  	o[k]=o[k+1];
    	  }
    	  f2--;
    	  f1--;
    	  j--;
    	}
    }
	
   //Addition
 //  int f=0;
   for(j=0;j<=f2;j++){
    	if(o[j]==1){
    		Num[j]=Num[j]+Num[j+1];
    	  for(int k=j;k<=f2;k++){
    	  	Num[k+1]=Num[k+2];
    	  	o[k]=o[k+1];
    	  }
    	  f1--;
    	  f2--;
    	  j--;
    	}
    	
    }

  cout<<"\n\tResult : ";
  	SetConsoleTextAttribute( 
			console_color, 6);
  cout<<inp +" "<<Num[0];
 	SetConsoleTextAttribute( 
			console_color, 7);
 cout<<endl;
    return 0;
}