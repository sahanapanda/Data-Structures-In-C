{
    int n,m,i,j,a[100][100];
    
    printf("Enter row length : ");
    scanf("%d", &n);
    
    printf("Enter column length : ");
    scanf("%d", &m);
    
    printf("Enter elements : ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("%d x %d Matrix :\n ",n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d", a[i][j]);
        }
    }
    
    return 0;
}
