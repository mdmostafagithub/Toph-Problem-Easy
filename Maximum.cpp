#include<iostream>

using namespace std;


int main()
{
    int i,m,j, arr[100];

    int n;
    cin>>n;
    for( i=0; i < n;i++)
    {
      cin>>arr[i];

    }
    m = arr[0];
    for( i=0; i < n;i++)
    {
      if (m < arr[i]) {
        m = arr[i];
      }

    }

    cout << m << endl;

}
