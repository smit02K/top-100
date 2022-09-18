#include <iostream>
#include <iterator>
using namespace std;

// To execute C++, please define "int main()"
int main() {
int a[]={-1,7,-7,8,5};
int n,m;
n=m=a[0];

int l = sizeof(a)/sizeof(a[0]);

for(int i=0;i<l;i++){
   (a[i]<n)?n=a[i]:n;
   (a[i]>m)?m=a[i]:m;
 }
 
//  for(int i=0;i<l;i++){
//    (a[i]>m)?m=a[i]:m;
//  }
 cout<<n<<endl;
 cout<<m;
}
