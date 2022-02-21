#include<bits/stdc++.h>
using namespace std;

// typedef long long LL;
// typedef pair<int, int> pii;
// typedef pair<LL, LL> pll;
// typedef pair<string, string> pss;
// typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<pii> vii;
// typedef vector<LL> vl;
// typedef vector<vl> vvl;

// //macro

// #define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
// #define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
// #define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
// #define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
// #define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
// #define FOREACH(a, b) for (auto&(a) : (b))
// #define REP(i, n) FOR(i, 0, n)
// #define REPN(i, n) FORN(i, 1, n)
// #define MAX(a, b) a = max(a, b)
// #define MIN(a, b) a = min(a, b)
// #define SQR(x) ((LL)(x) * (x))
// #define RESET(a, b) memset(a, b, sizeof(a))
// #define fi first
// #define se second
// #define mp make_pair
// #define pb push_back
// #define ALL(v) v.begin(), v.end()
// #define ALLA(arr, sz) arr, arr + sz
// #define SIZE(v) (int)v.size()
// #define SORT(v) sort(ALL(v))
// #define REVERSE(v) reverse(ALL(v))
// #define SORTA(arr, sz) sort(ALLA(arr, sz))
// #define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
// #define PERMUTE next_permutation
// #define TC(t) while (t--)


//method 1------
string reverse1(string &str){

	string reverse_str = "";
	for (int i = str.size() - 1; i >= 0; --i)
	{
		//concatinating character in the 
		reverse_str = reverse_str + str[i]; //using this is not recommended 
		// reverse_str += str[i]; //same as above
	}

	return reverse_str;
}

//method 2 ---
void reverse2(string &str){
	int l = str.size(); string temp;
	for (int i = l - 1; i >= 0; --i)
	{
		//concatinating character in the 
		temp = temp + str[i]; //using this is not recommended 
		// reverse_str += str[i]; //same as above
	}

	str = temp;


}


void reverse3(string &str){
	int end = str.size() - 1;
	int start = 0;

	while(end > start){
		
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}

}

bool is_pallindrome(string &str){
	bool flag = true;
	int end = str.size() - 1;
	int start = 0;

	while(end >= start){
		
		if(str[end] != str[start]){
			return false;
		}
		else{
			end--;
		    start++;
		}

		// flag = false;

	}


	return flag;


}

//C++ strings, getline, and bignumbers

int main(){
	
	string str;
	//if space allowed in string then 
	getline(cin, str);


	//method 1 ----
	// cout<<reverse1(str)<<endl; //method 1 --


/*

	//method 2---
	reverse2(str);
	cout<<str<<endl;

*/



/*
	//method 3 ----using two pointer method
	reverse3(str);
	cout<<str<<endl;

*/


/*
	//pallindrome checking
	bool check = is_pallindrome(str);
	if(check){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

*/

	return 0;
}    