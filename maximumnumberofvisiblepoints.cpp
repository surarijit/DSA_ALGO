class Solution {
public:
    #define pb push_back
        int visiblePoints(vector<vector<int>>& points, int angle, vector<int>& location) {
            vector<double> v; int x = location[0],y=location[1],extra=0;
            for(auto a:points){
                if(a[1]==y and a[0]==x) {extra+=1; continue;}
                double t = atan2((a[1]-y),(a[0]-x))*180/M_PI;
            if(t<0) t+=360;
            v.pb(t);
            }
            sort(v.begin(),v.end());
            vector<double> a = v;
            a.insert(a.end(),v.begin(),v.end());
             for(int i=v.size(); i<a.size(); i++)
            a[i] += 360;
            v=a;
            int n=v.size(),ans=0,start=0;
            for(int i=0;i<n;){
                if(start<i and v[i]-v[start]> angle) start++;
                else{
                    ans = max(ans,i-start+1);
                    i++;
                }
            }
            return extra+ans;
        }
};