#include <bits/stdc++.h>
using namespace std;
#define ill int long long
int main() {
	
	    // find the median 
	    
	    ill num,i,k;
	    cin>>num;
	    ill arr[num];
	    
	    for(i=0;i<num;i++) {
	        cin>>arr[i];
	        
	    }
	    
	    sort(arr,arr+num);
	    
	    
	    if (num==1) {
	        cout<<arr[0]<<" "<<0<<endl;
	        return 0;
	    }
	    else if (num==2) {
	        cout<<arr[0]<< " "<< (arr[1]-arr[0]-1)<<endl;
	        return 0;
	    }
	    
	    
	    
	    ill ans=0;
	    
	    if (num%2==1) {
	        k=(num/2);
	        ill val=arr[k];
	        
	        
	        for(i=0;i<num;i++){
	            if (abs(arr[i]-val) >1 ) {
	                ans=ans+abs(arr[i]-val)-1;
	            }
	            
	        }
	        
	        
	        
	    }
	    else {
	        ill k1=(num/2);
	        ill k2=k1-1;
	        
	        ill val1=arr[k1];
	        ill val2=arr[k2];
	        
	        ill ans1=0,ans2=0;
	        
	        for(i=0;i<num;i++){
	            if ( abs(arr[i]-val1) >1 ) {
	                ans1=ans1+abs(arr[i]-val1)-1;
	            }
	            
	        }
	        
	       
	        for(i=0;i<num;i++){
	            if (abs(arr[i]-val2) >1 ) {
	                ans2=ans2+abs(arr[i]-val2)-1;
	            }
	            
	        }
	        
	       // ans=min(ans1,ans2);
	       if (ans1<ans2) {
	           ans=ans1;
	           k=k1;
	           
	       } 
	       else {
	           ans=ans2;
	           k=k2;
	       }
	        
	        
	    }
	    
	    cout<<arr[k]<<" "<<ans<<endl;
	    

	return 0;
}