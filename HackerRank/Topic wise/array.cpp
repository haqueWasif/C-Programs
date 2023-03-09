#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, q, k, itm, x, y;
    cin>>n>>q;
    vector <int> a[n];
    for (int i=0; i < n; i++)
    {
        cin>>k;  
        for (int j=0; j < k; j++)
        {
            cin>>itm;
            a[i].push_back(itm);
        }   
    }
    int arr[q];
    for (k=0; k < q; k++)
    {
        cin>>x>>y;
        arr[k]=a[x][y];
    }
    for (int i=0; i < q; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}