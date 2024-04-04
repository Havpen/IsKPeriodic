# IsKPeriodic Function

This C++ program demonstrates the `IsKPeriodic` function, which checks if a given string is K-periodic, meaning it repeats every K characters.

## Function Description

The `IsKPeriodic` function takes two parameters: a string `str` and an integer `K`. It returns `true` if the string is K-periodic, and `false` otherwise.

### Parameters

- `str`: The input string to check.
- `K`: The period to check for.

## How It Works

1. The function first checks if the length of the string is divisible by K. If it's not, it returns `false` because the string cannot be K-periodic.
2. Then, it extracts the first K characters from the string as the pattern to compare with.
3. It iterates through the string in steps of K and compares each substring of length K with the pattern.
4. If any substring doesn't match the pattern, the function returns `false`.
5. If all substrings match the pattern, the function returns `true`.

## Example Usage

```cpp
#include <iostream>
#include <string>

bool IsKPeriodic(std::string str, int K) {
    // Function code here...
}

int main() {
    std::string k = "acacacacacacac";
    if (IsKPeriodic(k, 2)) {
        std::cout << "The string is 2-periodic." << std::endl;
    }
    else {
        std::cout << "The string is not 2-periodic." << std::endl;
    }

    // More examples...

    return 0;
}