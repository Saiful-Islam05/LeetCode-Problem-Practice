class Solution
{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n)
    {
        int cnt=0;
        int Sz = flowerbed.size();

        if(Sz==1)
        {
            if(flowerbed[0]==0)
            {
                cnt+=1;
            }
        }
        else
        {
            for(int i=0; i<Sz-2; i++)
            {
                if(flowerbed[i]==0)
                {
                    if(i==0)
                    {
                        if(flowerbed[i+1]==0)
                        {
                            cnt++;
                            i+=1;
                        }
                    }

                    else
                    {
                        if(flowerbed[i-1]==0 && flowerbed[i+1]==0)
                        {
                            cnt++;
                            i+=1;
                        }
                    }
                }

            }

        }

        else if(i==Sz-2)
        {
            if(flowerbed[i]==0 && flowerbed[i+1]==0)
            {
                cnt++;
            }
        }

        if(n<=cnt)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
