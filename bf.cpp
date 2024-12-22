/*

*/

#include<iostream>
using namespace std;


int bf(string s,string t){
	int i=0,j=0,k=0,sz_s=s.size(),sz_t=t.size();
	while(i<sz_s && j<sz_t){
		if(s[i]==t[j]){
			++i,++j;
			if(j==sz_t)·ÖÊý 
				return k;
		}
		else
			++k,i=k,j=0;
	}
	return -1;
}



int main(){
	string s,t;
	s="afdsfaf";
	t="dsf";
	cout<<bf(s,t);

	return 0;
}


