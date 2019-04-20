//Recursion.
//Based graph's adjacency list.

void DFS(ALGraph *G, int i)//Start from vertex i.
{
    EdgeNode *p;

    cout << G->adjList[i].vertex << endl;//PreOrder get the value of vertex.
    Visited[i] = true;
    p = G->adjList[i].firstedge;
    while(p)
    {
        if(!Visited[p->adjVex])
            DFS(G, p->adjVex)
        p = p->next;
        
    }

}