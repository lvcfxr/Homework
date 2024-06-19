#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <time.h>
#include <list>

using namespace std;


int main()
{
    vector<int> nums = { 1,2,3,4,5,6,7,8,9,10 };

    
    cout << "\nvector: ";

    for (auto it = nums.begin(); it != nums.end(); it++) {
        cout << *it << ' ';
    }

    list<int> nums1 = { 1,2,3,4,5,6,7,8,9,10 };

    cout << "\nlist: ";

    for (auto it = nums1.rbegin(); it != nums1.rend(); ++it) {
        cout << *it << ' ';
    }

    cout << "\nvector const iterator: ";

    for (const auto& el : nums) {
        cout << el << ' ';
    }
    
   

    return 0;
}