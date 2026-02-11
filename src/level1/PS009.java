package level1;

public class PS009 {
    public int solution009(int n) {
        int answer = 0;
        // biggest even num count
        n/=2;
        answer=n*(n+1);


        return answer;
    }
}
