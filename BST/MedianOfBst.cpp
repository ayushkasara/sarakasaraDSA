// function 
void inorder (struct Node* root, int &n) {
    if (root == NULL)
        return ;
    
    inorder(root->left, n);
    n++;
    inorder(root->right, n);
}

void inorder1 (struct Node* root, struct Node*& prev, struct Node*& curr, int n, int &count) {
    if (root == NULL) 
        return;
    inorder1(root->left, prev, curr,n,count);
    if (((n/2) +1) > count && ((n/2) +1) != count) {
        prev = root;
    }
    else {
        if (count == ((n/2) + 1)){
            curr = root;
            count++;
            return ;
        }
        else {
            return;
        }
        
    }
    count++;
    inorder1 (root->right, prev, curr, n, count);
    
}

float findMedian(struct Node *root)
{
      //Code here
      int n = 0;
      inorder (root, n);
    //   cout<<n<<"\n";
      Node* prev = NULL;
          Node* curr = NULL;
          int count = 1;
      if(n%2 != 0) {
          
          inorder1 (root, prev, curr, n, count);
        //   cout<<prev->data<<" "<<curr->data<<"\n";
          return curr->data;
      }
      inorder1 (root, prev, curr, n,count);
    //   cout<<prev->data<<" "<<curr->data<<"\n";
      return ((float(prev->data + curr->data))/2);
}

