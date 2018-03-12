
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define d 1000000000
int main()
{
  int t;
  cin>>t;
  while(t--)
 {
     ll n;
     ll k;
     cin>>n>>k;
     string str;
     cin>>str;
     ll sum=0;
     ll lcnt=0,ncnt=0;
     for(int i=0;i<n;i++)
     {

         ll t=str[i]-'a'+1;
         //cout<<t<<" ";
         if(t>(k*2))
         {

             sum+=t;
             ncnt++;
         }
         else
         {
             lcnt++;
         }
         //cout<<sum<<" ";

     }
     sum+=(lcnt-ncnt)*k;
     //cout<<endl;
     //double ans=(sum/k)+lcnt-ncnt;
     ll mx=sum;

         long long int rem=-1,x=mx,y=k;
         while(rem!=0)
         {
           rem=x%y;

           x=y;
           y=rem;


          //cout<<rem<<" "<<x<<" "<<y<<" "<<endl;
         }
        ll t1=mx/x,t2=k/x;

        cout<<t1<<" "<<t2<<endl;



 }
return 0;
}
