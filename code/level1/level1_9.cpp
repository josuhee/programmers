//정렬
//K번째수

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> tmp;
    int size = array.size();
    int tc = commands.size();
    
    for (int i = 0; i < tc; i++)
    {
        // step 1
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
            tmp.push_back(array[j]);
        
        // step 2
        sort(tmp.begin(), tmp.end());
        
        // result
        answer.push_back(tmp[commands[i][2] - 1]);
        tmp.clear();
    }
    return answer;
}