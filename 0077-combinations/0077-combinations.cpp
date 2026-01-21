class Solution {
public:
vector<vector<int>> ans;
void bt( int n, int k, int i, vector<int> temp)
{           if( temp.size()==k)
{ ans.push_back(temp);
return;}
for( int j=i;j<=n;j++)
{ temp.push_back(j);
 bt(n,k,j+1, temp);
 temp.pop_back();
}

}
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        bt(n,k,1,temp);
        return ans;
    }
};