#include <bits/stdc++.h>

using namespace std;


int main() 
{
	string s, t, ans;
    int l,flag1=0,flag2=0;
    
    cin >> s >> t;
    
    l= s.length();
    
    for (int i=0;i<l;i++) 
    {
        if (s[i] != t[i])
        	flag1++;
    }
    
    if (flag1 & 1)
    {
        cout << "impossible" << endl;
        return 0;
    }
        
    else 
    {
        ans = s;
        
        for (int i=0;i<l;i++) 
        {
            if (s[i] != t[i]) 
            {
                if (flag2==0) 
                {
                    flag2=1;
                    ans[i] = s[i];
                } 
                
                else 
                {
                    flag2=0;
                    ans[i] = t[i];
                }
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
