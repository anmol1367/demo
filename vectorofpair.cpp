#include <bits/stdc++.h>
using namespace std;

#define ll long long  
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define vll vector<ll> 
#define pll pair<ll,ll>
#define vpll vector<pll>
#define all(x) (x).begin(), (x).end()
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
const ll mod = 1e9 + 7;
void print(vector<pair<int,int>> &v){
    for(int i =0; i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main(){
    // first method --------------------------------------------------
    vector<pair<int,int>> v = {{1,2},{3,4}};
    print(v);

    // second method -------------------------------------------------

    int n;
    cin>>n;
     vector<pair<int,int>> v1;
     int x, y;
     for(int i=0; i<n;i++){
          cin>>x>>y;
        v1.push_back({x,y});
     }
       print(v1);
     

    return 0;

}