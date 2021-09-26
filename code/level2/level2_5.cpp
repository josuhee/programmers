//위클리 챌린지
//5주차_모음사전

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> v;
string alpha="AEIOU";
char str[6];

void dfs(int idx, int cnt)
{
    string s_str(str);
    s_str = s_str.substr(0, cnt);
    v.push_back(s_str);

    if (idx == 5)
        return ;
   
    for (int i = 0; i < 5;i++)
    {
        str[idx] = alpha[i];
        dfs(idx + 1, cnt + 1);
    }
}

int solution(string word) {
    int answer = 0;
    dfs(0, 0);
    
    for (int i = 0;;i++)
    {
        if (v[i] == word)
        {
            answer = i;
            break ;
        }
    }
    return answer;
}


/*
#include <string>

using namespace std;

int solution(string word) {
    string v = string("AEIOU");
    int a = word.size();

    for(int i = 0, b = 1; i < word.size(); i++, b *= 5)
        a += v.rfind(word[i]) * 781 / b;

    return a;
}

*/