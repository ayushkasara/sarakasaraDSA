 //Function to return the maximum sum of non-adjacent nodes.
    pair <int, int> solve(Node* root) {
        if (root == NULL) {
            return {0,0};
        }

        pair<int, int> lp = solve (root->left);
        pair<int, int> rp = solve (root->right);
        pair<int, int> curr;

        curr.first = lp.second + rp.second + root->data;
        curr.second = max (lp.first, lp.second) + max(rp.first, rp.second);
        return curr;

    }
    
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair <int, int> p;
        p = solve (root);
        return max(p.first, p.second);
    }
