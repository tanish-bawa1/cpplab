#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     int n,num,count,sum,power,a;
     cout<<"Enter a number upto which you want to find armstrong numbers:";
     cin>>n;
     cout<<"Armstrong series upto "<<n<<" are\n";
     for(int i;i<n;i++)
     {
        num=i;
        count=0;
        while(num)
        {
           num=num/10;
           count++;
         }
        num=i;
        sum=0;
        while(num)
        {
           a=num%10;
           num=num/10;
           power=pow(a,count);
           sum=sum+power;
        }
        if(sum==i)
         cout<<i<<"\n";
      }
      return 0;
 }
