#include<stdio.h>
#define MAX 10

int array[MAX], n;

void create_array();
void insert_element();
void display();
void delete_element();
int binary_search(int);
void bubble_sort(int);
/*
int linear_search(int);
void count_frequency();
void second_smallest_element();
void merge_sorted_arrays();
void bubble_sort();
void selection_sort();
void insertion_sort();
*/
void create_array()
{
	printf("\nEnter the number of elements in the array:");
	int i;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("\nEnter element no. %d", i+1);
		scanf("%d", &array[i]);
	}
}

void insert_element()
{
	printf("\nPlease enter the element that you want to insert:\t");
	int ele, pos;
	scanf("%d", &ele);
	printf("\nPlease enter the position at which you want to insert the element:");
	scanf("%d", &pos);
	if(n == MAX)
	{
		printf("\nArray is full."); return;
	}
	else
	{
		int i;
		for(i = n-1; i>=(pos-1); i--)
		{
			array[i+1] = array[i];
		}
	}
	array[pos-1] = ele;
	n++;
	display();
}

void display()
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d  ", array[i]);
	}
}

void delete_element()
{
	printf("\nDeletion by value or Delete an element at given position? (1 or 2):\t");
	int ch, pos;
	scanf("%d", &ch);
	if(ch == 1)
	{
		printf("\nEnter the element that you want to delete:\t");
		scanf("%d", &ch);
		pos  = binary_search(ch);
	}
	else
	{
		printf("\nEnter the position:\t");
		scanf("%d", &pos);
	}
	int i;
	for(i = pos-1; i<n; i--)
	{
		array[i] = array[i+1]; 
	}
	display();
}

int binary_search(int)
{
	int *p = bubble_sort(array);
	if(n >= 1)
	{
		int mid
	}
}

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubble_sort(int arr[])
{
	int i, j;
	for(i=0; i<n-1; i++)
		for(j=0; j<n-i-1; j++)
			if(array[j] > array[j+1])
				swap(&array[j], &array[j+1]);
}
/*
int linear_search(int);
void count_frequency();
void second_smallest_element();
void merge_sorted_arrays();
void selection_sort();
void insertion_sort();
*/
int main()
{
	create_array();
	printf("Menu:\n1. Insert an Element\n2. Delete an Element\n3. Perform Linear Search\n");
				
	printf("4. Perform Binary Search\n5. Show Frequency of All Elements in the Array\n6. Find Second Smallest Element\n");
				
	printf("7. Merge Two Sorted Arrays\n8. Perform Bubble Sort\n9. Perform Selection Sort\n");
				
	printf("10. Perform Insertion Sort");
				
	int chno; char cont = 'y';
	do
	{
		printf("\nEnter your choice:\t");
		scanf("%d", &chno);
		switch(chno)
		{
			case 1:
				insert_element();
				break;
			/*
			case 2:
				delete_element();
				break;
			case 3:
				linear_search();
				break;
			case 4:
				binary_search();
				break;
			case 5:
				count_frequency();
				break;
			case 6:
				second_smallest_element();
				break;
			case 7:
				merge_sorted_arrays();
				break;
			case 8:
				bubble_sort();
				break;
			case 9:
				selection_sort();
				break;
			case 10:
				insertion_sort();
				break;
			*/
			default:
					printf("\nInvalid Choice!");						
		}
			printf("\nDo you want to continue?\t");
		scanf("%s",&cont);			
	}while(cont == 'y' || cont == 'Y');
	return 0;
}
