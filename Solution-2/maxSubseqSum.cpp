int maxSubseqSum(int a[],int n)
{
	int max=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum>max)
		{
			max=sum;		
		}
		else if(sum<0)
		{
			sum=0;
		}
	}
	return max;
}
