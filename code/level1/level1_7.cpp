//Summer/Winter Coding(~2018)
//소수 만들기

#include <vector>
#include <iostream>
using namespace std;

int ft_is_prime(int nb)
{
	long long i;

	i = 5;
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i++;
	}
	return (1);
}

int solution(vector<int> nums) {
    int size = nums.size();
    int answer = 0;
    
    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (ft_is_prime(sum))
                    answer++;
            }
        }
    }

    return answer;
}