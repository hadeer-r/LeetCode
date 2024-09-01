/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start=1,end=n;
        while(start<=end){
            int middle=start+(end-start)/2;
            int guess_num=guess(middle);
            if(guess_num==0)
                return middle;
            else if(guess_num==-1){
                end=middle-1;
            }
            else
                start=middle+1;
        }
        return n;
    }
};