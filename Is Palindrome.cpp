#include<iostream>
//#include<conio.h>
#include<cstring>
using namespace std;

int main()
{

    char S[100]="Racecarkgjhg";
    cin>>S;
    //strlwr(S);
    int len=strlen(S);
    //cout<<"Length of string = "<<len<<endl;

    char S1[30];
    int i,j;
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        S1[j]=S[i];
    }
    S1[j]='\0';
    //cout<<S<<endl;
    //cout<<"str2= "<<S1<<endl;

    int d=strcmp(S,S1);
    if(d==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

}
