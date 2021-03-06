// Problem https://open.kattis.com/problems/compoundwords
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

    vector<string> parts;
    string part;
    while(getline(cin, part))
    {
        istringstream iss(part);
        vector<string> results(istream_iterator<string>{iss},istream_iterator<string>());
        for(string res : results)
        {
            parts.PB(res);
        }
    }
    sort(parts.begin(), parts.end());

    VS dup;
    for(int i = 0; i < parts.size(); i++)
    {
        for(int j = 0; j < parts.size(); j++)
        {
            if(i != j)
            {
                dup.PB(parts[i]+parts[j]);
            }
        }
    }
    sort(dup.begin(), dup.end());
    string last;
    for(string s:dup)
    {
        if(s==last)
            continue;
        last=s;
        cout<<s<<"\n";
    }

    return 0;
}
