class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<pair<int,int>>st;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            int t = temperatures[i];
            while(!st.empty() && t>st.top().first){
                int stidx = st.top().second;
                st.pop();

                ans[stidx] = i-stidx;
            }
            st.push({t,i});
        }
        return ans;
    }
};