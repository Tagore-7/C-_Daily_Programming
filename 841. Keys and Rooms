class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> vis(rooms.size());
        // for(auto it: vis){
        //     cout<< it<< endl;
        // }
        vis[0] = true;
        // for(auto it: vis){
        //     cout<< it<< endl;
        // }
        stack<int>keys;
        keys.push(0);
        int count = 1;
        while(keys.size()){
            vector<int> roomKey = rooms[keys.top()]; 
            keys.pop();
            for(int k: roomKey){
                if(!vis[k]){
                    keys.push(k);
                    vis[k] = true;
                    count++;
                }
            }
        }
        return vis.size() == count;
    }
};
