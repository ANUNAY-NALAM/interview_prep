#include<iostream>
#include<iterator>
#include<set>
using namespace std;
int main()
{
	set<int> st;
	st.insert(4);
	st.insert(2);
	st.insert(4);
	st.insert(3);
	st.insert(4);
	st.insert(2);
	st.insert(4);
	st.insert(5);
	for(auto i: st)
	{
		cout<<i<<endl;
	}
    return 0;
}
