//factorial

int fact(int n){
    if(n==0)          // by mistake you write if(n==1) then it gona give you segmentation error
        return 1;
    return n*fact(n-1);
}


//segmentation error is = when n=0 is passed than n*fact(n-1)  than n-2 ....and so on is called in an never ending condition
//in java we get stack overflow exception for this .



//fibonacci no

int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    // or we can simply write as if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}
