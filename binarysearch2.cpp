#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,key=-1;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   cin>>key; 
    int low=0,high=n,index=0;
    bool found=0;
    while(high>=low)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
        {
            index=mid;
            found=1;
            break;
        }
        else if(a[mid]>key)high=mid-1;
        else low = mid+1;    
    }
    int count=0,first=0,last=0;
    for(int i=index+1;i<n;i++){
        if(a[i]==key){
            count++;
            last++;
        }
        else break;
    }
     for(int i=index;i>=0;i--)
     {
         if(a[i]==key)
         {
             count++;
             first++;
         }
        else break;
     }
      int start,finish;
      if(found==false)
      {
          start=-1;
          finish=-1;
      }
    else
    {
           start=index-first+1;
           finish=index+last;
    }
    cout<<start<<" "<<finish<<" "<<count;
    return 0;
}