#include <bits/stdc++.h> 
using namespace std;
// Implement class for minStack.
class minStack
{
	stack<int> st;
	stack<int> mn;
	
	public:
		
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			st.push(num);
			if(mn.empty())
			{
				mn.push(num);
			}
			else
			{
				mn.push(min(mn.top(), num));
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(!st.empty())
			{
				int ans = st.top();
				st.pop();
				mn.pop();

				return ans;
			}

			return -1;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(!st.empty())
			{
				return st.top();
			}

			return -1;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(!st.empty())
			{
				return mn.top();
			}
			return -1;
		}
};