 /*inorrect version of the code */
 /* This code has a compile-time error, and at
 ** least one run-time error. */
 #include <stdio.h>
 #include <math.h>
 main(int argc,char *argv[])
 {
 int
 n,i;
 int
 d2,count,
 double d1;
 while (1)
 {
 printf("Enter a number (0 to quit): ");
 scanf("%d",&n);
 if (n == 0)
 break;
 count=0;
 for (i=0; i<n; i++)
 {
 d1=(double)n/(double)i;
 d2=n/i;
 if (fabs(d1-(double)d2) < 0.00001)
 count++;
 }
 if (count == 2)
 printf("%d is prime\n",n);
 else
 printf("%d is not prime\n",n);
 }
 }

 At which line of code does the program crash?line 20 and line 27
 line 20: for (i=0; i<n; i++)
 line 27: if (count == 2)
 Why does it crash there?i has been initialized with a 0 hence division by 0 brings a runtime error.To avoid this, use for (i=1; i<n; i++)
 count has been assigned to 2 which makes it difficult to identify if a number is a prime number.Since a prime number is divisible by 1 and itself,count===1 so that the condition satisfies if it is a prime number
