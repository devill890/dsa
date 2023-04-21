#include<bits/stdc++.h>
using namespace std;
int maxlen_subarray(int a[],int n,int k){
	int i=0,j=-1,maxlen=0,sum=0;
	while(i<n){
		while((j+1<n) and (sum+a[j+1]<=k))
			sum+=a[++j];
		
		if(sum==k) maxlen = max(maxlen,(j-i+1));

		sum-=a[i];
		i++;
	}
	return maxlen;
}

int maxlen_subarray2(int a[],int n,int k){
	int maxlen=0;
	for(int i=0;i<n;++i){
		int sum=0;
		for(int j=i;j<n;++j){
			sum+=a[j];
			if(sum==k) 
				maxlen = max(maxlen,j-i+1);
		}
	}
	return maxlen;
}
int maxlen_subarray3(int a[],int n, int k){
	map<int,int>mp;
	int maxlen,sum=0;
	for(int i=0;i<n;++i){
		sum+=a[i];
		if(sum==k){
			maxlen = max(maxlen,i+1);
		}
		int remaining_sum = sum-k;
		if(mp.find(remaining_sum)!=mp.end()){
			maxlen = max(maxlen,i-mp[remaining_sum]);
		}
		if(!mp[sum]){
			mp[sum]=i;
		}	
	}
	return maxlen;
}
int main(){
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	cout<<maxlen_subarray(a,n,k)<<endl;
	cout<<maxlen_subarray2(a,n,k)<<endl;
	cout<<maxlen_subarray3(a,n,k)<<endl;
}