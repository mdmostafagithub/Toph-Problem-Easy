#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    string n;
    cin>>n;
    //cout << n[3] << endl;
    string s = "";
    string m="";
    int i,j;
    /*for( j=0,i=n.size()-1;i>=0;--i,j++)
    {
        s +=n[i];
       // m +=s[j];

            if((i%3)==0)
            {
                m += ',';

            }
            m +=s[j];
    }
    cout<<m<<endl;*/
    for(i=n.size()-1;i>=0;--i)
    {
        s +=n[i];

       /* if((i%3)==0)
        {
            s +=',';
        }
        //m +=s[i];*/

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
