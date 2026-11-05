class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int rigth=height.size()-1;
        int water=0;
        while(left<rigth){
            int width=rigth-left;
            int current_heigth=min(height[left],height[rigth]);
           int current_area=width*current_heigth;
           water=max(water,current_area);
           if(height[left]<height[rigth]){
            left++;
           }
           else{
            rigth--;
           }
        }
        return water;
    }
};