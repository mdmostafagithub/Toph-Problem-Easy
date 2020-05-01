#include<iostream>

using namespace std;


int main()
{
    int n,i,min,max;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    max=a[0];
    min=a[0];

    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }


    }
 cout<<"Max is  "<<max<<endl<<"Min is  "<<min;;
}
