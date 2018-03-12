#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  int t;
  cin>>t;
  while(t--)
 {
     ll n,m;
     cin>>n>>m;
     ll siz=n*m;
     ll a[siz];
     ll csum=0,gsum=0;
     for(int i=0;i<siz;i++)
        cin>>a[i];
          sort(a,a+siz,greater<int>());



     for(int i=0;i<siz;i++)
     {
         if(i%2==0)
         {
             csum+=a[i];

         }
         else
         {

             gsum+=a[i];
         }

     }
     if(csum>gsum) cout<<"Cyborg"<<endl;
     else if(csum<gsum) cout<<"Geno"<<endl;
     else cout<<"Draw"<<endl;

 }
return 0;
}

