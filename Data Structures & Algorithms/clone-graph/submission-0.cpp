class Solution {
public:
    Node* dfs(Node* node, map<Node*, Node*>& mp){
        if(node == nullptr) return nullptr;
        if(mp.count(node)) return mp[node];
        Node* copy = new Node(node->val);
        mp[node] = copy;
        for(Node* it: node->neighbors){
            copy->neighbors.push_back(dfs(it, mp));
        }
        return copy;
    }
    Node* cloneGraph(Node* node) {
        map<Node*, Node*> mp;
        return dfs(node, mp);
    }
};
