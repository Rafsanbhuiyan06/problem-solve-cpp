#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int n,siz;
    cin>>siz;
    for(int i = 0; i < siz; i++){
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    for(auto i : v)
        cout<<i<< " ";
    return 0;
}
