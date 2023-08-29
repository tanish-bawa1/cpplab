#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter a number upto which you want to find prime numbers:";
     cin>>n;
     cout<<"Prime numbers upto "<<n<<" are\n";
     for(int i=2;i<n;i++)
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
       
