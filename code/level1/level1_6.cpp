//해시
//완주하지 못한 선수

#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> um;
    string answer="";
    
    for (string name:participant)
        um[name]++;
    
    for (string name:completion)
        um[name]--;
    
    for (auto ret:um)
    {
        if (ret.second)
        {
            answer = ret.first;
            break ;
        }
    }
    return answer;
}

//정렬을 이용한 방법
/*
int size = completion.size();
    
sort(completion.begin(), completion.end());
sort(participant.begin(), participant.end());

for (int i = 0; i < size; i++)
{
    if (participant[i] != completion[i])
        return participant[i];
}
return participant[size];
*/