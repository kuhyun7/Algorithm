def solution(lottos, win_nums):
    answer = [];
    zeroCount =0;
    matchCount = 0;
    lottos.sort();
    win_nums.sort();
    for i in range(0, 6):
        print(zeroCount)
        for j in range(zeroCount, 6):
            if(lottos[j] == 0):
                zeroCount+=1;
            elif (lottos[j] < win_nums[i]):
                continue;
            elif (lottos[j] == win_nums[i]):
                matchCount+=1;
            else:
                break;
    if ( 7 - (matchCount + zeroCount)   > 5 ):
        answer.append(6);
    else :
        answer.append(7-(matchCount + zeroCount));
    
    if ( 7 - matchCount > 5 ):
        answer.append(6);
    else:
        answer.append(7-matchCount);
    
    
    return answer