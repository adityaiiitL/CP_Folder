vector <int> v;       
    bool checkBST(Node* root) 
    {
        if(root==NULL)
        return true;
        bool flag=checkBST(root->left);
        if(!flag)
            return false;
        v.push_back(root->data);
        flag=checkBST(root->right);
        if(!flag)
            return false;
        for(int i=0;i<v.size()-1;i++)     
        {     
            if(v[i]>=v[i+1])
               return false;                    
        }
        return true;
    }