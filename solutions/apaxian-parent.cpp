// Problem https://open.kattis.com/problems/apaxianparent
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>

using namespace std;

#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string y,p;
    cin>>y>>p;
    char l = y[y.size()-1];
    if(l=='e')
        cout<<y<<"x"<<p;
    else if(l=='a'||l=='i'||l=='o'||l=='u')
        cout<<y.substr(0,y.size()-1)<<"ex"<<p;
    else if(l=='x'&&y[y.size()-2]=='e')
        cout<<y.substr(0,y.size()-2)<<"ex"<<p;
    else
        cout<<y<<"ex"<<p;

    return 0;
}