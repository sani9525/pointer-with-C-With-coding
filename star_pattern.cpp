#include <iostream>
using namespace std;
int main ()
{
    int n;
    int i=1;
    cin>>n;
    while(i<=n)
    {
        int j;
        while(j<=n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}