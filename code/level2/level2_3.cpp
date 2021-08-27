//스택/큐
//기능개발

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int cnt;
    
    while (!progresses.empty())
    {
        int size = speeds.size();
        
        for (int i = 0; i < size; i++)
            progresses[i] += speeds[i];
        if (progresses[0] >= 100)
        {
            cnt = 0;
            while (!progresses.empty())
            {
                if (progresses[0] >= 100)
                {
                    cnt++;
                    progresses.erase(progresses.begin());
                    speeds.erase(speeds.begin());
                }
                else break ;
            }
            answer.push_back(cnt);
        }
    }
    return answer;
}