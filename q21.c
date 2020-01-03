#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node * next;
};
int main()
{
  int i,n;
  printf("enter the number of nodes to be created\n");
  scanf("%d",&n);
  struct node * head;
  head=(struct node *)malloc(sizeof(struct node));
  printf("enter the data to be stored in node 1\n");
  scanf("%d",&head->data);
  head->next=NULL;
  struct node * newnode;
  struct node * temp;
  temp=head;
  for(i=0;i<n-1;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data to be stored in node %d\n",i+2);
    scanf("%d",&newnode->data);
    temp->next=newnode;
    temp=newnode;
    temp->next=NULL;
  }
  struct node * temp1;
  temp1=head;
  while(temp1->next!=NULL){
    temp1=temp1->next;
  }
  int i1;
  struct node * temp2;
  printf("LOOP NODE AT\n");
  scanf("%d",&i1);
  for(i=0;i<i1-1;i++){
    temp2=temp2->next;
  }
  temp1->next=temp2;
  struct node * temp3;
  temp3=head;
  for(i=0;i<n;i++){
    temp3=temp3->next;

    if(temp3->next=NULL){
      printf("There is no loop");
    break;
  }
    else{
      printf("there is loop");
    }
  }
  int t,k,count=0;
  struct node * temp4;
  struct node * temp5;
  temp4=head;
  temp5=head;
  for(t=0;t<n;t++){
    temp4=temp4->next;
    for(k=0;k<n;k++){
      temp5=temp5->next;

      if(temp4->next==temp5->next && t!=k){
        count=count+1;
      }
  }
  printf("The length of loop is %d\n",count);
}
  return 0;


}
