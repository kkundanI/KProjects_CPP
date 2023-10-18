#include <iostream>
#include <sstream>

using namespace std;

int main() {
  string s = "2.5+3.2%5.7";
  int n=2;
  float* num = new float[n]{};
  int i=0;
  // Create a string stream object.
  stringstream ss(s);

  // Extract floats from the string stream.
  float value;
  while (ss >> value) {
      if(i>=n){
        float* num0= new float[n]{};
        for (int j = 0; j < n; j++) {
            num0[j] = num[j];
          }
        delete []num;
        n+=2;
        num= new float[n];
        for (int j = 0; j < n; j++) {
          num[j] = num0[j];
          }

      }
    // Print the float value.
    cout << value << endl;
    num[i]=value;
    i++;
  }
cout<<num[0]<<" "<<num[1]<<" "<<num[2];
  return 0;
}
