#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *l;
	struct node *r;
	int data;

};
void preorder(struct node *p)
{
	if(p==NULL)
		return;
	printf("%d ",p->data);
	preorder(p->l);
	preorder(p->r);
	
}
void inorder(struct node *p)
{
	if(p==NULL)
		return;
	inorder(p->l);
	printf("%d ",p->data);
	inorder(p->r);
}
void postorder(struct node *p)

{
	if(p==NULL)
	return;
	postorder(p->l);
	postorder(p->r);
	printf("%d ",p->data);

}	
struct node *insert(struct node *ptr, int ikey )

{

	if(ptr==NULL)	

	{

		ptr = (struct node *) malloc(sizeof(struct node));

		ptr->data = ikey;

		ptr->l = NULL;

		ptr->r = NULL;

	}

	else if(ikey < ptr->data)	/*Insertion in left subtree*/

		ptr->l = insert(ptr->l, ikey);

	else if(ikey > ptr->data)	/*Insertion in right subtree */

		ptr->r = insert(ptr->r, ikey);  

	else

		printf("Duplicate key\n");

	return ptr;

}	
int main()
{
	
	struct node *root=NULL,*ptr;

	int choice,k;



	while(1)

	{

		printf("\n");

		printf("1.Search\n");

		printf("2.Insert\n");

		printf("3.Delete\n");

		printf("4.Preorder Traversal\n");

		printf("5.Inorder Traversal\n");

		printf("6.Postorder Traversal\n");

		printf("7.Height of tree\n");

		printf("8.Find minimum and maximum\n");

		printf("9.Quit\n");

		printf("Enter your choice : ");

		scanf("%d",&choice);



		switch(choice)

		{

		

		case 2:

			printf("Enter the key to be inserted : ");

			scanf("%d",&k);

			root = insert(root, k);

			break;

	

			

		 case 4:

			preorder(root);

			break;

		 case 5:

			inorder(root);

			break;

		 case 6:

			postorder(root);	

		 case 9:

			exit(1);

		 default:

			printf("Wrong choice\n");

		}/*End of switch */

	}/*End of while */

return 0;
}/*End of main( )*/



