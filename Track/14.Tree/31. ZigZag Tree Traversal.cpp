Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    
    Node* root = new Node(stoi(ip[0]));
        
    queue<Node*> queue;
    queue.push(root);
        
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        Node* currNode = queue.front();
        queue.pop();
            
        string currVal = ip[i];
            
        
        if(currVal != "N") {
            currNode->left = new Node(stoi(currVal));
                
            
            queue.push(currNode->left);
        }
            
        
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        
        if(currVal != "N") {
                
            
            currNode->right = new Node(stoi(currVal));
                
            
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}
