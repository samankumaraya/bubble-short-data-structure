#include <stdio.h>
#define n 10

void bubblesort(int arr){

 int i,j,temp;
 int flag;

 for(i=0;i<n-1;i++){
        flag=1;
    for(for j=0; j<n-i-1;j++){
        if(arr[j+1]<arr[j]){
                flag=0;
           temp=arr[j+1];
           arr[j+1]=arr[j];
           arr[j]=temp;
        }
    }
    if(flag==1)
       break;
    printf("\nAfter iteration %d :",i+1);
    print(arr);

 }

}

void print(int arr[]){
 int i=0;

 for(i=0;i<n;i++){
    printf("%d , ",arr[i]);
 }
}
int main()
{
    int arr[n]={4,7,2,10,15,12,8,9,3,11};

    print(arr);
    bubblesort(arr);
    printf("\n Sorted array\n");
    print(arr);

    return 0;
}
