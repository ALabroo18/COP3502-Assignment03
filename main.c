#include <stdio.h>
typedef struct test{
    int test;

}teststr;
int main(){
    int persCount;
    //char name[20][persCount];
    char name[20][persCount];
    
    scanf("%d",&persCount);

    //Make a for loop that scans each people's name
    for(int i = 0; i < persCount; i++){
        for(int j = 0; j < 20; j--){
            scanf("%c", &name[i][j]);
            printf("%c", name[i][j]);
        }
        printf("\n");
    }
    //while 
    //persCount++
    //scanf("%c", [persCount - 1][0]);
    printf("s");
    return 0;
}