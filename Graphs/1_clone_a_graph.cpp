#include <bits/stdc++.h> 
/***************************************************************************

	Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val, vector<graphNode *> neighbours)
    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
	};

******************************************************************************/
typedef graphNode Node;
graphNode *cloneGraph(graphNode *node)
{
    // Write your code here.
	Node* nodee=node;
	vector<Node*> v;
	vector<Node*> temp=node->neighbours;
	for(int i=0;i<temp.size();i++)
	{
		v.push_back(temp[i]);
	}
	return nodee;
	
}