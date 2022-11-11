class Solution {
    public int countPrimes(int n)
    {
        int[] ar=sie(n);
        int c=0;
        for(int i=2;i<n;i++)
        {
            if(ar[i]==1)
            {
                c++;
            }
        }
        return c;
    }
    public static int[] sie(int n)
    {
        int arr[]=new int[n];
        Arrays.fill(arr,1);
        for(int i=2;i*i<n;i++)
        {
            if(arr[i]==1)
            {
                for(int j=i*i;j<n;j+=i)
                {
                    arr[j]=0;
                }
            }
        }
        return arr;
    }
}