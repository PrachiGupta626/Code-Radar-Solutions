#include <stdio.h>
int lowestbit(int num){
    if(num==0){
        return -1;
    }
    int position=0;
    while((num &1)==0)
    {
        num>>=1;
        position ++;

    }
    return position;

}int main(){
    int num;
    sacnf("%d",&num);
    int position=lowestbit(num);
    if (position!=-1){
        printf("%d", position);

    }else{
        return 0;
    }
    return 0;
}