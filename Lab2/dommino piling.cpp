#include<iostream>

using namespace std;
int main()
{
    int N,M,ans;
    while(cin>>N>>M)
    {
        ans=N*(M/2)+M%2*(N/2);
        cout<<ans<<endl;

    }
    return 0;


}
