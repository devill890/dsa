#include <bits/stdc++.h>
using namespace std;

void IntToRoman(int n){
	vector<pair<int,string>>numbers={
		   {1000, "M"}, 
            {900, "CM"}, 
            {500, "D"},
            {400, "CD"}, 
            {100, "C"}, 
            {90, "XC"}, 
            {50, "L"}, 
            {40, "XL"}, 
            {10, "X"}, 
            {9, "IX"}, 
            {5, "V"}, 
            {4, "IV"}, 
            {1, "I"}
        };
        string ans =" ";
        while(n>0){
        	for(auto i : numbers){
        		if(n>=i.first){
        			ans+=i.second;
        			n-=i.first;
        			break;
        		}
        	}
        }
        cout<<ans<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		IntToRoman(n);
	}
}