#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> prime;
ll sum = 0;

void pri(vector<ll>& prime)
{
    int n = 45000;
    int* arr = new int[n];

    for (int i = 2; i < n; i++)
        arr[i] = i;

    arr[0] = 0;
    arr[1] = 0;

    for (int i = 2; i < n; i++)
    {
        if (arr[i] == 0) continue;
        for (int j = 2 * i; j < n; j += i)
            arr[j] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            prime.push_back(arr[i]);
    }
}

ll sq(ll limit, ll max_iter, ll index, ll tmp, int depth)
{
    if (tmp > limit) return 0;

    ll sum = 0;
    for (ll i = index; i < max_iter; i++)
    {
        if (tmp * prime[i] * prime[i] > limit)
            break;

        ll sum_t = (ll)((long double)limit / (tmp * prime[i] * prime[i]));
        if ((depth % 2) == 0)
            sum += sum_t;
        else
            sum -= sum_t;

        sum += sq(limit, max_iter, i + 1, tmp * prime[i] * prime[i], depth + 1);
    }
    return sum;
}

ll sss(ll n, ll& iter)
{
    ll ss;

    while ((prime[iter] * prime[iter]) <= n)
        iter++;
    ss = n - sq(n, iter, 0, 1, 0);
    return ss;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;

    ll iter = 0;
    pri(prime);

    int n = k;
    ll ss = 0;

    while (true)
    {
        iter = 0;
        ss = sss(n, iter);

        if (ss == k)
        {
            cout << n << '\n';
            break;
        }
        n += k - ss;
    }
	
    return 0;
}