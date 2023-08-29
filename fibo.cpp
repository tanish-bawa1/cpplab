#include <iostream>
using namespace std;
int main()
{
     int n,k,i=0,j=1;
     cout<<"Enter a number upto which you want to find fibonnacci numbers:";
     cin>>n;
     cout<<"Fibonacci series upto "<<n<<" are\n";
     for(;j<n;)
     {
      cout<<i<<"\n";
      k=j;
      j=i+j;
      i=k;
     }
     return 0;
 }
