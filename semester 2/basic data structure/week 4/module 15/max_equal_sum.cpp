#include <bits/stdc++.h>
using namespace std;

int get_sum(stack<int> st)
{
    int sum = 0;

    while(!st.empty())
    {
        sum += st.top();
        st.pop();
    }

    return sum;
}

int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3)
{
    int sum1 = get_sum(stk1);
    int sum2 = get_sum(stk2);
    int sum3 = get_sum(stk3);

    int mx = max(sum1, max(sum2, sum3));
    while(true)
    {   
        if(sum1 == sum2 && sum2 == sum3)
        {
            return sum1;
        }
        if(sum1 == 0 || sum2 == 0 || sum3 == 0)
        {
            return 0;
        }
        if(sum1 == mx)
        {
            sum1 -= stk1.top();
            stk1.pop();
        }

        else if(sum2 == mx)
        {
            sum2 -= stk2.top();
            stk2.pop();
        }
        else if(sum3 == mx)
        {
            sum3 -= stk3.top();
            stk3.pop();
        }

        

        mx = max(sum1, max(sum2, sum3));
    }

    return sum1;
}