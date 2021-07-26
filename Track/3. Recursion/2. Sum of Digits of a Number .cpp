int sumOfDigits(int n)
{
    //Your code here
    if(n<10)
    return n;
 else
    return sumOfDigits(n/10)+n%10;
}
