#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int anagrams(string str1,string str2)
{
	if(str1.length()!=str2.length())
    return false;
	
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	return str1==str2;
}
int main()
{
	string str1,str2;
    cout << "Enter a first word: \n";
    cin >> str1;
    cout << "\n"<<"Enter a Second word: \n";
    cin >> str2;
    if(anagrams(str1,str2))
    cout<<"They are anagrams";
    else
    cout<<"They are not anagrams";
}
