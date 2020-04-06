#include <bits/stdc++.h>
using namespace std;

#define int long long
#define float double
#define double long double

#undef FLT_MAX
#define FLT_MAX DBL_MAX
#undef DBL_MAX
#define DBL_MAX LDBL_MAX

#define x first
#define y second
#define mp make_pair

#define all(v) v.begin(), v.end()
#define pb push_back

#define define_and_read_points(v, n) \
	Points v(n);                     \
	for (auto &i : P)                \
	cin >> i.x >> i.y

typedef pair<int, int> Point;
typedef vector<Point> Points;

inline float dist(Point &p1, Point &p2) {
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

float min_distance(Points::iterator beg, Points::iterator end) {
	size_t n(end - beg), mid(n / 2);
	if (n == 2)
		return dist(*beg, *(beg + 1));
	if (n == 3)
		return std::min(dist(*beg, *(beg + 1)), std::min(dist(*(beg + 1), *(beg + 2)), dist(*(beg + 2), *beg)));
	auto mid_point(*(beg + mid));
	auto d = std::min(min_distance(beg, beg + mid), min_distance(beg + mid, end));
	Points strip;
	for (auto i = beg; i != end; i++)
		if (abs(i->x - mid_point.x) < d)
			strip.pb(*i);
	sort(all(strip), [](auto &a, auto &b) {
		return a.y < b.y;
	});
	for (size_t i(0); i < strip.size(); i++)
		for (size_t j(i + 1); j < strip.size() and (strip[j].y - strip[i].y) < d; j++)
			d = std::min(d, dist(strip[i], strip[j]));
	return d;
}

int32_t main() {
	int n;
	cin >> n;
	define_and_read_points(P, n);
	sort(all(P));
	cout << fixed << setprecision(4) << min_distance(all(P));
	return 0;
}