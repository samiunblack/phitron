#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> sorted_v;

        int p1 = 0; int p2 = 0;

        while(p1 < m && p2 < n)
        {
            if(nums1[p1] < nums2[p2])
            {
                sorted_v.push_back(nums1[p1]);
                p1++;
            }
            else
            {
                sorted_v.push_back(nums2[p2]);
                p2++;
            }
        }

        while(p1 < m)
        {
            sorted_v.push_back(nums1[p1]);
            p1++;
        }    

        while(p2 < n)
        {
            sorted_v.push_back(nums2[p2]);
            p2++;
        }

        nums1 = sorted_v;
    }
};