/*
median of multiple sorted arrays
*/
eg: 3 arrays
step 1: start looking for the three medians of the three arrays,
step 2: erase min median(i-th) left and erase max median(j-th) right, make sure erase min(i,j) for both sides, if multiple arrays share min/max medians, remove any one of them
step3 3: repeat for all array until some arrays drop to zero, and get the median from left numbers in two arrays.

eg:
[3,7,9],[4,8,15],[2,3,9](medians 7,8,3) --> 
[3,7,9],[4,8],[3,9](medians 7,6,6) -->
[3,7],[8],[3,9](median 5,8,6) -->
[7],[0],[3,9] --> 7 is the median

