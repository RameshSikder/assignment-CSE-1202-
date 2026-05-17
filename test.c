#include <stdio.h>
#include<stdbool.h>
#include "abc.h"



int main(){
    long long binary; 
    scanf("%lld",&binary); 
    int decimal = binaryToDecimal(binary);
    printf("%d\n",decimal);

    int a,b;
    scanf("%d %d",&a,&b);
    isOdd(a);
    isEven(b);
    printf("Maximum of %d and %d is = %d\n",a,b,max(a,b));
    printf("Minimum of %d and %d is = %d\n",a,b,min(a,b));
    printf("Factorial of %d is =%d\n",a,factorial(a)); 
    printf("GCD of %d and %d = %d\n",a,b,gcd(a,b));
    bool prime = isPrime(a);
    if(prime){
        printf("%d is a prime number\n",a);
    }else{
        printf("%d is not a prime number\n",a);
    }

    int number;
    scanf("%d",&number);
    int digit_sum = digitsum(number);
    int rev_num = reverseNumber(number);
    printf("digit sum of %d is = %d\n",number,digit_sum);
    printf("reverse of %d is = %d\n",number,rev_num);

    decimalToBinary(number);
    decimalToOctal(number);
    decimalToHexa(number);


    return 0;
}