#include <iostream>
#include <list>
#include <algorithm>
#include <time.h>

using namespace std;

int main() {
    list<int> nums1(4, 0);
    list<int> nums2(4, 0);

    
    srand(time(0));

    for (auto it1 = nums1.begin(); it1 != nums1.end(); ++it1) {
        *it1 = rand() % 100;
    }

    
    
    for (auto it2 = nums2.begin(); it2 != nums2.end(); ++it2) {
        *it2 = rand() % 100;
    }

    
    cout << "\nFirst list: ";
    for (auto it1 = nums1.begin(); it1 != nums1.end(); ++it1) {
        cout << *it1 << ' ';
    }
    nums1.sort();
    
    cout << "\nSecond list: ";
    for (auto it2 = nums2.begin(); it2 != nums2.end(); ++it2) {
        cout << *it2 << ' ';
    }
    nums2.sort();
    
    cout << "\nFirst list after sort: ";
    for (auto it1 = nums1.begin(); it1 != nums1.end(); ++it1) {
        cout << *it1 << ' ';
    }

    cout << "\nSecond list after sort: ";
    for (auto it2 = nums2.begin(); it2 != nums2.end(); ++it2) {
        cout << *it2 << ' ';
    }

    nums1.merge(nums2);
    nums1.sort();
    
    cout << "\nSorted list after merge: ";
    for (auto it1 = nums1.begin(); it1 != nums1.end(); ++it1) {
        cout << *it1 << ' ';
    }
    cout << endl;

    return 0;
}
