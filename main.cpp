#include <iostream>

using namespace std;

int main()
{
   int ar[]={2,3,5,10};
   int w=15;
   int n=sizeof(ar)/sizeof(int);
   int table[n+1][w+1];
   for(int i=0;i<n;i++)
    table[i][0]=1;
   for(int i=0;i<=w;i++)
   {
     if(i%ar[0]==0)
        table[0][i]=1;
     else
        table[0][i]=0;
   }
   for(int i=1;i<=n;i++)
   {
       for(int j=0;j<=w;j++)
       {
           if(ar[i]>j)
            table[i][j]=table[i-1][j];
           else
            table[i][j]=table[i-1][j]+table[i][j-ar[i]];
       }
   }
   cout<< "the maximum coin chosen way is: ";
   cout<<table[n-1][w]<<endl;
    return 0;
}
