struct node
{
    int data;
    struct node *left;
    struct node *right;

};
struct node *insertbst(struct node *root, int x);
struct node *inorder(struct node *root);
void L3(int *a,int x, int y);
void bstsort();