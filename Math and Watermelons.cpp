#include<iostream>
using namespace std;

int main()
{
    int M,K,sum;
    cin>>M>>K;
    if(K<M<1000000 && 0<K<100){
    //int arry[100000];
    for(int i=0;i<M;i++)
    {
        M=M%K;
    //cout<<M;
        //cout<<arry[i];
    }
    cout<<M;
    }

}
    /*for(int i=0;i<K;i++)
    {
     //sum=M/K;
     M=M%K;
    }
    //M=M%K;
    cout<<M;


}*/
