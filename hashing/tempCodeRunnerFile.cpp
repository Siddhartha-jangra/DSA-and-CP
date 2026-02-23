    for(int i = 0;i < n; i++){
        cin>>arr[i];
    }
    int hasharr[13] = {0};
    for(int i = 0;i < n; i++){
        hasharr[arr[i]]++;
    }
    for(int i = 0;i<n;i++){
        int a {};
        cin>>a;
        cout<<hasharr[a]<<endl;
    }