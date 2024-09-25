#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> s;
  ll nu = 0;
  ll no = 0;
  ll ns = 0;
  ll np = 0;
  ll nc = 0;
  for (const auto& x : s) {
    if (x == 'u') ++nu;
    if (x == 'o') ++no;
    if (x == 's') ++ns;
    if (x == 'p') ++np;
    if (x == 'c') ++nc;
  }

  cout << min({nu, no, ns, np, nc});

  return 0;
}