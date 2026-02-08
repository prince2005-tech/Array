#include<stdio.h>

void main(){
  printf("Enter the number of elements in the array: ");
  int n;
  scanf("%d",&n);
  int arr[n];

  for(int i=0;i<n;i++){
    printf("Enter the value of %d element of Array:",i+1);
    scanf("%d",&arr[i]);
  }
  int maxValue=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>maxValue) maxValue=arr[i];
  }
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]==maxValue){
    printf("\nMaximum Value of array is %d and found at %d",maxValue,i+1);
    count++;
  }
  }
  printf("\nMaximum Value %d present  %d times in the array",maxValue,count);
}