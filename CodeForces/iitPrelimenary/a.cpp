#include <bits/stdc++.h>

using namespace std;


int main(void)
{
  	int n, m;
  	
    cin >> n >> m;
    
    m = m % (n * (n + 1) / 2);
    
    for (int i=0; i<n;i++)
    {
        if (m<i+1)
            break;
   
        m = m- (i+1);
    }
    
    cout << m << endl;
    return 0;
}


