#include <stdio.h>
int main(){
        int N;
        int time[1001];
        int temp;
        long long int sum=0;
        scanf("%d", &N);
        for(int i=0;i<N;i++){
                scanf("%d" , &time[i]);
        }
        for(int i=0;i<N;i++){
                for(int j=0;j<N-i-1;j++){
                        if(time[j]>time[j+1]){
                                temp=time[j];
                                time[j]=time[j+1];
                                time[j+1]=temp;
                        }
                }
        }
        for(int i=0;i<N;i++){
                for(int j=N-i;j>0;j--){
                        sum+=time[i];
                }

        }
        printf("%lld\n",sum);
}


