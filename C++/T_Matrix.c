#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d",&arr[i][j]);
        }   
    }

    int s1=0,s2=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == j) {
                s1 += arr[i][j];
            }
            if(i + j == n - 1)
             {
                s2 += arr[i][j];
            }
        }   
    }

    int sum = abs(s1 - s2);
    printf("%d", sum);

    return 0;
}
