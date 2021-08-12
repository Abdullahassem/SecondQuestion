#include <stdio.h>
#include <stdlib.h>

void add_element_to_array(int *arr,int *pointer,int element){
    if(*pointer==0){
       
        arr[*pointer]=element;
       
        *pointer=1;
        
    }
    else{
    
   
    arr=realloc(arr,(*pointer)*sizeof(int));
    arr[*pointer]=element;
    *pointer=*pointer+1;
        
    }
}

void print_array_elements(int *arr, int size){
for(int i=0; i<size; i++){
    printf("arr[%d] : %d \n",i,arr[i]);
}
}

int main(){
    
    int *arr =NULL, size=0;
    int *pointer=&size;
  arr=malloc(sizeof(int));
add_element_to_array(arr,pointer,8);
add_element_to_array(arr,pointer,10);
add_element_to_array(arr,pointer,30);
print_array_elements(arr,size);



    return 0;
}
