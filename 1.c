#include<stdio.h>
 

struct icecream{
	   int id;
	   char name[20];
	   int price;
	   char t[20];
};
      struct icecream g[50];
     //cal=(struct icecream*)malloc(z*sizeof(struct icecream));
     void add(struct icecream);
     void disp(struct icecream);
     void search(struct icecream);
     void sort(struct icecream);
     int  main()
{    int n,i;

     struct icecream p ;
     struct icecream g[50];
     printf("WELCOME TO THE ICE CREAM PARLOUR");
     printf("\nSelect a option you want");
     
     printf("\n1.ADD ICE CREAM\n2.DISPLAY ALL ICE CREAMS\n3.SEARCH AVAILABLE ICE CREAM\n4.DELETE ICE CREAM DATA\n5.UPDATE ICE CREAM DATA\n6.VIEW ICE CREAMS ACCORDING TO THEIR PRICE\n7.GENERATE BILL");
     scanf("%d",&n);
     
     switch(n)
  {  case 1:
     add(p);
     break;
     case 2:
     disp(p);
	 break;	
	 case 3:
	 search(p);
	 case 6:
	 sort(p);
  }
  	    
		  
	 return 0;
  	
}
     void add(struct icecream p)
{    char c; 
     FILE *file=fopen("d:\\icecream.txt","w+");	  
     if(file==NULL)
{    printf("Error in creating a file");
  }  
     while(1)
{
     printf("\nEnter the ID of the icecream you want to add");  
     scanf("%d",&p.id);
	 printf("\nEnter the name of the new Icecream");
	 scanf("%s",&p.name);
	 printf("\nEnter the PRICE for the icecream");
	 scanf("%d",&p.price);
	 printf("\nEnter the type of the icecream(TUB/CONE/FAMILY PACK/BAR)");
	 scanf("%s",&p.t);   
     fwrite(&p,sizeof(p),1,file);
     printf("WANT TO ENTER MORE ENTRIES Y/N");
     
 
    
    }
     fclose(file);
    
}
 
     void disp(struct icecream p)
 {   FILE *file=fopen("d:\\icecream.txt","r");
     if(file==NULL)
   { printf("Error in reading the details");
   }
     while(1)
   {
     fread(&p,sizeof(p),1,file);
     printf("ID\tNAME\tPRICE\tTYPE");
     printf("\n\n\n%d\t%s\t%d\t%s\n",p.id,p.name,p.price,p.t);
     printf("\n\nWant to see more(Y/N)");
     
     
    }
     fclose(file);
     
 }


  
	   
	   
	   

