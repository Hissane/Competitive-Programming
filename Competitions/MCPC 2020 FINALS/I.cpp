#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define clr(arr) memset(arr, 0, sizeof(arr))
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))

using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using pii = pair<int, int>;
using pll = pair<long, long>;

const ll mod = 1000000007;

template <class T>
T gcd(T a, T b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
template <class T>
T lcm(T a, T b) { return (a * b) / gcd(a, b); }
template <class T>
string converter(T n)
{
    stringstream x;
    x << n;
    return x.str();
}

// void swapi(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
//void swaps (char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}

/*
parzival69
*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("one.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n = 0, m, k, t, x, y, ai = 0, aj = 0, swaps = 0;
    cin >> n;
    ll a[n];
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    ll equal = -1;
    rep(i, 1, n)
    {
        if (a[i] < a[i - 1])
        {
            swaps++;
            aj == 0 ? aj = i : ai = i;
        }
        if (equal == -1 && a[i] == a[i - 1])
        {
            equal = i - 1;
        }
    }
    if (swaps == 0)
    {
        cout << "YES";
        return 0;
    }
    if (swaps > 2)
    {
        cout << "NO";
        return 0;
    }
    if (swaps == 2)
    {
        swap(a[aj - 1], a[ai]);
    }
    else if (swaps == 1 && equal == -1)
    {
        swap(a[aj - 1], a[aj]);
    }
    else if (swaps == 1 && equal != -1)
    {
        swap(a[equal], a[aj]);
    }
    rep(i, 1, n)
    {
        if (a[i] < a[i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define clr(arr) memset(arr, 0, sizeof(arr))
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))

using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using pii = pair<int, int>;
using pll = pair<long, long>;

const ll mod = 1000000007;

template <class T>
T gcd(T a, T b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
template <class T>
T lcm(T a, T b) { return (a * b) / gcd(a, b); }
template <class T>
string converter(T n)
{
    stringstream x;
    x << n;
    return x.str();
}

// void swapi(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
//void swaps (char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}

/*
parzival69
*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("one.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n = 0, m, k, t, x, y, ai = 0, aj = 0, swaps = 0;
    cin >> n;
    ll a[n];
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    ll equal = -1;
    rep(i, 1, n)
    {
        if (a[i] < a[i - 1])
        {
            swaps++;
            aj == 0 ? aj = i : ai = i;
        }
        if (equal == -1 && a[i] == a[i - 1])
        {
            equal = i - 1;
        }
    }
    if (swaps == 0)
    {
        cout << "YES";
        return 0;
    }
    if (swaps > 2)
    {
        cout << "NO";
        return 0;
    }
    if (swaps == 2)
    {
        swap(a[aj - 1], a[ai]);
    }
    else if (swaps == 1 && equal == -1)
    {
        swap(a[aj - 1], a[aj]);
    }
    else if (swaps == 1 && equal != -1)
    {
        swap(a[equal], a[aj]);
    }
    rep(i, 1, n)
    {
        if (a[i] < a[i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}