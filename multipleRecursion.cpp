//Multiple Recursion 
#include<bits/stdc++.h>
int fibonacciSeries(int n)
{
    if   (n<=1) return n;
    int firstValue=fibonacciSeries(n-1);//First this function will get called recursively.
    int secondValue=fibonacciSeries(n-2);//Second this function will get called recursively.
    return firstValue+secondValue;
    //Time complexity= Each recursion will have two calls hence the time complexity for this will become 2^n.
    //Space Complexity=nm
}
using namespace std;
int main   ()
{
    int n;
    cin>>n;
    int ans=fibonacciSeries(n);
    cout<<ans;
    return 0;
}