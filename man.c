#include<iostream>
#include<conio>

bool palcheck(string s)
{
    int i, j;
    for(i=0,j=s.size()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j]) return False;
    }
    return True;
}

string best_str(string val)
{
    int i=0;
    int sz=val.size();
    for(int j=1;j<sz-2;j++)
    {
        int k=j+1;
        pt1=val.substr(i, j-i);
        if(palcheck(pt1))
        {
            for(int x=k, k<sz;x++)
            {
                pt2=val.substr(j,k-j);
                if(palcheck(pt2))
                {
                    pt3=val.substr(x, sz-x);
                    if(palcheck(pt3))
                    {
                        return pt1+pt2+pt3;
                    }
                }
            }
        }
    }
    return "Impossible";
}
int main()
{
    string val;
    ret = best_str(val);
    cout<<ret;
    return 0;
}
