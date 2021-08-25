#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here...
	int num,j;
	cin>>num;
	int arr[num];
	for(j=0;j<num;j++){
	    cin>>arr[j];
	}
	int check1=0,check2=0,currans=0,ans=0,currlen1=0,currlen2=0;
	for(j=0;j<num;j++){
	    if (check1==0 && check2==0) {
	        if (arr[j]==1) { check1=1; check2=0; currlen1++; }
	        else if (arr[j]==2) { check2=1; check1=0; currlen2++; }
	        continue;
	    }
        // 2 2 2 1 1 2 2
	    if (check1==1 && check2==0) {
	        if (arr[j]==1) currlen1++;
	        else if (arr[j]==2) {
	            currans=min(currlen1,currlen2);
	            ans=max(currans,ans);
	            currlen2=1;
	            check2=1;
	            check1=0;
	        }    
	    }
	    else if (check1==0 && check2==1) {
	        if (arr[j]==2) currlen2++;
	        else if (arr[j]==1) {
	            currans=min(currlen1,currlen2);
	            ans=max(currans,ans);
	            currlen1=1;
	            check2=0;
	            check1=1;
	        } 
	    }
    } 
	currans=min(currlen1,currlen2);
	ans=max(currans,ans);
	cout<<(2*ans)<<endl;   
	return 0;
}