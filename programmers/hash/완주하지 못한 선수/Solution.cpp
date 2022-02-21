#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    int p_size = participant.size();
    int c_size = completion.size();
    vector<string>::iterator it = participant.begin();
    
    for(int i = 0 ; i < c_size ; i++ ){
        for(int j = 0 ; j < p_size ; j++){  
            if(participant[j] == completion[i]){
                participant.erase(it + j);
                p_size = participant.size();
                break;
            }
        }       
    };
    for(int i = 0 ; i < p_size ; i++){
        answer = answer + participant[i];
    }
 
    
    
    return answer;
}