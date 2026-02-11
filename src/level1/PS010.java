package level1;

public class PS010 {
    public double solution010(int[] numbers) {
        double answer = 0;
        int cnt=numbers.length;
        int sum=0;
        for(int k:numbers){
            sum+=k;
        }
        answer=(double)sum/cnt;
        return answer;
    }
}
