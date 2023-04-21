#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>vvv;
void printvec(vector<int>&v){
	 for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";  
    }
    cout << endl;
}

void image_rotation(vector<vector<int>>&temp){
	int n=vvv.size();
	for(int i=0;i<vvv.size();++i){
		for(int j=0;j<vvv.size();++j){
				temp[i][j]=vvv[n-j-1][i];
		}
	}
	//cout<<endl;
	for(int i=0;i<vvv.size();++i){
    	printvec(temp[i]);
    }
   // cout<<endl;
}
void transpose(){
	int n=vvv.size();
	for(int i=0;i<n;++i){
		for(int j=0;j<i;++j){
			swap(vvv[i][j],vvv[j][i]);
		}
	}
	for(int i=0;i<vvv.size();++i){
    	printvec(vvv[i]);
    }
    cout<<endl;
}
void Rotate(){
	int n=vvv.size();
	for(int i=0;i<vvv.size();++i){
    	reverse(vvv[i].begin(),vvv[i].end());
    }
    for(int i=0;i<vvv.size();++i){
    	printvec(vvv[i]);
    }
    cout<<endl;
}
int main(){
	
	int k;
    cin >> k;
    //vector<vector<int>>v;
      vector < vector < int >> temp(k, vector < int > (k, 0));
      vector < vector < int >> temp2(k, vector < int > (k, 0));
    for (int i = 0; i <k; i++) {
    	vector<int>temp;
    	int l;cin>>l;
    	for(int j=0;j<l;++j){
    		  int x;cin>>x;
        	  temp.push_back(x);
    	}
      vvv.push_back(temp);
    }
    cout<<"the actual image is:"<<endl;
    for(int i=0;i<vvv.size();++i){
    	printvec(vvv[i]);
    }
    cout<<endl;
    cout<<"brute force image_rotation that taking extra space:"<<endl;
    image_rotation(temp);
    cout<<endl;
    cout<<"transposed image :"<<endl;
    transpose();
    cout<<"Rotated image is:"<<endl;
    Rotate();
}