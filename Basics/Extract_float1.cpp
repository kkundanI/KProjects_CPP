
#include <iostream>
#include <sstream>

using namespace std;

int main() {
  string s = "2.5+3.2=";
float n[2];
int i=0;
  // Create a string stream object.
  stringstream ss(s);

  // Extract floats from the string stream.
  float value;
  while (ss >> value) {
    // Print the float value.
    cout << value << endl;
    n[i]=value;
    i++;
  }
cout<<n[0]<<" "<<n[1];
  return 0;
}
