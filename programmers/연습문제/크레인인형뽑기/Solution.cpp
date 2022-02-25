#include <string>
#include <vector>

using namespace std;
int GetTopColum(int idx, vector<vector<int>> *bord, int size);

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int matSize = board.size();
    vector<int> busket;
    for(int i = 0 ; i< moves.size(); i++)
    {
        int Val = GetTopColum(moves[i]-1, &board, matSize );
        printf("%d\n", Val);
        if(Val == 0)
            continue;
        else if(busket.size() > 0)
        {
            if(Val == busket.back())
            {
                printf("POP!!\n");
                busket.pop_back();
                answer++;
            }
            else
            {
                busket.push_back(Val);
            }
        }
        else
        {
            busket.push_back(Val);
        }
    }
    
    return answer*2;
}
int GetTopColum(int idx, vector<vector<int>> *bord, int size)
{
    int reVal = 0;

    for(int i = 0; i < size; i++)
    {
        int* tmpVal {0};
        tmpVal = &bord->at(i).at(idx);
        if(*tmpVal == 0)
            continue;
        else
        {
            reVal = *tmpVal;
            *tmpVal = 0;  
            break;
        }
    }
    return reVal;
}