void iterativePostorder(Node* root) 
{ 
    stack<pair<Node*, int> > st; 
    st.push(make_pair(root, 0)); 
  
    while (!st.empty()) { 
        struct Node* temp = st.top().first; 
        int b = st.top().second; 
        st.pop(); 
  
        if (temp == NULL) 
            continue; 
  
        if (b == 0) { 
            st.push(make_pair(temp, 1)); 
  
            if (temp->left != NULL) 
                st.push(make_pair(temp->left, 0)); 
        } 
        else if (b == 1) { 
            st.push(make_pair(temp, 2)); 
  
            if (temp->right != NULL) 
                st.push(make_pair(temp->right, 0)); 
        } 
        else
            cout << temp->data << " "; 
    } 
} 