#include <iostream>
#include <stdio.h>
nt main(){
 int  n=4;
 for(int i=1;i<=n;i++){
 
for(int j=1;j<=n-i;j++){

cout<<" ";

}
for(int j=1;j<=2*i-1;j++){
  cout<<"*";
}

cout<<endl;

 }
}
