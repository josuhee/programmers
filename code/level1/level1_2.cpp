//찾아라 프로그래밍 마에스터
//폰켓몬

#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_set<int> s(nums.begin(), nums.end());
    answer = s.size() > nums.size() / 2 ? nums.size() / 2 : s.size();
    return answer;
}