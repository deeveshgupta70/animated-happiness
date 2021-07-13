#include<bits/stdc++.h>

using namespace std;

#define Fast1 ios_base::sync_with_stdio(0)
#define Fast2 cin.tie(0)
#define Fast3 cout.tie(0)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef short int SI;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair


vector< vi > subsets;

    void generateSubsets(vector<int> &subset,int i, vector<int> &data){
    if( i == data.size()){
        subsets.PB(subset);
// if(find(subsets.begin(),subsets.end(),subset) == subsets.end()) subsets.PB(subset); // for duplicate elements
        return ;
    }

    generateSubsets(subset,i+1,data);
    subset.PB(data[i]);
    generateSubsets(subset,i+1,data);
    subset.POB();
}

int main()
{
    Fast1;
    Fast2;
    Fast3;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vi data;
        FOR(i,n){
            int x;
            cin>>x;
            data.PB(x);
        }
        /* for duplicate elements use sort(data.begin(),data.end())*/
        vi empty;
        generateSubsets(empty,0,data);

        for(auto subset : subsets){
            for( auto ele : subset){
                cout<<ele<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}

 
