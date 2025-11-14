public class Solution {
    public int[][] RangeAddQueries(int n, int[][] queries) {
        int[][] matrix = new int[n][];
        for(int i=0;i<n;i++){
            matrix[i]=new int[n];
        }
        foreach(var q in queries){
            for(int row=q[0];row<=q[2];row++){
                for(int col=q[1];col<=q[3];col++){
                    matrix[row][col]+=1;
                }
            }
        }
        return matrix;
    }
}