#include<iostream>
using namespace std;

/*void dis()
{
    int N,D;
    if(N>0 && N<100){
    if(D>0 && D<100)
        {
            cin>>N>>D;
        }
    }
}*/



int main()
{
    //dis();
    int N,D;
    if(1<N<100 && 1<D<100)
    {
        cin>>N>>D;
    }


    int W=N/D;
     N=N%D;
    int M=D;

    cout<<W<<" "<<N<<" "<<M;
}
