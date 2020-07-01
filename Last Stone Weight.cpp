class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end(),greater());
        while(stones[0]>=1 && stones.size()>1) {
            stones.push_back(stones[0]-stones[1]);
            stones.erase(stones.begin(),stones.begin()+2);
            sort(stones.begin(),stones.end(),greater());
        }
        return stones[0];
    }
};
