#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n1=0, n2=0, cnt=0;
		for(char c : s) {
			if(c=='(')
				n1++;
			else if(c=='[')
				n2++;
			else if(c==')') {
				if(n1) {
					cnt++;
					n1--;
				}
			}
			else if(c==']') {
				if(n2) {
					cnt++;
					n2--;
				}
			}
		}
		cout << cnt << "\n";
	}
}
