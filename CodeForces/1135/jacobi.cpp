#include <bits/stdc++.h>

using namespace std;

double coefficients[4][5];
double currentX[3];
double previousX[3];
int iteration = 1000;

void from_file(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
}

void process_input(string s, int i)
{
    string num = "";
    bool ok = 1;
    for(int j = 0; j < s.length(); j++)
    {
        if(s[j] == ' ' || s[j] == '+' || s[j] == '=')  continue;
        if(s[j] == '-') {
                ok = 0;
                continue;
        }
        if(s[j] == 'X' || s[j] == 'x')
        {
            if(num == ""){
                coefficients[i][0] = 1;
            }
            else coefficients[i][0] = stod(num);
            if(!ok){
                coefficients[i][0] = - coefficients[i][0];
                ok = 1;
            }
            num = "";
            continue;
        }
        if(s[j] == 'Y' || s[j] == 'y')
        {
            if(num == ""){
                coefficients[i][1] = 1;
            }
            else
                coefficients[i][1] = stod(num);
            if(!ok){
                coefficients[i][1] = - coefficients[i][1];
                ok = 1;
            }
            num = "";
            continue;
        }
        if(s[j] == 'Z' || s[j] == 'z')
        {
            if(num == ""){
                coefficients[i][2] = 1;
            }
            else
                coefficients[i][2] = stod(num);
            if(!ok){
                coefficients[i][2] = - coefficients[i][2];
                ok = 1;
            }
            num = "";
            continue;
        }
        num += s[j];
    }
    coefficients[i][3] = stod(num);
    if(!ok){
        coefficients[i][3] = - coefficients[i][3];
    }
}

int main(void)
{
    from_file();
    string s[3];
    for(int i = 0; i < 3; i++)
    {
        getline(cin,s[i]);
        process_input(s[i],i);
    }

    while(iteration--)
    {
        currentX[0] = coefficients[0][3]-coefficients[0][1]*previousX[1]-coefficients[0][2]*previousX[2];
        currentX[0]/=coefficients[0][0];
        currentX[1] = coefficients[1][3]-coefficients[1][0]*previousX[0]-coefficients[1][2]*previousX[2];
        currentX[1]/=coefficients[1][1];
        currentX[2] = coefficients[2][3]-coefficients[2][0]*previousX[0]-coefficients[2][1]*previousX[1];
        currentX[2]/=coefficients[2][2];
        previousX[0] = currentX[0];
        previousX[1] = currentX[1];
        previousX[2] = currentX[2];
    }
    cout << "Answer: x = " << previousX[0] << ", y = " << previousX[1] << ", z = " << previousX[2] << endl;
}
