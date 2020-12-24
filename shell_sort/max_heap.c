#include <stdio.h>
#include <math.h>

static int last_valid_num_idx = 0;
int heap_size = 20;
void print_arr(int *arr,int size)
{
  for (int i = 0; i <size ; i++)
  {
    printf("%d\t",arr[i]);
  }
  printf("\n");
}
void heapify(int *arr,int parent_idx,int arr_size)
{
  if (parent_idx<arr_size)
  {
    int left_child = 2*(parent_idx+1)-1;
    int right_child  = 2*(parent_idx+1);
    // comparing with left child
    if (left_child < arr_size && arr[left_child] > arr[parent_idx])
    {
        int temp = arr[parent_idx];
        arr[parent_idx] = arr[left_child];
        arr[left_child] = temp;
        heapify(arr,left_child,arr_size);
    }
    // comparing right child
    else if (right_child < arr_size && arr[right_child] > arr[parent_idx])
    {
      int temp = arr[parent_idx];
      arr[parent_idx] = arr[right_child];
      arr[right_child] = temp;
      heapify(arr,right_child,arr_size);;
    }
  }


}
void compare(int*arr,int parent_idx)
{
  int left_child = 2*(parent_idx+1)-1;
  int right_child  = 2*(parent_idx+1);
  // comparing with left child
  if (left_child <= last_valid_num_idx && arr[left_child] > arr[parent_idx])
  {
      int temp = arr[parent_idx];
      arr[parent_idx] = arr[left_child];
      arr[left_child] = temp;
      compare(arr,left_child);
  }
  // comparing right child
  else if (right_child <=last_valid_num_idx && arr[right_child] > arr[parent_idx])
  {
    int temp = arr[parent_idx];
    arr[parent_idx] = arr[right_child];
    arr[right_child] = temp;
    compare(arr,right_child);
  }

}
int del_one(int *arr)
{
    // DELETE ROOT AND PLACE LAST ELEMENT IN PLACE OF ROOT
    int deleted =arr[0];
    arr[0] = arr[last_valid_num_idx];
    last_valid_num_idx -= 1;
    // NOW ADJUST HEAP AGAIN SUCH THAT IT REMAINS A MAX Heap
    compare(arr,0);
    return deleted;

}
void insert_one(int *arr,int element)
{

 if (last_valid_num_idx < heap_size-1){
    last_valid_num_idx += 1;
    arr[last_valid_num_idx] = element;
    int valid_num_idx = last_valid_num_idx;

    for ( int k= floor(valid_num_idx/2); k >= 0; k=floor(k/2))
    {
      int parent = arr[k];
      if (parent<arr[valid_num_idx]){
        int temp = parent;
        arr[k] = arr[valid_num_idx];
        arr[valid_num_idx] = temp;
        valid_num_idx = k;
      }
      else{
          break;
      }
    }



 }

}
void print_mheap(int *arr) {
  for (int i = 0; i <= last_valid_num_idx; i++)
  {
        printf("%d\t",arr[i]);
  }
  printf("\n");
}
int main(int argc, char const *argv[]) {
  int inputs[]={16,50,30,15,10,8,20};
  int input[]={16,50,30,15,10,8,20};
  heapify(inputs,0,7);
  print_arr(inputs,7);
  int arr[heap_size];
  arr[0] = input[0];
  for (int i = 1; i<7; i++ )
  {
    // printf("%d\n",i);
    insert_one(arr,input[i]);
  }
  printf("Heap before inserting 150\n" );
  print_mheap(arr);
  insert_one(arr,150);
  printf("\nHeap after inserting 150\n" );
  print_mheap(arr);
  // testing again
  insert_one(arr,17);
  printf("\ninserted 17 \n" );
  print_mheap(arr);
  // del one elemnt from max heap
  printf("\nAfter del operartion\n");
  printf("Deleted element %d\n", del_one(arr));
  print_mheap(arr);
  printf("\nAfter del operartion\n");
  printf("Deleted element %d\n", del_one(arr));
  print_mheap(arr);
  printf("\nAfter del operartion\n");
  printf("Deleted element %d\n", del_one(arr));
  print_mheap(arr);





  return 0;
}
