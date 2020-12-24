#include <stdio.h>
#include<math.h>
int n = 7;
int root = 0;
void insert(int*arr,int element);
int main(int argc, char const *argv[])
{

	int arr[]={16,50,30,15,10,8,20};

	for (int i = 1; i < n; i++)
	{
			insert(arr,i);
			for (int j = 0; j <=i; j++) {
				/* code */
				printf("%d\t",arr[j]);
			}
			printf("\n");

	}

	return 0;
}
void insert(int *arr,int element)
{
	if (element !=root)
	{
			int parent = floor(element/2);
			if (arr[element]>arr[parent])
			{
					int temp = arr[element];
					arr[element] = arr[parent];
					arr[parent] = temp;
					insert(arr,parent);

			}
	}

}
