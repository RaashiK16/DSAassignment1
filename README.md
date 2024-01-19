# DSAassignment1

## Question 1
The files containing the solution to question 1 have been uploaded to this repository.

## Question 2 

https://leetcode.com/problems/kth-largest-element-in-an-array/solutions/4593887/solution-for-question-2/
### Approach
We are here using a min-heap of size k. Hence, we ensure that the smallest of the k largest elements is always on the top of the heap.

### Complexity 
- Time Complexity - O(nlogk) because each of the n elements is processed once. However, heap operations take O(log⁡k) time, leading to an overall complexity of O(nlog⁡k)
- Space Complexity - O(k) because the solution uses a heap with a maximum of k elements.

![Screenshot 2024-01-19 223422](https://github.com/RaashiK16/DSAassignment1/assets/126188705/0f3f051d-2feb-4998-82ee-11446e859237)



### Question 3

https://leetcode.com/problems/3sum-closest/solutions/4593970/solution-for-question-3/
### Approach
We first sort the vector for our ease. If sum is greater then target, but we need sum closest, that is ,the minimum sum greater than equal to target. We hence use the two pointer approach to solve this question.
### Complexity 
- Time Complexity - O(n^2)
- Space Complexity - O(1)

![Screenshot 2024-01-19 225513](https://github.com/RaashiK16/DSAassignment1/assets/126188705/27926eec-8172-4066-8f7f-1ace63515087)



### Question 4

https://leetcode.com/problems/jump-game/solutions/4594074/solution-for-question-4/
### Approach
We traverse through the array and at each index we check if the jump at that step is equal to the end of the array.

### Complexity 
- Time Complexity - O(n)
- Space Complexity - O(1)

![Screenshot 2024-01-19 230334](https://github.com/RaashiK16/DSAassignment1/assets/126188705/e5f111dc-39c2-4b72-b29e-0eaac7951eeb)




