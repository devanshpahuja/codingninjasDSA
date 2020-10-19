int power(int x, int n)
{int output;
    if(n==0)
    {
	return 1;
    }

output= x*power(x,n-1);

}
