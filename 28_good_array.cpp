// simply doing what is asked... kept a set and while iterating deleted single element , checked the condition then inserted the element back

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {

	    int n;
	    cin>>n;
	    multiset<int>st;
	    vector<int>arr;
	    int sum=0;
	    for(int i=0;i<n;i++){
	      int p;
	      cin>>p;
	      arr.push_back(p);
	      st.insert(p);
	      sum+=p;
	    }
	    vector<int>ans;
	    for(int i=0;i<n;i++){
	      int y=sum;
	      int p=arr[i];
          // deleted the current element from sum as well as from the set
	      y-=p;
          // this helps in deleting a single element(the iterator method) --> the value method deletes all the elements of the value
	      st.erase(st.find(p));
          // getting the largest element which is present at the last
	      auto it=st.rbegin();
	      if(y==2*(*it))ans.push_back(i+1);
          // inserting the element back again
	      st.insert(p);
	    }
	    cout<<ans.size()<<endl;
	    if(ans.size()>0){
	     	    for(auto x:ans)cout<<x<<" ";
	            cout<<endl; 
	    }

	return 0;

}