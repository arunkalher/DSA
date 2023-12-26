
int ninjaTraining(int n, vector<vector<int>> &points)
{
    if( points.size()==1)
    {
        return max(max(points[0][0],points[0][1]),points[0][2]);
    }
    points[1][0]=max(points[0][1],points[0][2])+points[1][0];
        points[1][1]=max(points[0][0],points[0][2])+points[1][1];
        points[1][2]=max(points[0][0],points[0][1])+points[1][2];
    if(points.size()==2)
    {
        return max(max(points[1][0], points[1][1]),points[1][2]);
        
    }
    for(int i=2;i<points.size();i++)
    {
        points[i][0]=max(points[i-1][1],points[i-1][2])+points[i][0];
        points[i][1]=max(points[i-1][0],points[i-1][2])+points[i][1];
        points[i][2]=max(points[i-1][0],points[i-1][1])+points[i][2];

    }
    return max(max(points[points.size()-1][0], points[points.size()-1][1]),points[points.size()-1][2]);
    }