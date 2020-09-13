#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t,s1,t1;
    int a=0,b=0;
    
    cin >> s >> t;
    
    s1=s;
    t1=t;
    
    while (s != t)
    {
        if (s[0] < t[0])
        {
            a++;
            s[0] =s[0]+1;
        }
        
        else if (s[0] > t[0])
        {
            a++;
            s[0] =s[0]-1;
        }

        if (s[1] < t[1])
        {
            b++;
            s[1] =s[1]+ 1;
        }
        
        else if (s[1] > t[1])
        {
            b++;
            s[1] =s[1]-1;
        }

     
    }
    	cout << max(a,b) << endl;
    
    while (s1 != t1)
    {
        if (s1[0] < t1[0])
        {
            cout << "R";
            s1[0] =s1[0]+1;
        }
        
        else if (s1[0] > t1[0])
        {
            cout << "L";
            s1[0] =s1[0]-1;
        }

        if (s1[1] < t1[1])
        {
            cout << "U";
            s1[1] =s1[1]+ 1;
        }
        
        else if (s1[1] > t1[1])
        {
            cout << "D";
            s1[1] =s1[1]-1;
        }

        cout << endl;
    }
    
    return 0;
}
