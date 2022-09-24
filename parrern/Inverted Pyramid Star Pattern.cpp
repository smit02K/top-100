#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  int n=4;
  for (int i=n;i>0; i--) {
     for (int j=0;j<n-i; j++){
    cout<<"  ";
     }
   

     for (int j=0;j < 2*i-1; j++){
      cout<<"^ ";
     }
     cout<<endl;
  }
}
