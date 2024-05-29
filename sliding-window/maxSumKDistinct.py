'''

You are given an integer array nums and an integer k. 
Find the maximum subarray sum of all the subarrays of 
nums that meet the following conditions:

The length of the subarray is k, and
All the elements of the subarray are distinct.
Return the maximum subarray sum of all the subarrays 
that meet the conditions. If no subarray meets the 
conditions, return 0.
'''

def maximumSubarraySum(array, k):
    n = len(array)
    if n < k:
        return 0

    window_sum = 0
    max_sum = float('-inf')
    seen = {}

    # Initialize the first window
    for i in range(k):
        window_sum += array[i]
        if array[i] in seen:
            seen[array[i]] += 1
        else:
            seen[array[i]] = 1

    # Check if the initial window has all unique elements
    if len(seen) == k:
        max_sum = window_sum

    # Slide the window from start to end
    for i in range(k, n):
        window_sum += array[i] - array[i - k]

        # Add the new element to the seen map
        if array[i] in seen:
            seen[array[i]] += 1
        else:
            seen[array[i]] = 1

        # Remove the oldest element from the seen map
        if seen[array[i - k]] == 1:
            del seen[array[i - k]]
        else:
            seen[array[i - k]] -= 1

        # Check if the current window has all unique elements
        if len(seen) == k:
            max_sum = max(max_sum, window_sum)

    return 0 if max_sum == float('-inf') else max_sum

print(maximumSubarraySum([2,1,3,4,2,3,1,2],4))
print(maximumSubarraySum([2,1,3,2,2,3,1,2],4))
