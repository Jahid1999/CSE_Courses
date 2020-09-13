#include <iostream>
#include <string>

using namespace std;

int main (void)
{
	string s = "Atkia Akila Karim";
	string s1 = "Ali Ahad Kiam Muhammad Azimul Yasin Sazid Biswas";
	
	
	
	//if(s1.find("Azim") != string::npos) cout << "Found" << endl;
	//else cout << "NotFound" << endl;
	
	//string hudaiSubstring = s.substr(6,5);
	//cout << hudaiSubstring << endl;
	
	//if(a.compare(b) == 0) 
	//string a= "Khaled", b="Khaled";
	
	//if(a == b) cout << "Milse" << endl;
	//else cout << "MileNai" << endl;
	
	return 0;
}

/*
comparison
	compare
	==
	
	substr
	
	


concatenatoin
	s += " " + s1;
	s = s + " " + s1;
	append
	
	push_back
	pop_back
	
	insert(pos, kiDhukabo)
	insert(pos, kiDhukabo, pos, length)
	
	erase
	
	replace(pos, length, kiDhukbe)
	replace(pos, length, kiDhukbe, pos, len)

[]
	cout << s1[4] << endl;
	for (int i=0; i < s1.length(); i++)
	{
		s1[i] = s1[i+1];//'x';//= s1[i]+1;
		cout << s1[i] <<endl;
	}

clear, empty
	s1.clear();
	if(!s1.empty()) cout << s1 << endl;

size, length
	cout << s.size() << endl;
	cout << s1.length() << " " << s1.size() << endl;

assignment = "??"

concatenate +
	s=s+ " " +s1;

equality ==
	if(s == s1) {cout << "milse" << endl;}
	else {cout << "mile nai" << endl;}
!=

>>
<<
	cin>> s >> s1;
	cout  << s << s1 << endl;

getline()
	getline(cin, s);
	getline(cin, s1);
	cout << s << endl << s1 << endl;

*/
