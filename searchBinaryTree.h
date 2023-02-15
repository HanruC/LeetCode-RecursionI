//
//  searchBinaryTree
//
//  Created by Hanru Chen on 2/14/23.
//

#ifndef searchBinaryTree_h
#define searchBinaryTree_h

#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* searchBST(struct TreeNode* root, int val) {
    if (root == NULL || root->val == val) {
            return root;
    } else if (val < root->val) { // fix: use "val" instead of "value"
        return searchBST(root->left, val); // fix: add semicolon at the end of the line
    } else {
        return searchBST(root->right, val);
    }
}

#endif /* searchBinaryTree_h */
