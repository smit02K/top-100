
#include <bits/stdc++.h>

using namespace std;

 void freq(int a[],int x,int n){
    int count =0;
    for (int  i = 0; i < n; i++) {
    if(a[i]==x){count++;}
  }
  cout<<x<<"is occuring "<< count<<"time"<<endl;

 }

int main() {
  int n;
  int x,i;
  int count=0;


  cout << "Enter n : " << endl;
  cin>>n;
  int a[n];
  cout << "Enter finding no.: " << endl;
  cin>>x;
    


  for (i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (i = 0; i < n; i++) {
     x=a[i];
     freq(a,x,n) ;
  }


  for ( i = 0; i < n; i++) {
    if(a[i]==x){count++;}
  }
  cout<<count;
  return 0;
}
