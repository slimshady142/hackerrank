
/**
* Created by Abhishek Shetye
* coin change hackerrank - Top down approah
*/

#include <bits/stdc++.h>
#include <ios>
#define li int64_t
using namespace std;


int arr[300];
li dp[300][70];

int R, n;

li cal(int j, int sum){
	
	if(dp[sum][j]!=-1)
		return dp[sum][j];
		
	if(sum>R)
		return 0;
	if(sum==R)
		return 1;	
	else{
		dp[sum][j]=0;
		for(int i=j; i<n; i++)
			dp[sum][j]+=cal(i, sum+arr[i]);
		
	}
	return dp[sum][j];
}


int main(){
  ios::sync_with_stdio(0);
	cin>>R>>n;

	for(int i=0; i<n; i++)
		cin>>arr[i];

	li ans=0;

	for(int i=0;i<70;i++)
		for(int j=0;j<300;j++)
			dp[j][i]=-1;

	ans += cal(0, 0);

	cout<<ans<<endl;

	return 0;
}
