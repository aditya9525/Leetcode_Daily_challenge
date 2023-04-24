class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        
        for(int i=0; i<stones.size(); i++){
            q.push(stones[i]);
        }

        while(q.size()>1){
            int firstTop=q.top();
            q.pop();
            int secondTop=q.top();
            q.pop();
            firstTop=firstTop-secondTop;
            q.push(firstTop);
        }
        return q.top();
    }
};
