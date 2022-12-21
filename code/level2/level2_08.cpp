// Greedy
// 구명보트

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    
    int left = 0, rigth = people.size() - 1;
    while (left <= rigth) {
        if (people[left] + people[rigth] > limit) {
            rigth--;
        } else {
            left++;
            rigth--;
        }
        answer++;
    }
    return answer;
}
