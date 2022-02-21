import java.util.Arrays;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        int flag = 0;
        Arrays.sort(participant);
        Arrays.sort(completion);
        for(int i=0; i < completion.length ; i++)
        {
            if(!participant[i].equals(completion[i])) 
            {
                answer = participant[i];
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            answer = participant[participant.length-1];
        return answer;
    }
}