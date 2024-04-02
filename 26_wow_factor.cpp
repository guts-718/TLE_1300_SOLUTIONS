#include<bits/stdc++.h>

using namespace std;
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    string s;
    ll total=0;
    cin>>s;
    ll sz=s.size();
    vector <ll > pref(sz),suff(sz);
	for(int i = 1 ; i < sz; i++){
		suff[i] = suff[i-1];
		if(s[i]=='v' and s[i-1]=='v')
			suff[i] += 1;

	}
	for(int i = sz-2 ; i >=0 ; i--){
		pref[i] = pref[i+1];
		if(s[i]=='v' and s[i+1]=='v')
			pref[i] ++ ;
	}

    for(int i=0;i<sz;i++)
    {
        if(s[i]=='o' and suff[i] and pref[i]){
			total += (suff[i] * pref[i]);
		}
	}
    cout<<total<<endl;
    //cout<<currentw[0]<< " "<<currento[0]<<" "<<currentw[2]<<endl;
    return 0;
}
