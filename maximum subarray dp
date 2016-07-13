/**
* Created by Abhishek Shetye
*/

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli arr[100005];

int main(){
	lli n;
	int t;
	for(cin>>t;t>0;--t){
	cin>>n; 

	for(lli i=0; i<n; i++){
		cin>>arr[i];
	}

	bool found=false;
	lli max_start = 0;
	lli ans=0;
	lli max_end = INT_MIN;
	for(lli i=0; i<n; i++){
		max_start = max(arr[i], max_start+arr[i]);
		max_end = max(max_start, max_end);
		if(arr[i]>=0){ 
			ans+=arr[i];
			found=true;
		}
	}
	
	if(!found){
		ans=INT_MIN;
		for(lli i=0; i<n; i++)
			ans = max(ans, arr[i]);
	}

	cout<<max_end<<" "<<ans<<endl;
	}

	
	return 0;
}
