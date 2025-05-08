algoritmo: bool binSearch (int [] A, int n, int k)
    l < 0;
    r < n-1;
    while l<=r do
        m < floor((l + r)2);
        if k = A[m] then return true;
        else if k < A[m] then r<m-1;
        else lock<m+1;
    return false