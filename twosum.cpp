#include<bits/stdc++.h>
using namespace std;
pair<int,int> two_sum1 (vector<int>&v,int k){
	pair<int,int>p;
	for(int i=0;i<v.size();++i){
		for(int j=i+1;j<v.size();++j){
			if(v[i]+v[j] ==k) return p={i,j};
		}
	}
	return{-1,-1};
}
pair<int,int>two_sum2 (vector<int>&v,int k){
	pair<int,int>p;int sum; unordered_map<int,int>mp;
	for(int i=0;i<v.size();i++){
		sum=v[i];
		int rem = k-sum;
		if(mp.find(rem)!=mp.end()){
			return p={mp[rem],i};
		}
		if(!mp[sum]){
			mp[sum]=i;
		}
	}
	return {-1,-1};
}

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v; 
	for(int i=0;i<n;++i){
		int x;cin>>x;
		v.push_back(x);
	}
	pair<int,int>solution1=two_sum1(v,k);
	pair<int,int>solution2=two_sum2(v,k);
	cout<<solution1.first<<" "<<solution1.second<<endl;
	cout<<solution2.first<<" "<<solution2.second<<endl;
}