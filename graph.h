#ifndef GRAPH_
#define GRAPH_


typedef struct GRAPH_NODE_ *pnode;

typedef struct edge_ {
    int weight;
    pnode endpoint;
    struct edge_ *next;
} edge, *pedge;


typedef struct GRAPH_NODE_ {
    int node_num;
    pedge edges;
    struct GRAPH_NODE_ *next;
} node, *pnode;

typedef struct Graph {
    int nodes;
    // int size;
}graph;


void build_graph_cmd(pnode *head);//done


pnode getNode(node **head, int id);//done
void insert_node_cmd(pnode *head);//done
// void delete_node_cmd(pnode *head); //no need
void deleteNode(node **head, int key);//done
void deleteEdges_FromNode(node **head, int id);
void deleteEdges_TONode(node **head, int id);

void Delete_node(pnode *head);//D function- Pay attention! this is different from deleteNode!! (see implemention)
void add_new_node(pnode *head);//Bfunction
///////////void printGraph_cmd(pnode head); //for self debug//////not necesery
void deleteGraph_cmd(pnode* head);/////////////////check////////////////////
//void shortsPath_cmd(pnode head);
int shortsPath_cmd(pnode *head,int src,int dest);
void TSP(pnode *head);
void initMAT(pnode *headNode, int **matOfEdgesAndNodes);
int *Dijkstra(pnode *head, int **Graph, int num_of_nodes_in_g,int start);
//int **allocate_board(int Rows, int Cols);

int ** allocfunc( int rows, int cols);





#endif




//#ifndef GRAPH_
//#define GRAPH_
//
//
//typedef struct GRAPH_NODE_ *pnode;
//
//typedef struct edge_ {
//    int weight;
//    pnode endpoint;
//    struct edge_ *next;
//} edge, *pedge;
//
//
//typedef struct GRAPH_NODE_ {
//    int node_num;
//    pedge edges;
//    struct GRAPH_NODE_ *next;
//} node, *pnode;
//
//typedef struct Graph {
//    int nodes;
//   // int size;
//}graph;
//
//
//void build_graph_cmd(pnode *head);//done
//
//pnode getNode(node **head, int id);//done
//void insert_node_cmd(pnode *head);//done
//// void delete_node_cmd(pnode *head); //no need
//void deleteNode(node **head, int key);//done
//void Delete_node(pnode *head);//D function- Pay attention! this is different from deleteNode!! (see implemention)
//
//void add_new_node(pnode *head);//Bfunction
//void printGraph_cmd(pnode head); //for self debug
//void deleteGraph_cmd(pnode* head);
////void shortsPath_cmd(pnode head);
//void shortsPath_cmd(pnode *head,int src,int dest);
//
//void TSP_cmd(pnode head);
//

//#endif
