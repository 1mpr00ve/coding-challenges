#include <iostream>
// Time complexity: O(1) - constant number of comparisons to check triangle inequality
// Space complexity: O(1) - only three integer variables used

int main() 
{
	int a, b, c;
	std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if ( a+b > c && a+c > b && b+c > a) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

	

	return 0;
}
