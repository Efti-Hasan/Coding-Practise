#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++)
    {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long productABC = A * B * C;

        if (productABC == 0)
         {
           
            if (M == 0) 
            {
                printf("0\n");
            }
             else 
            {
                printf("-1\n");
            }
        } 
        else 
        {
            long long missingNumber = M / productABC;
            if (missingNumber * productABC == M) 
            {
                printf("%lld\n", missingNumber);
            } 
            else
             {
                printf("-1\n");
            }
        }
    }

    return 0;
}
