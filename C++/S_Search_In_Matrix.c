#include<stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int s, f = 0; 
    scanf("%d", &s);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (arr[i][j] == s) 
            {
                f = 1;
                break;
            }
        }
        if (f == 1) 
        {
            break;
        }
    }

    if (f == 0)
     {
        printf("will take number\n");
    } 
    else 
    {
        printf("will not take number\n");
    }

    return 0;
}
