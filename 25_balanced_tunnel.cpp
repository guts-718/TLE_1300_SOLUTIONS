// store int the entry time and exit time of each vehicle and then sorting it if for any x we can have a y before this index which is greater than current y then ++
// initially i couldn' figure out how to store the data effectively.. i used unordered_map<int,pair<int,int>>mp the i stored the pair<int,int> from it in a vector
// but the key can simply be the index of the array so vector<pair<int,int>> is much much better

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number_of_car;
    scanf("%d",&number_of_car);

    vector<pair<int,int>> details(number_of_car) ;
    for(int i = 0 ; i < number_of_car ; i++){
        int x ; scanf("%d",&x) ;
        details[x-1].first = i + 1;
    }
    for(int i = 0 ; i < number_of_car ; i++ ){
        int x ; scanf("%d",&x) ;
        details[x-1].second = i + 1 ;
    }
    sort(details.begin() , details.end() ) ;

    int cnt = 0 , mx = 0 ;

    for(auto x : details){
        // x.first is larger than all the x.first that came before
        // so for overtaking there must be a y before this index which is greter than current y
        if(x.second < mx) cnt ++;
        mx = max(mx, x.second ) ;
    }
    printf("%d\n",cnt) ;

    return 0;
}