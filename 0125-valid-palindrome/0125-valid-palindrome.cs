public class Solution {
    public bool IsPalindrome(string s) {
        s=s.ToLower();
        int n =s.Length;
        int x=0,y=n-1;
        while(x<y){
            while(x<y&&skipped(s[x])) x++;
            while(x<y&&skipped(s[y])) y--;
            if(s[x] != s[y]){
                return false;
            }
            ++x;
            --y;

        }
        return true;
    }

    private bool skipped(char c){
        return !Char.IsLetterOrDigit(c);
    }
}