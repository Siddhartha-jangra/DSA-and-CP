int mostFrequentElement(vector<int>& nums) {
    vector<int> hasharr(50,0);
    for(auto i = nums.begin();i != nums.end();i++){
        hasharr[*i]++;
    }
    int largest {INT_MIN};
    for(auto i {hasharr.rbegin()}; i != hasharr.rend();i++){
        largest = max(largest, *i);
    }

    return largest;
}