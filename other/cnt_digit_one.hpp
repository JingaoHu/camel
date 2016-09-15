
//---------------------------------------------------------------
// function: count the digit of '1' in a binary number
// written by Jingao Hu
//---------------------------------------------------------------

#ifndef CNT_DIGIT_ONE
#define CNT_DIGIT_ONE

int cnt_digit_one(int n)
{
	int result=0;
	while(n)
	{
		n=n&(n-1);
		result++;
	}
	return result;
}

#endif
