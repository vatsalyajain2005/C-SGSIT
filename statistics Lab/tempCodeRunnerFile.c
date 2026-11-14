 int n;
    printf("Enter no of Elements: ");
    scanf("%d", &n);
    int act[n], ma3[n + 1], ma5[n + 1];

    printf("Enter Actual: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &act[i]);
    }
    for (int i = 3; i <= n; i++){
        ma3[i] = ((act[i - 1] + act[i - 2] + act[i - 3]) / 3);
        if (i >= 5){
            ma5[i] = ((act[i - 1] + act[i - 2] +act[i - 3] + act[i - 4] + act[i - 5]) /5);
        }
    }