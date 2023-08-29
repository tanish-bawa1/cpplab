#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter a number upto which you want to find odd numbers:";
     cin>>n;
     cout<<"Odd numbers upto "<<n<<" are\n";
     for(int i=0;i<n;i++)
     {
       if(i%2!=0)
        cout<<i<<"\n";
      }
     return 0;
}
