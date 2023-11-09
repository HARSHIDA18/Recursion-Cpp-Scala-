#include<bits/stdc++.h>
using namespace std;
void reverseCount(int i,int range)//Through backTracking
{
    if   (i>range) return;
    reverseCount(i+1,range);
    cout<<i<<"   ";
}

void reverseCount1(int i,int range)
{
    if   (i>range) return;
    cout<<range<<"   ";
    reverseCount1(i,range-1);
}
int main   ()
{
    int range;
    cin>>range;
    reverseCount(1,range);
    reverseCount1(1,range);
    return 0;
}