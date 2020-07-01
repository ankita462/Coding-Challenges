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

# 2nd Approach

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        int a,b;
        while(pq.size()>=2){
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            if(abs(a-b)>0)
                pq.push(abs(a-b));
        }
        if(pq.empty())
            return 0;
        return pq.top();
    }
};
