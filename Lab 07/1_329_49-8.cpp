//codeforces Problem No = 110A
//Problem Name =Nearly Lucky Number
#include<iostream>
#include<string>
using namespace std;;
int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4' || s[i]=='7')
            {
                count++;
            }
    }
    if (count==4|| count==7)

    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
