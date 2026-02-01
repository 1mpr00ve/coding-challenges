#include <iostream>
// Time complexity: O(n) where n is the number of integers in the input (single pass to count local maxima)
// Space complexity: O(n) to store the input numbers in a vector
#include <vector>
#include <string>
#include <sstream>

int main() 
{
    std::string line;
    std::getline(std::cin, line);
    
    std::istringstream iss(line);
    std::vector<int> arr;
    int num;
    
    
    while (iss >> num) {
        arr.push_back(num);
    }
    
    int count = 0;

    for (int i = 1; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            count++;
        }
    }
    
    std::cout << count << std::endl;
    return 0;
}
