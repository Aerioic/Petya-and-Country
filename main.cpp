#include <iostream>
#include <vector>
using namespace std;


int main() {
    int j;
    cin >> j;
    vector<int> height;
    for (int i = 0; i < j; i++) {
        int z;
        cin >> z;
        height.push_back(z);
    }
    int max = 0;

    for (int x = 0; x < j; x++) {
        int current_max = 0;
        for (int i = 1; i < j; i++) {
            int left = j - i;
            int right = j + i;
            bool over_left = false;
            bool over_right = false;

            if (over_left || height[left] > height[left + 1] || left < 0)  over_left = true;  
            if (over_left || height[right] > height[right - 1] || right > j - 1)  over_right = true;        

            if (!over_left) current_max++;
            if (!over_right) current_max++;
        }
        
        if (current_max > max)
        {
            max = current_max;
        }  
    }
    cout << max + 1;
    
    return 1;
}