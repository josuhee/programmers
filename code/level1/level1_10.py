# 신고결과 받

from collections import defaultdict

def solution(id_list, reports, k):
    answer = [0]*len(id_list)
    sH=defaultdict(set)
    stoped=defaultdict(int)
    
    for report in reports:
        a, b = report.split(" ")
        if b not in sH[a]:
            stoped[b]+=1
        sH[a].add(b)
    
    for user in stoped:
        if stoped[user] >= k:
            for id in id_list:
                if user in sH[id]:
                    answer[id_list.index(id)]+=1            

    return answer
