
/* The maximum number of nodes at level ‘l’ of a binary tree is 2^l-1.

Here level is number of nodes on path from root to the node (including root and node). Level of root is 1

Level of a node is distance from root to that node. For example, level of root is 1 and levels of left and right children of root is 2.
The maximum number of nodes on level i of a binary tree is : if level is 3 then there will be maximum 7 nodes in the binary tree.
which is 2^3-1=8-1=7.

For root, l = 1, number of nodes = 21-1 = 1
Assume that maximum number of nodes on level l is 2l-1

Maximum number of nodes in a binary tree of height ‘h’ is 2h – 1.

 Here height of a tree is maximum number of nodes on root to leaf path. Height of a leaf node is considered as 1.
 A tree has maximum nodes if all levels have maximum nodes. So maximum number of nodes in a binary tree of height h is 1 + 2 + 4 + .. + 2h-1.
 This is a simple geometric series with h terms and sum of this series is 2h – 1.

 