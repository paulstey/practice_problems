// Square Root of Integer
// Author: Paul Stey
// Date: 2017-06-03
// CXXFLAGS:
// Description:
//    Given an integer in the command line argument,
//    this program returns the square root (or its floor).

#include <iostream>

int square_root(int n) {
    if (n == 0 or n == 1) {
	return n;
    }
    int square = 1, i = 1, res = 1;
    while (true) {
	if (square == n) {
	    res =  i;
	    break;
	}
	else if (square > n) {
	    res = i-1;
	    break;
	}
	i++;
	square = i*i;
    }
    return res;
}


int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    int soln = square_root(n);
    std::cout << soln << std::endl;
}

