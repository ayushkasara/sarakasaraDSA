//Function to check whether a binary tree is balanced or not.
// https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Tree/problem/check-for-balanced-tree  //
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if (isBalanced1(root) >= 0)
            return true;
        else 
            return false;
    }
    
    int isBalanced1 (Node* root) {
    if (root == NULL) return 0;
    int lh = isBalanced1 (root->left);
    int rh = isBalanced1 (root->right);
    if (lh == -1 || rh == -1)
        return -1;
    if (abs(lh - rh) > 1)
        return -1;
    else 
        return max(lh, rh) + 1;
}
