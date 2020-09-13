#include <bits/stdc++.h>
using namespace std;

struct c{
    int CSE101, CSE102;
    int roll;
    bool operator < (c temp) const {
        if(CSE101 == temp.CSE101){
            return CSE102 < temp.CSE102;
        }
        return CSE101 < temp.CSE101;
    }
    bool operator > (c temp) const {
        if(CSE101 == temp.CSE101){
            return CSE102 < temp.CSE102;
        }
        return CSE101 < temp.CSE101;
    }
};

//vector <c> v;

int main(){

    int j = 10;
    vector <c> v = {{50, 55, 1} , {50, 16, 2} , {17, 87, 3} };

    if(v[0] > v[1]){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    sort(v.begin(), v.end());



    for(int i = 0; i < v.size(); i++){
        cout << "Roll = " << v[i].roll << " CSE101 = " << v[i].CSE101 << " CSE102 = " << v[i].CSE102 << endl;
    }
}
