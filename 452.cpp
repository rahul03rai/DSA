class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();

        if(n==0)
            return 0;
        sort(points.begin(), points.end());

        int start=points[0][0];
        int end=points[0][1];

        int res=1;

        for(vector<int>& point : points){
            if(point[0]<=end)
            {
                start=point[0];

                end=min(end, point[1]);
            }
            else
            {
                res++;
                start=point[0];
                end=point[1];
            }
        }
        return res;
    }
};