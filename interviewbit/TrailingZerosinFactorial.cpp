/**
 * @input A : Integer
 * 
 * @Output Integer
 */

int trailingZeroes(int A)
{

    int fiveCount = A / 5;
    int five = 25;
    while (five <= A)
    {
        fiveCount += A / five;
        five = five * 5;
    }
    int tencount = 0;
    //   int ten = 100;
    //   while(ten<=A){
    //       tencount+=A/ten;
    //       ten = ten*10;
    //   }
    return fiveCount + tencount;
}
