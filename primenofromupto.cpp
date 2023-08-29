#include <iostream>
using namespace std;
int main()
{
     int n,m;
     cout<<"Enter a number from which you want to find prime numbers:";
     cin>>m;
     cout<<"Enter a number upto which you want to find prime numbers:";
     cin>>n;
     cout<<"Prime numbers from "<<m<<" upto "<<n<<" are\n";
     for(int i=m;i<n;i++)
     {
       for(int j=2;j<=i;j++)
       {
        if(i==j)
         cout<<i<<"\n";
        else if(i%j==0)
         break;
       }
     }
       return 0;
}
   
