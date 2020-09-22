#include<iostream>
using namespace std;
int main()
{
 int n,i,T,min_clips=0,min=0,max=0,k=0;
 cin>>n;
 cin>>T;
 int clips[n][2];
 for(i=0;i<n;i++)
 {
    cin>>clips[i][0];
    cin>>clips[i][1];
 }
 while(max<T)
 {
 for(i=0;i<n;i++)
 {
    if(clips[i][0]<=min&&clips[i][1]>max)
    {
      max=clips[i][1];
    }
  }
 

 
if(max==min)
 {
   k=-1;
   cout<<k;
   break;
 }
 min=max;
 min_clips++;
 }
 if(k!=-1)
 cout<<min_clips;
 }





