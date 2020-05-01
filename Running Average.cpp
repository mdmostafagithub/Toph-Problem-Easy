#include<iostream>
using namespace std;

int main()
{
    int N, sum=0;
    cin>>N;
    int arry[100010];
    for(int i=0;i<N;i++)
    {
        cin>>arry[i];
    }

    for(int i=0;i<N;i++)
    {
        sum = sum + arry[i];
        cout << (double)sum / (i+1) << endl;

    //cout<<avg;
    }

}


/*#include<iostream>
using namespace std;
int main(){
int n,num,i=0;
double avg,sum=0.0,a;
cin>>n;
//int n,num,i=0;
while(i<n)
{
    cin>>num;
    sum=sum+num;
    i++;
}
avg=sum/n;
a=avg-.0000000001;
cout<<a;
}
*/
