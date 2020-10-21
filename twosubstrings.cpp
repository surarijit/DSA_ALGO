    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	string s;
    	cin>>s;
    	int n=s.length(),i,j,flag=0,i1=INT_MAX,i2=INT_MAX;
    	std::vector<int> a;
    	std::vector<int> b;
    	for(i=0;i<n;i++)
    	{
    		if(s[i]=='A' && s[i+1] =='B')
    		{
    			i1 = i;
    		     a.push_back(i1);
    		}
    		else
     
    		if(s[i]=='B'&&s[i+1]=='A')
    		{
    			i2 = i;
    			b.push_back(i2);
    		}
    	}
     
     
     
    	for(i=0;i<a.size();i++)
    	{
    		for(j=0;j<b.size();j++)
    		{
    			if(abs(a[i]-b[j])>1)
    			{
    				cout<<"YES";
    				cout<<endl;
    				goto x;
    			}
    		}
    	}
     
    		cout<<"NO";
    		x:;
     
    		a.clear();
    		b.clear();
    	cout<<endl;
     
    }