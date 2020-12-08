int Solution::diffPossible(vector<int> &A, int k) {
    int j = 1;
    while(i < A.size()-1){
        j = max(j, i+1);
        int diff = A[j] - A[i];
        while(diff < k && j+1 < A.size())
            j++;
        if(A[j] - A[i] == B)
            return 1;
        i++;
    }
    return 0;
}
