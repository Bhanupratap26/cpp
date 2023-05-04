https://www.codingninjas.com/codestudio/problems/maximum-frequency-number_920319?leftPanelTab=1

int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int,int>count;

    int maxfreq =  0;
    int ans = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        count[arr[i]]++;
        maxfreq = max(maxfreq,count[arr[i]]);

    }

    for(int i = 0 ; i<arr.size() ; i++)
    {
        if(count[arr[i]]==maxfreq)
        {
            ans = arr[i];
            break;
        }
    }

    return ans;

    
}