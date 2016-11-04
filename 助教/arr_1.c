#include <stdio.h>

int main()
{
	int arr[10]; // 0 - 9
	printf("%d", arr[0]);
	int i;
	int sum = 0;
	double avg;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / 10.0;
	printf("%f\n", avg);
	//define arr

	return 0;
}
