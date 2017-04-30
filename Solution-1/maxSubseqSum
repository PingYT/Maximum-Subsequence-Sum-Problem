int max3( int a, int b, int c )
{
	if( a > b && a > c ) return a;
	if( b > a && b > c ) return b;
	return c;
}

int maxSubseqSum( int a[], int begin, int end )
{
	if( begin == end )
	{
		return a[begin]<0?0:a[begin];
	}
	int mid = ( begin + end ) / 2;
	int leftMax = maxSubseqSum ( a, begin, mid );
	int rightMax = maxSubseqSum ( a, mid+1, end );
	
	int maxLeftBorderSum = 0, leftBorderSum = 0;
	for(int i = mid; i >= begin; i-- )
	{
		leftBorderSum += a[i];
		if( leftBorderSum > maxLeftBorderSum )
		{
			maxLeftBorderSum = leftBorderSum;
		}
	}
	
	int maxRightBorderSum = 0, rightborderSum = 0;
	for(int i = mid + 1; i <= end; i++ )
	{
		rightborderSum += a[i];
		if( rightborderSum > maxRightBorderSum )
		{
			maxRightBorderSum = rightborderSum;
		}
	}

	return max3( leftMax, rightMax, maxLeftBorderSum + maxRightBorderSum );
}
