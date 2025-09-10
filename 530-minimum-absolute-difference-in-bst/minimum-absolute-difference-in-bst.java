/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int getMinimumDifference(TreeNode root) {
          List<Integer> ans=new ArrayList<>();
        inorder(root,ans);
        for(int i=0;i<ans.size();i++){
           System.out.println(ans.get(i));
        }
        int maxi=Integer.MAX_VALUE;
        for(int i=0;i<ans.size()-1;i++){
            maxi=Math.min(maxi,Math.abs(ans.get(i)-ans.get(i+1)));
        }
        return maxi;
    }
    void inorder(TreeNode root,List<Integer>ans){
        if(root==null)return ;
        inorder(root.left,ans);
        ans.add(root.val);
        inorder(root.right,ans);
    }
}