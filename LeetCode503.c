#include <stdio.h>
#include <stdlib.h>

int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;
    int* result = malloc(sizeof(int) * numsSize);
    
    for(int i = 0; i < numsSize;i++){
        result[i] = -1;
        for(int j = 1; j < numsSize;j++){
            int indice = (i + j) % numsSize;
            if(nums[i] < nums[indice]){
                result[i] = nums[indice];
                break;
            }
        }
    }
    return result;
}

////i = 2
////j = 1, (2 + 1) % 3 = 0;
////j = 2, (2 + 2) % 3 = 1;


int main(){
    int vet[] = {1,2,1};
    int tamanho = 3;
    int retorno = 3;

    int *result = nextGreaterElements(vet,tamanho,&retorno);

    for(int i = 0; i < 3; i++){
        printf("\n%d",result[i]);
    }
}