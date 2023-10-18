#include<iostream>
using namespace std;

int main(){
    int *n=new int(9);
    float *m= new float;
    *m=*n;
    cout<<*m;
      int *nm=new int[3]{1,2,3};
    float *mn= new float[3];
    for(int i=0;i<3;i++){
    mn[i]=nm[i];
    }
  
    cout<<endl<<mn[0]<<endl<<mn[1]<<endl<<mn[2];
    return 0;
}