// https://leetcode.com/problems/subarray-sum-equals-k

public int SubarraySum(int[] nums, int k) {
	int N = nums.Length;
	int result = 0;
	long sum;
	for (int i = 0; i < N; i++)
	{
		sum = 0;
		for (int j = i; j < N; j++)
		{
			sum += (long)(nums[j]);
			if (sum == k)
				result++;
		}
	}
	return result;
}