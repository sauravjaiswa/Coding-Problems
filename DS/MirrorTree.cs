using DriverCode;

/*  A binary tree Node
    class Node
    {
        public int data;
        public Node left;
        public Node right;

        public Node(int key)
        {
            this.data = key;
            this.left = null;
            this.right = null;
        }
    }
*/
class Solution {
    public void mirror(Node root) {
        // code here
        MirrorUtil(root);
    }
    
    private void MirrorUtil(Node root){
        if(root == null){
            return;
        }
        
        var temp = root.left;
        root.left = root.right;
        root.right = temp;
        
        MirrorUtil(root.left);
        MirrorUtil(root.right);
    }
}