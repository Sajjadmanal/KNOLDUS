/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
    int numT;
  long int n,m=0,rem,temp;
  cout<<"Enter number of test cases \n";
  cin>>numT;
  
  while(numT>0)
  {
     
  cin>>n;
  if(n>0 && n<=9){
cout<<"Palindrome is 11 \n";
}
else{
    

  while(n!=m){
    n=n+1;
    temp=n;
    m=0;
    while(temp!=0){
      rem=temp%10;
      m=rem+m*10;
      temp=temp/10;
    }
  }
  
 cout<<"Palindrome is "<<m<<"\n";
}
 numT--;
 
  }
  return 0;
}
