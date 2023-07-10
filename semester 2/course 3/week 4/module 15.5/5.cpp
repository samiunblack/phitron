#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	stack<char> st;

	for(int i = 0; i < s.size(); i++)
	{
		st.push(s[i]);
	}

	s = "";

	while(!st.empty())
	{
		s.push_back(st.top());
		st.pop();
	}

	return s;
}
