
//Two d array
#include <stdio.h>
int main(){
    //array creation
    int arr[3][4]={{1,2,3,4},{2,3,4,5},{2,2,2,2}};
    //loop
    for(int j=0;j<3;j++){
    for(int i=0;i<4;i++){
    printf("%d",arr[j][i]);
    }
    printf("\n");
    }
    return 0;
}