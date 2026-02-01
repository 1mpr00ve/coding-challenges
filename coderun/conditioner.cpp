#include <iostream>
// Time complexity: O(1) - constant number of operations (reads and a few comparisons)
// Space complexity: O(1) - only a fixed-size vector of size 2 and a few variables
#include <vector>

int main() 
{
    std::vector<int> arr(2);
    for (int i = 0; i < 2; i++) {
        std::cin >> arr[i];
    }

	std::string n;
	std::cin >> n;
    
    if("heat" == n) {
            if(arr[0] < arr[1]) {
                std::cout << arr[1] << std::endl;
            } 
            else {
                std::cout << arr[0] << std::endl;
            }
            } 
            else if ("freeze" == n) {
                if(arr[0] > arr[1]) {
                std::cout << arr[1] << std::endl;
            } 
            else {
                std::cout << arr[0] << std::endl;
            }
            }
            else if ("auto" == n) {
                std::cout << arr[1] << std::endl;
            }
            else if ( "fan" == n) {
                std::cout << arr[0] << std::endl;
            }
    

	return 0;
}
