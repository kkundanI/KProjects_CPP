//name+price+multiple
#include <iostream>
#include <conio.h>
using namespace std;
void br();//declaring hr function
class item {
	public: //Access specifier
		double prc, dsc, qnt;//attributes
		double getdat(int i,int k);//method declaration
};
int main() // Begining of main function
{   int k, i;
	double s = 0;
	cout<<"Enter number of distinct items : ";    cin >> k;
   	clrscr();
	 item no[k];//declaring object""
	for(i = 0; i < k ; i++)
   	s = s + no[i].getdat(i,k);
	cout << "Total price for all "<<i<<" items is " << s << endl;
    	br();
}
//(Get details of the item) function definition

double item::getdat(int i,int k) {
    	i++;string n[k];
	cout << "Details for " << i <<"th item : \n";
		br();//calling hr function
	cout<<"Enter name of the item ";
	cin>>n[i];
	cout << "Enter price of item : ";
	cin >> prc;
	cout << "Enter quantity of item : ";
	cin >> qnt;
  	prc = prc * qnt;
	cout << "Enter discount on item : "; 
	cin >> dsc;
	  dsc = prc*dsc/100;
  	double t = prc - dsc;
	cout << "Total price of " <<n[i]<<" is "<< t << endl;
	br();
	return t;
}
//defining hr function
void br() {
	for(int i=0; i<32; i++)
		cout << "-";
	cout << endl;
}