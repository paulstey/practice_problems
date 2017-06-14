

#include <iostream>
#include <string>

bool is_palindrome(std::string str) {
    bool res = true;
    int j = str.size() - 1;
    int i = 0;
    while (j > i) {
	if (str[i] != str[j]) {
	    res = false;
	    break;
	}
	i++;
	j--;
    }
    return res;
}

int main(int argc, char* argv[]) {
    std::string s = static_cast<std::string>(argv[1]);
    bool soln = is_palindrome(s);

    std::string res;

    if (soln) {
	res = "this is a palindrome";
    }
    else {
	res = "this is NOT a palindrome";
    }
    std::cout << res << std::endl;
}

