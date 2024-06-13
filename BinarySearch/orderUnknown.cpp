#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int target)
{
    int start = 0, ans = -1, end = arr.size()-1,mid=0;
    bool isAsc = arr[start] < arr[end];
    while (start <= end)
    {
        
        mid = (end + start) / 2;
        if (arr[mid] > target)
        {
            if (isAsc){
                end = mid - 1;
            }
            else{
                start = mid + 1;     
            }
        }
        else if (arr[mid] < target)
        {
            if (isAsc){
                start = mid + 1; 
            }
            else{
                end = mid - 1;
            }
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int target = 5;
    int ans = BinarySearch(v, target);
    cout << ans<<endl;
    vector<int> x = {10,9,5,4,3,3,2};
    ans = BinarySearch(x, target);
    cout << ans;
}