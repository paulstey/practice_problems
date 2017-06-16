#include <iostream>
#include <vector>

int add_one(int n) {
    return n+1;
}


std::vector<int> add_one(std::vector<int> v) {
    int n = v.size();
    std::vector<int> u(n);

    for (int i = 0; i < n; i++) {
	u[i] = v[i] + 1;
    }
    return u;
}

int main() {
    int a = 137;
    int b = add_one(a);

    std::vector<int> w {1, 3, 7};
    std::vector<int> x = add_one(w);

    std::cout << "b is equal to: " << b << std::endl;

    for (int i = 0; i < 3; i++) {
	std::cout << "x_" << i << " is equal to: " << x[i] << std::endl;
    }
}
