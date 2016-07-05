float sq_rt (float num)
{
	float num1 = num;
	float num2 = 1;
	float error = 0.000001;
	
	while (num1 - num2 > error)
	{
		num1 = (num1 + num2) / 2;
		num2 = num / num1;
	}
	
	return num1;
}
