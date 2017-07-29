#include<stdio.h>
int la;
int heaps=0;
void maxheap(int a[],int i)
{
	int t,la,l,r;
	l=2*i;
	r=(2*i)+1;
	if(l<=heaps&&a[l]>a[i])
	
		la=l;
		
	else 
			la=i;
			
	if(r<=heaps && a[r]>a[la])
	

		la=r;
		
		if(la!=i)
		{
			t=a[i];
			a[i]=a[la];
			a[la]=t;
			maxheap(a,la);	
			
			}
	}
void buildheap(int a[])
{
		heaps=la;
		int i;
		for(i=(la/2);i>0;i--)
		{
			maxheap(a,i);
			}
}
void print(int a[])
{
	int i;
	for(i=1;i<=la;i++)
		{
			printf("%d",a[i]);
			}
	}
void heapsort(int a[])

{
	int t,i;
	for(i=la;i>1;i--)
	{
		t=a[1];
		a[1]=a[i];
		a[i]=t;
		heaps--;
		maxheap(a,1);
		}
}
int main()
{
        int n,i;
        scanf("%d",&n);
        la=n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
                        scanf("%d",&a[i]);
                }
        buildheap(a);
        print(a);
		printf("\n");
	heapsort(a);
	print(a);
        return 0;

}
