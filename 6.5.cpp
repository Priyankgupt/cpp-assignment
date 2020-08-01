#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,r,c;

    cout<<"enter number of rows&column"<<endl;
   cin>>r>>c;
    for(i=1;i<=r;i++)
    {
        for(j=i;j<=c;j++)
        {
            cout<<j;
        }
        for(j=i-1;j>=1;j--)
        {
            cout<<j;
        }
       cout<<"\n";
    }
}

