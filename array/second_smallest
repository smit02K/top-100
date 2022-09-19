#include <iostream>
#include <iterator>
using namespace std;

// To execute C++, please define "int main()"

int smallest(int a[],int n){
  int smx=a[0];
  for(int i=0;i<n;i++){
       if(smx>a[i]){
       smx=a[i];
       }
      }


     //smx first samllest


      int sm=a[0];
      for(int i=0;i<n;i++){
       if(a[i]!=smx && sm>a[i]){
       sm=a[i];
       }
      }
      return sm;
  
}

int main() {
int a[]={1,-2,3,4,5,6,7,-8,9};
int n=sizeof(a)/sizeof(a[0]);
//cout<<n;

int sm =smallest(a,n);
cout<<sm;
return 0;
}
