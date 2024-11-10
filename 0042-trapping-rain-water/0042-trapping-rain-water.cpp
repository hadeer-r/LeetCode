class Solution {
public:

    int volum_from_right(int st,int en,vector<int>& height){

        int result{},sum{};
        int p1=st+1;
        while(st<en){
            if(height[p1]>=height[st]){
                if(st==p1+1){
                    st=p1;
                    sum=0;

                }
                else 
                {
                    result+= (p1-st-1)*height[st] - sum;
                    sum=0;
                    st=p1;
                } 

            }
            else{
                sum+=height[p1];
            }
            p1++;
        }
        return result;
    }

    int volum_from_left(int st,int en,vector<int>& height){

        int result{},sum{};

        int p1=en-1;

        while(st<en){
            
            if(height[p1]>=height[en]){
                if(en==p1+1){
                    en=p1;
                    sum=0;

                }

                else {
                    result+= (en-p1-1)*height[en] - sum;
                    sum=0;
                    en=p1;
                }
                
            }

            else {
                sum+=height[p1];
            }

            
            p1--;
        }
        return result;
    }
    int trap(vector<int>& height) {
        int max_idx{};
        for(int i=0;i<height.size();i++){
            
            if(height[max_idx]<height[i]){
                max_idx=i;
            }
        }

        int st{},en{};
        for(int i=0;i<height.size();i++){
            if(height[i]!=0){
                st=i;
                break;
            }
        }

        for(int i=height.size()-1;i>=0;i--){
            if(height[i]!=0){
                en=i;
                break;
            }
        }

        return volum_from_right(st,max_idx,height) + volum_from_left(max_idx,en,height);

    }
};