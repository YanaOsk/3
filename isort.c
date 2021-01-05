#include <stdio.h>
#include "mylib.h"
#define len 50

void shift_element(int* arr, int i){
for(int j =i;j> 0; j--){

*(arr+j) = *(arr+j-1);
}
}
void insertion_sort(int* arr, int length){
int key,j;
for(int i =0; i<51; i++){
key=*(arr+i);
j=i-1;
while(j>=0 && *(arr+j) > key){
*(arr+j+1) = *(arr+j);
j--;
}
*(arr+j+1) = key;
}


}
/////////////////////////////////MAIN///////////////////////////////
int main(){
///////////////////FIRST PART////////////////////////
int array[len];
int arrnumber=0;
for(int i=0;i<len;i++){
    if(scanf("%d",&arrnumber)!=1){
        printf("Failed");
    }
    else
    {
        *(array+i)=arrnumber;
    }
}
shift_element(array,1);
for(int i=0; i<len; i++){
printf("%d ,",array[i]);
}
printf("\n");
insertion_sort(array,len);
for(int i=0; i<len; i++){
printf("%d , ",array[i]);

}
printf("\n");
return 0;
}




