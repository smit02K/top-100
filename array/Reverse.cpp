#include <iostream>
#include <iterator>
#include <string.h>

using namespace std;

// To execute C++, please define "int main()"

int main() {

int a[] = {1,2,3,4,5,6,7};
int n=sizeof(a)/sizeof(a[0]);
int b[n];

for(int i=0;i<n;i++){
 b[i]=a[i];
 cout<<b[i]<<endl;
}

int t=0;
for(int i=0;i<n;i++){
  t = a[i];
  a[i] = b[n-i-1];
  b[n-i-1] = t;
  cout<<a[i];
}


return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//    int arr[] = {10, 20, 30, 40, 50};
//    int n = sizeof(arr)/sizeof(arr[0]);

//    reverse(arr, arr+n);

//    cout<<arr+n;

//    for(int i=0; i<n; i++)
//       cout<<arr[i]<<" ";
// }
