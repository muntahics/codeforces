#include<iostream>


using namespace std;
int main()
{
    int n,i,a,b,c,cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;

        if(a==0&&b==1&&c==1 || a==1&&b==1&&c==0 || a==1&&b==0&&c==1 || a==1&&b==1&&c==1 )
        {
            cnt=cnt+1;

        }


    }
    cout<<cnt<<endl;


    return 0;

}