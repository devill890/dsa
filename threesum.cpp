#include<bits/stdc++.h>
using namespace std;
bool threesum2 (vector<int>&v,int k){
	for(int i=0;i<v.size()-2;++i){
		for(int j=i+1;j<v.size()-1;++j){
			for(int l = j+1;l<v.size();++l){
				if(v[i]+v[j]+v[l]== k){
					cout<<"brute force solution: "<<endl;
					cout<<v[i]<<" "<<v[j]<<" "<<v[l]<<endl;
					return true;
				}
			}
		}
	}
	return false;
}
/*vector<vector<int>> threesum3 (vector<int>&v,int k){
	sort(v.begin(),v.end());
	set<vector<int>>s;
	vector<vector<int>>output;
	for(int i=0;i<v.size()-2;i++){
		int j =i+1;int k = v.size()-1;
		while(j<k){
			int sum = v[i]+v[j]+v[k];
			if(sum==k){
				s.insert({v[i],v[j],v[k]});
				j++;
				k--;
			}else if(sum<k) {
				j++;
			}
			else{
				k--;
			}
		}
	}
	for (auto triplet:s){
		output.push_back(triplet);
	}
	return output;
}*/
 vector<vector<int>> threeSum3(vector<int>& v,int k) {
  //int k = 22;
        sort(v.begin(), v.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        for (int i = 0; i < v.size(); i++){
            int j = i + 1;
            int k = v.size() - 1;
            while (j < k) {
                int sum = v[i] + v[j] + v[k];
                if (sum == k) {
                    s.insert({v[i], v[j], v[k]});
                    j++;
                    k--;
                } else if (sum < k) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        for(auto triplets : s)
            output.push_back(triplets);
        return output;
    }
bool threesum1 (vector<int>&v,int k){
	for(int i=0;i<v.size();++i){
		set<int>hash;
		for(int j=i+1;j<v.size();j++){
			int rem = k-(v[i]+v[j]);
			if(hash.find(rem)!=hash.end()){
				cout<<v[i]<<" "<<v[j]<<" "<<rem<<endl;
				return true;
			}
			hash.insert(v[j]);

		}
	}
	
	return false;
}
void print2dvec(vector<vector<int>>&vec){
	 for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
}

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v; 
	for(int i=0;i<n;++i){
		int x;cin>>x;
		v.push_back(x);
	}
	threesum1(v,k);
	threesum2(v,k);
	vector<vector<int>>solution =threeSum3(v,k);
	print2dvec(solution);
}


