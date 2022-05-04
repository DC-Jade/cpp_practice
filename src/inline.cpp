#include <stdio.h>

const double kpi = 3.14;

inline double CalculateArea(const double &radius) {
	return 2 * kpi * radius; 
}

void Test() {
	double radius, ans;
	while (scanf("%lf", &radius)) {
		ans = CalculateArea(radius);
		printf("%lf\n", ans);
	}
}

int main(int argc, char *argv[]) {
	Test();
}
