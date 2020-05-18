#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    string n;
    cin>>n;
    string s = "";
    string m="";
    int i,j;

    for(i=n.size()-1;i>=0;--i)
    {
        s +=n[i];

    }

    for(i=s.size()-1;i>=0;--i)
    {
        m +=s[i];

        if((i%3)==0 && (i-3)<s.size())
        {
            m +=',';
        }
    }



        cout<<m<<endl;
}
