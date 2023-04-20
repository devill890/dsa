#include<bits/stdc++.h>
using namespace std;

int main() {
    // Pair
    pair<string, int> p;
    cout << "Enter a string: ";
    cin >> p.first;
    cout << "Enter an integer: ";
    cin >> p.second;
    cout << "Pair: (" << p.first << ", " << p.second << ")" << endl;

    // Vector
    vector<int> v;
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        v.push_back(x);
    }
    cout << "Vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Array of vectors
    array<vector<int>, 3> av;
    for (int i = 0; i < 3; i++) {
        int m;
        cout << "Enter the number of elements in vector " << i+1 << ": ";
        cin >> m;
        for (int j = 0; j < m; j++) {
            int x;
            cout << "Enter element " << j+1 << " of vector " << i+1 << ": ";
            cin >> x;
            av[i].push_back(x);
        }
    }
    cout << "Array of vectors: ";
    cout<<endl;
    for (int i = 0; i < 3; i++) {
        cout << "Vector " << i+1 << ": ";
        for (int j = 0; j < av[i].size(); j++) {
            cout << av[i][j] << " ";
        }
        cout << endl;
    }

    // Vector of vectors
    vector<vector<int>> vv;
    int k;
    cout << "Enter the number of vectors in the vector of vectors: ";
    cin >> k;
    for (int i = 0; i < k; i++) {
        vector<int> temp;
        int m;
        cout << "Enter the number of elements in vector " << i+1 << ": ";
        cin >> m;
        for (int j = 0; j < m; j++) {
            int x;
            cout << "Enter element " << j+1 << " of vector " << i+1 << ": ";
            cin >> x;
            temp.push_back(x);
        }
        vv.push_back(temp);
    }
    cout << "Vector of vectors: ";
    cout<<endl;
    for (int i = 0; i < vv.size(); i++) {
        cout << "Vector " << i+1 << ": ";
        for (int j = 0; j < vv[i].size(); j++) {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }

    // Map
    map<string, int> mp;
    int l;
    cout << "Enter the number of elements in the map: ";
    cin >> l;
    for (int i = 0; i < l; i++) {
        string key;
        int value;
        cout << "Enter key " << i+1 << ": ";
        cin >> key;
        cout << "Enter value " << i+1 << ": ";
        cin >> value;
        mp[key] = value;
    }
        cout << "Map: ";
        for (auto it = mp.begin(); it != mp.end(); it++) {
            cout << "(" << it->first << ", " << it->second << ") ";
        }
        cout << endl;
		int n;
		cin>>n;
		map<int, string> mp;//l0g(n)
		for (int i=0;i<n;++i){
			string s;int m;
			cin>>s>>m;
			mp[m]=s;//o(1)
		}
		map<int,string> ::iterator it ;
		//you can use auto keyword to squeeze the cord size
		for (it=mp.begin();it!=mp.end();it++){
			//both print statements are the same
			cout<<it->first<<" "<<it->second<<endl;
			cout<<(*it).first<<" "<<(*it).second<<endl;
			
		}
		cout<<endl;
}
