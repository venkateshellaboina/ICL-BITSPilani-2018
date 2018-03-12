#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	   ll x,y,n,s,e,w,p;
	   cin>>x>>y>>n>>s>>e>>w>>p;

	   ll temp1=x*e;
	   ll temp2=y*n;
	   p=p-temp1-temp2;
	   if(p<0)
	   {
	       cout<<-1<<endl;
	       continue;
	   }
	   else if(p==0)
	   {
	       cout<<x+y<<endl;
	       continue;
	   }
	   else
	   {
	       ll k1=max(n+s,e+w);
	       ll k2=min(n+s,e+w);
	       //cout<<k1<<k2<<endl;
	       ll i=0;
	       while(1)
	       {
	           if(i*k2<=p)
	           {
	               ll k3=p-i*k2;
	               if(k3%k1==0)
	               {
	                   ll j=k3/k1;
	                   ll k4=2*(i+j);
	                   cout<<x+y+k4<<endl;
	                   break;
	               }
	               i++;
	           }
	           else
	           {
	               cout<<-1<<endl;
	               break;
	           }
	       }
	   }
	}
	return 0;
}


