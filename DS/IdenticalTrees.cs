using DriverCode;

class Solution {
    // Function to check if two trees are identical.
    public bool isIdentical(Node r1, Node r2) {
        // code here
        return Dfs(r1, r2);
    }
    
    private bool Dfs(Node r1, Node r2){
        if(r1 == null && r2 == null){
            return true;
        }
        
        if(r1?.data != r2?.data){
            return false;
        }
        
        return Dfs(r1.left, r2.left) && Dfs(r1.right, r2.right);
    }
}