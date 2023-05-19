int Solution::isPalindrome(string A)
{
    int i = 0;
    int j = A.length() - 1;
    while (i <= j)
    {
        if (isalnum(A[i]) && isalnum(A[j]))
        {
            if (tolower(A[i]) == tolower(A[j]))
            {
                i++;
                j--;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            if (!isalnum(A[i]))
            {
                i++;
            }
            if (!isalnum(A[j]))
            {
                j--;
            }
        }
    }
    return 1;
}
