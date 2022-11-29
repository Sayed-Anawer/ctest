// #include <stdio.h>
//    long long int arr[200001];
// int main() {
//     long long int N,x;
//    scanf("%lld", &N);
//     int i;
//        for(i=0; i<N; i++)
//     {
//         arr[i]=0;
//     }
//    for(i=1;i<N;i++){
//        scanf("%lld ", &x);
//        arr[x] = 1;
//    }
//     int j;
//    for(j=1;j<=N;j++){

//        if(arr[j]==0){
//            printf("%lld", j);
//            break;

//        }
//    }

//     return 0;
// }

#include <stdio.h>

int main() {
   int T;
   long long int S,A,B,C,ans;
  scanf("%d",&T);
for(int i=0;i<T;i++){
scanf("%lld %lld %lld %lld", &S,&A,&B,&C);
ans=S-(A+B+C);
printf("%lld",ans);
}
    return 0;
}
