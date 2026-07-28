class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        map<int,int>mp ;
        int i=0,j=0;
        int n= series1.size(),m=series2.size();
        for(int i=0;i<series1.size();i++)
        {
            mp.insert({(series1[i][0]),0});
        }

        for(int j=0;j<series2.size();j++)
        {
            mp.insert({(series2[j][0]),0});
        }

vector<vector<int>>res;
for (auto it : mp )
{
     vector<int>v;
            int val=it.first;
            int sum=0;
            if(i<n)
            {
              sum+=series1[i][1];
            }
            
            if(j<m)
            {
            sum+=series2[j][1];
            }
          
            if(i<n && series1[i][0]==val)
            {
                i++;
            }
            if(j<m && series2[j][0]==val)
            {
                j++;
            }
            it.second=sum;
            v.push_back(val);
            v.push_back(it.second);
            res.push_back(v);
}
       
       
       return res;
    }
};