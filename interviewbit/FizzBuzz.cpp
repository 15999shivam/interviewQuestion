/**
 * @input A : Integer
 * 
 * @Output string array. You need to malloc memory. 
 *   Fill in len1 as number of strings. Make sure every string ends with null character
 */
char **fizzBuzz(int A, int *len1)
{
    // char **arr = (char **) malloc(sizeof(char*)*A);
    int i;
    for (i = 1; i <= A; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            // arr[i-1] = (char*)malloc(sizeof(char)*8);
            // arr[i-1] = "FizzBuzz";
            printf("FizzBuzz ");
        }
        else if (i % 3 == 0)
        {
            // arr[i-1] = (char*)malloc(sizeof(char)*4);
            // arr[i-1] = "Fizz";
            printf("Fizz ");
        }
        else if (i % 5 == 0)
        {
            //   arr[i-1] = (char*)malloc(sizeof(char)*4);
            // arr[i-1] = "Buzz";
            printf("Buzz ");
        }
        else
        {
            // int temp = i;
            // int count= 0;
            // while(temp!=0){
            //     count++;
            //     temp/=10;
            // }
            // arr[i-1] = (char*)malloc(sizeof(char)*count);
            // temp = i;
            // int m;
            // for(m=count-1;m>=0;m--){
            //     arr[i-1][m] = temp%10+48;
            //     temp/=10;
            // }
            printf("%d ", i);
        }
    }
    // *len1 = A;
    // return arr;
}
