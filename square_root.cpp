#include <iostream>

int square_root(int n) {
    int soln = 1;
    if (n == 0) {
        return 0;
    }
    else {
	for (int i = 1; i < n; i++) {
	    if (i*i == n) {
		soln = i;
		break;
	    }
	    else if (i*i > n) {
		soln = i - 1;
		break;
	    }
	}
    }
    return soln;
}

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    int soln = square_root(n);
    std::cout << soln << std::endl;
}

