class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
    
    int n = graph.size();

    vector<int> colour(n,0);

    for(int i=0;i<n;i++)
    {
        if(colour[i]==0)
        {
            queue<int> q;
            q.push(i);
            colour[i] = 1;

            while(!q.empty())
            {
                int u = q.front();
                q.pop();

                int nextNewColour = (colour[u]==1) ? 2: 1;

                for(auto v: graph[u])
                {
                    if(colour[v]==0)
                    {
                        q.push(v);
                        colour[v] = nextNewColour;
                    }

                    else if(colour[v]==colour[u])
                    {
                        return false;
                    }
                }
            }
        }
    }

    return true;
    }
};