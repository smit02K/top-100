#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
int main() {
 int n=5;//int m=4;
 for(int i=1;i<=n;i++){
  for(int j=0;j<i;j++){
     cout<<"* ";
  }
  cout<<endl;
 }

 for(int i=4;i>0;i--){
  for(int j=0;j<i;j++){
     cout<<"* ";
  }
  cout<<endl;
 }

 return 0;
}
