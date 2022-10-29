class Solution {
public:
    int cal(int n)
    {
        int cata[n+1];
        memset(cata, 0, sizeof(cata));
        cata[0] = cata[1] = 1;
        for(int i = 2; i <= n; i++)
        {
            for(int j = 0; j < i; j++)
                cata[i] += cata[j] * cata[i-j-1];
        }
        return cata[n];
    }
    int numTrees(int n) {
        // CATALAN NUMBER 
        return cal(n);
    }
};
