#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter number of column and rows: ";
    cin>>n>>m;
    cout<<"\nEnter the elements : ";
    int a[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>a[i][j];
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<m;j++)
        cout<<" "<<a[i][j];
    }
    return 0;
}
