#include <iostream>
#include <string>


bool IsKPeriodic(std::string str, int K) {
    int length = str.length();
    if (length % K != 0) {
        return false;
    }
    std::string pat = str.substr(0, K);
    for (int i = K; i < length; i += K) {
        if (str.substr(i, K) != pat) {
            return false;
        }
        return true;
    }
}

int main() {

    std::string k = "acacacacacacac";
    if (IsKPeriodic(k, 2)) {
        std::cout << "true";
    }
    else { std::cout << "false"; }

    std::cout<<std::endl;

    std::string h = "abcdabcdabcd";
    if (IsKPeriodic(h, 4)) {
        std::cout << "true";
    }
    else { std::cout << "false"; }

    std::cout << std::endl;

    if (IsKPeriodic(h, 3)) {
        std::cout << "true";
    }
    else { std::cout << "false"; }

    return 0;
}