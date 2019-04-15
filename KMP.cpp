//KMP for Marching of string.
//Naive String March
int NaiveStrMatch(SeqString T[], SeqString P[])
{
    int lenT, lenP;
    int i, j, k;

    for(i = 0; i <= n-m; i++)
    {
        j = i;
        k = 0;
        while(k < m && T[j] == P[k])
        {
            k++;
            j++;
        }
        if(k == m)
            return i;
    }
    return -1
}

//KMP algorithm
//Given next array. next[m]
int KMPmatch(char T[], char p[])
{
    int n = T[0], m = P[0]//First element is length;
    int i = j = 1;
    int k = 0;

    while(i <= n && j <= m)
        if(T[i] == P[j])
        {
            i++;
            j++
        }
        else
        {
            k = next[j];
            if(k > 0)
                j = k;
            else
            {
                j = 1;
                i++;
            }
        }
        
    
}
















