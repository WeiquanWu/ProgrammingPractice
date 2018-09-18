bool checkBST(Node* root) {
        return checkBST(root, -32767, 32767);
    }
    bool checkBST(Node* node, int min, int max) {
        if (node == nullptr) return true;
        return  min < node->data && node->data < max && 
            checkBST(node->left, min, node->data) && 
            checkBST(node->right, node->data, max);
    }