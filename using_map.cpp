#include <iostream>
#include <unordered_map>
#include <vector>



std::unordered_map<int, int> count_nums(std::vector<int> x) {
    int n = x.size();
    std::unordered_map<int, int> res;
    
    for (uint16_t i = 0; i < n; i++) {
	if (res.count(x[i]) == 0) {
	    res[x[i]] = 1;
	}
	else {
	    res[x[i]] = res[x[i]] + 1;
	}
    }
    return res;
}


int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 3, 4, 5, 6, 7, 1, 5, 6, 7};
    std::unordered_map<int, int> cnt = count_nums(v);
    for( const auto& i : cnt ) {
        std::cout << "Key:[" << i.first << "] Value:[" << i.second << "]\n";
    }
}

