#include<bits/stdc++.h>
using namespace std;
void printSubsequence(int indx,vector<int>& vt,int* arr,int n)
{
    if   (indx>=n)
    {
        for   (auto& it:vt)
        {
            cout<<it;
        }
        cout<<endl;
        return;
    }

    vt.push_back(arr[indx]);
    printSubsequence(indx+1,vt,arr,n);//This is taking the element into the space
    vt.pop_back();
    printSubsequence(indx+1,vt,arr,n);//This is not taking element into the space
}
int main   ()
{
    int arr[]={3,2,1};
    int n=3;
    vector<int> vt;
    printSubsequence(0,vt,arr,n);
    return 0;
}