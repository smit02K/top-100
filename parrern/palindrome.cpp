#include <iostream>
#include <iterator>
#include <string.h>


using namespace std;
int main(){
char str[100];
cin>>str;
int c=0;
int len=strlen(str);
//int count=0;
for(int i=0;i<len/2;i++){
   if(str[i]!=str[len-i-1]){
   c=1;
   break;}
}
if(c==0)
std::cout << "palindrome" << std::endl;
else
cout<<"no"<<endl;
}
