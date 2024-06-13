#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int target)
{
    int start = 0, ans = -1, end = arr.size()-1,mid=0,count=0;
    while (start <= end)
    {
        count++;
        if (count==10){
            return 0;
        }
        mid = (end + start) / 2;
        
        // cout<<" "<<start<<" "<<mid<<" "<<end<<endl;
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
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
    cout << ans;
}