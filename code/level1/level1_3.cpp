//월간 코드 챌린지 시즌1
//두 개 뽑아서 더하기

#include <string.h>
#include <vector>

using namespace std;

int num[201];

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    memset(num, 0, sizeof(num));
    int size = numbers.size();
    
    for (int i = 0;i < size; i++)
    {
        for (int j = 0;j < size; j++)
        {
            if (i == j)
                continue ;
            num[numbers[i] + numbers[j]] = 1;
        }
    }
    
    for (int i = 0;i <= 200; i++)
    {
        if (num[i])
            answer.push_back(i);
    }
    
    return answer;
}

//ver.2 set 사용하기
/*
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> st;
    for(int i = 0;i<numbers.size();++i){
        for(int j = i+1 ; j< numbers.size();++j){
            st.insert(numbers[i] + numbers[j]);
        }
    }
    answer.assign(st.begin(), st.end());
    return answer;
}
*/