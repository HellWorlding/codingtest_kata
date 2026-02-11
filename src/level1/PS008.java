package level1;

public class PS008 {
    public int solution008(int angle) {
        int answer = 0;
        if(angle<90){
            answer=1;
        } else if(angle==90){
            answer=2;
        }else if(angle<180){
            answer=3;
        }else{
            answer=4;
        }
        return answer;
    }
}
