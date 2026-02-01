#include <iostream>
// Time complexity: O(n) where n is length of the input number string (we scan it once)
// Space complexity: O(n) for the input string storage, O(1) extra (unordered_set capped by 10 digits)
#include <vector>
#include <unordered_set>
#include <string>

int main() 
{
    std::vector<int> arr(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> arr[i];
    }

  int result = 0;
    std::string number;
  std::cin >> number;
  
    std::unordered_set<int> digits;
    for (char c : number) {
    digits.insert(c - '0');
    }

    for (int digit : digits) {
        if ( digit != arr[0] && digit != arr[1] && digit != arr[2]) {
            result++;
        }
    }

    std::cout << result << std::endl;

  return 0;
}
