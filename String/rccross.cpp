#include <iostream>
#include <iterator>
#include <string.h>

using namespace std;

// To execute C++, please define "int main()"

int main() {
 int r=4;
 int c=3;
 for(int i=1;i<=r;i++){

  for(int j=1;j<=i;j++){
   cout<<' ';
  }
  for(int j=1;j<=c;j++){
   cout<<'*';
  }

  cout<<endl;
 }

return 0;
}
