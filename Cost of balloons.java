/*echo "# Basic-Programming" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M master
git remote add origin https://github.com/AkankshaSingh14/Basic-Programming.git
git push -u origin master*/


import java.util.*;
class TestClass 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int T = input.nextInt();
        while(T > 0)
        {
            int gBalloon = input.nextInt();
            int pBalloon = input.nextInt();
            int n = input.nextInt();
            int solveA = 0;
            int solveB = 0;
            for(int i = 0; i < n; i++ )
            {
                int a = input.nextInt();
                int b = input.nextInt();
                if (a == 1)
                    solveA++;
                if (b == 1)
                    solveB++;
            }
    int x = Math.min(solveA, solveB)*Math.max(gBalloon, pBalloon);
    int y = Math.max(solveA, solveB)*Math.min(gBalloon, pBalloon);
    System.out.println( x + y );
    T--;
    }

 }

}
                
