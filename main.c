#include <stdio.h>

int sum_corners(int layers);

int main(void)
{
	int number_of_layers = 0;
	
	printf("Number of layers in spiral? \n" \
	        "Note: a n x n grid has (n+1)/2 layers. \n");
    scanf("%d", &number_of_layers);
	
	printf("Total sum of corners is %d.", sum_corners(number_of_layers));
	
	return 0;
}

int sum_corners(int layers)
{
	int length_of_side = 2;
	int running_total = 1;
	int current_number = 1;
	int current_layer = 2;
	int i = 0;
	for (current_layer = 2; current_layer <= layers; current_layer++)
	{
		for (i = 0; i < 4; i++)
		{
			current_number = current_number + length_of_side;
			running_total = running_total + current_number;
		}
		i = 0;
		length_of_side = length_of_side + 2;
	}
	return running_total;
}