#include <bits/stdc++.h>

using namespace std;



int main(){
    int t;
	cin>>t;
    while(t--)
	{
    	long long n, count=0, s;
    	cin >> n;
    	for(int i=1; i<=9; i++)
    	{
    		s=i;
    		while(s<=n)
    		{
    			count++;
    			s=s*10+i;
			}
		}
		cout << count << endl;
    }
}