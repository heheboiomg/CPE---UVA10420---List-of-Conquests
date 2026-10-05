//UVA10420 - List of Conquests

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    map<string,int> m;
    m.clear();

    while(n--){
        string country,name;
        cin>>country;
        m[country]++;
        getline(cin,name);
    }

    for(auto& s:m){
        cout<<s.first<<" "<<s.second<<endl;
    }

    return 0;
}