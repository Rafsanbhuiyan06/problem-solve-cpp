/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int siz, value;
    cin>>siz;

    for(int i = 0; i < siz; i++){
        cin>>value;
        v.push_back(value);
    }
    int s1, s2;
    cin>>s1>>s2;
    v.erase(v.begin()+s1-1, v.begin()+s2-1);

    cout<<v.size()<<endl;
    for(auto i : v)
        cout<<i << " ";
    cout<<endl;
    return 0;
}*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    vector<int> values, values2;
    int siz, value;
    cin>>siz;

    for(int i = 0; i < siz; i++){
        cin>>value;
        values.push_back(value);
    }
    values.erase(find(values.begin(), values.begin(), siz));//Have to delete size first input if it is in the vector

    cin>>siz;
    for(int i = 0; i < siz; i++){
        cin>>value;
        values2.push_back(value);
    }
    for(auto val: values2){
        values.erase(find(values.begin(), values.begin(), val));
    }

    cout<<values.size()<<endl;
    for(auto i : values){
       cout<<i << " ";
    }
    cout<<endl;
}
