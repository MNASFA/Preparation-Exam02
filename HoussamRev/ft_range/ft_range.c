#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	i;
	int	len;

	len = max - min;
	i = 0;
	ints = (int *)malloc(sizeof(int) * len);
	if (!ints)
		return (NULL);
	while (min < max)
	{
		ints[i] = min;
		min++;
		i++;
	}
	return (ints);
}

int main(void){
    int *nbrs = ft_range(-2, 5);
    int i = 0;
    while (nbrs[i] != '\0')
    {
        printf("%d, ", nbrs[i]);
        i++;
    }
}