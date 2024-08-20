#include "bits-stdc++.h"

using namespace std;

#define ll long long

bool as_sort(pair<string,ll>& a, pair<string,ll>& b) {
    if (a.second != b.second) {
        return b.second < a.second;
    } else {
        return a.first < b.first;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    map<string, ll> town_voites;
    for (int i = 0; i < n; ++i) {
        ll num;
        string town;
        cin >> town >> num;
        town_voites[town] = num;  
    }

    ll m;
    cin >> m;

    map<string, map<string, ll>> votes;
    set<string> all_cond;

    for (ll i = 0; i < m; ++i) {
        string state, cond;
        cin >> state >> cond;
        votes[state][cond] += 1;
        all_cond.insert(cond);
    }

    map<string, ll> final_votes;

    for (auto& [state, cond_map] : votes) {
        ll max_v = 0;
        string winner;
        for (auto& [cond, count] : cond_map) {
            if (count > max_v || (count == max_v && cond < winner)) {
                winner = cond;
                max_v = count;
            }
        }

        final_votes[winner] += town_voites[state];
    }

    for (auto& cond : all_cond) {
        if (final_votes.find(cond) == final_votes.end()) {
            final_votes[cond] = 0;
        }
    }

    vector<pair<string, ll>> Sorted_v(final_votes.begin(), final_votes.end());
    sort(Sorted_v.begin(), Sorted_v.end(), as_sort);

    for (auto& [cond, voites] : Sorted_v) {
        cout << cond << " " << voites << endl;
    }

    return 0;
}
