#include <iostream>
// Time complexity: O(n) - each element is pushed at most once using a monotonic stack
// Space complexity: O(n) - arrays and stack of size up to n
#include <vector>
#include <stack>

int main() 
{
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    std::vector<int> arr2(n);
    std::stack<int> stack;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (int i = n-1; i >= 0 ; i--) {
        while (!stack.empty() && arr[stack.top()] >= arr[i]) {
        stack.pop();
        }
        
        if (stack.empty()) {
            arr2[i] = -1;
        } else {
            arr2[i] = stack.top();
        }
        stack.push(i);
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr2[i] << " ";
    }

    return 0;
}