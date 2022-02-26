class Solution {
    public int solution(int n) {
        int answer = 0;
        int n1st = 0;
        int n2nd = 1;
        
        for(int i=2; i<=n; i++){
            answer = n2nd + n1st;
            n1st = n2nd;
            n2nd = answer;
            if(answer <0 )
            {
                System.out.println(answer);
                System.out.println(i);
            }
        }
        
        return answer;
    }
}