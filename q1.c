#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node * next;
};
int main(){
  int n;
  printf("enter the no. of data to be entered\n");
  scanf("%d",&n);
  struct node * head;
  head=( struct node *)malloc(sizeof(struct node));
  printf("enter the data to be stored in node 1\n");
  scanf("%d",&head->data );
  head->next=NULL;
  int i=0;
  struct node * temp;
  struct node * newnode;
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
  for(i=0;i<n;i++){
    printf("%d\n",temp1->data);
    temp1=temp1->next;
  }
  int q;
  printf("enter the question part\n");
  scanf("%d",&q);
  if(q==1){
printf("programe to insert at beginning\n");
struct node * temp1;
struct node * newnode;
temp1=head;
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data to be stored in new node \n" );
scanf("%d",&newnode->data);
newnode->next=temp1;
head=newnode;
printf("the updated list is\n" );
struct node * temp6;
temp6=head;
for(i=0;i<=n;i++){
  printf("%d\n",temp6->data);
  temp6=temp6->next;
}

  }
  if(q==2){
    printf("programe to insert an element in the end\n");
    struct node * temp2;
       struct node * endnode;
       temp2=head;
      endnode=(struct node *)malloc(sizeof(struct node));
      for(i=1;i<n;i++){
      temp2=temp2->next;
      }
      printf("enter the value to be entered at the end\n");
      scanf("%d",&endnode->data);
      endnode->next=NULL;
      temp2->next=endnode;

    printf("the updated list is\n" );
    struct node * temp3;
    temp3=head;
    for(i=0;i<=n;i++){
      printf("%d\n",temp3->data);
      temp3=temp3->next;
    }
  }
  if(q==3){
  int i1;
  printf("program for inserting an element at particular index\n");
  printf("enter the index at which insertion is to be done\n");
  scanf("%d",&i1);
  struct node * temp2;
  if(i1!=0 || i1!=n){
  temp2=head;
  for(i=1;i<i1-1;i++){
  temp2=temp2->next;
  }
  struct node * indexnode;
  indexnode=(struct node *)malloc(sizeof(struct node));
  printf("enter the value to be entered\n");
  scanf("%d",&indexnode->data);
  indexnode->next=temp2->next;
  temp2->next=indexnode;
}
if(i1==0){
  struct node * startnode;
  startnode=(struct node *)malloc(sizeof(struct node));
  temp2=head;
  printf("enter the value to be inserted in the beginning\n");
  scanf("%d",&startnode->data);
  startnode->next=head;
  head=startnode;
}
  if(i1==n)
  {
    struct node * endnode;
    endnode=(struct node *)malloc(sizeof(struct node));
    for(i=1;i<n-1;i++){
    temp2=temp2->next;
    }
    printf("enter the value to be entered at the end\n");
    scanf("%d",&endnode->data);
    endnode->next=NULL;
    temp2->next=endnode;
  }
  printf("the updated list is\n" );
  struct node * temp3;
  temp3=head;
  for(i=0;i<=n;i++){
    printf("%d\n",temp3->data);
    temp3=temp3->next;
  }
}
if(q==4)
{
  int i2;
  printf("programe to delete an element given the key\n");
  printf("enter the data to be deleted\n");
  scanf("%d",&i2);
  struct node * temp4;
  temp4=head;
  int count1=0;
  while(temp4->data!=i2)
  {
    temp4=temp4->next;
    count1=count1+1;
  }
  struct node * temp5;
  temp5=head;
  for(i=0;i<count1-1;i++)
  {
    temp5=temp5->next;
  }
  temp5->next=temp4->next;
  free(temp4);
  printf("the updated list is\n" );
  struct node * temp6;
  temp6=head;
  for(i=0;i<=n;i++){
    printf("%d\n",temp6->data);
    temp6=temp6->next;
  }
}
if(q==5)
{
  int i2;
  printf("program to delete an element from the list given the index of the node\n");
  printf("enter the index of the node to be deleted\n");
  scanf("%d",&i2);
  struct node * temp1;
  temp1=head;
  for(i=0;i<i2-1;i++)
  {
    temp1=temp1->next;
  }
  struct node * temp2;
  temp2=head;
  for(i=0;i<i2-2;i++)
  {
    temp2=temp2->next;
  }
  temp2->next=temp1->next;
  free(temp1);
  printf("the updated list is\n" );
  struct node * temp3;
  temp3=head;
  for(i=0;i<=n;i++){
    printf("%d\n",temp3->data);
    temp3=temp3->next;
}
}
if(q==6){
  int i1;
  printf("program to search an element from the list given the key\n");
  printf("enter the value of data to be deleetd \n");
  scanf("%d",&i1);
  struct node * temp1;
  temp1=head;
  int count=0;
  while(temp1->data!=i1)
  {
    temp1=temp1->next;
    count=count+1;
  }
  struct node * temp2;
  temp2=head;
  for(i=0;i<count-1;i++)
  {
    temp2=temp2->next;
  }
  printf("the value is stored in %d node\n",count+1);
  printf("the value is %d and at adress %d",temp1->data,temp2->next);
}
if (q==7) {
  printf("program to delete the entire linked list\n");
  struct node * temp1;
  temp1=head;
  while(temp1->next!=NULL){
    temp1=temp1->next;
  }
  printf("Deleting Linked List......\n");
  printf("the list has been deleted\n");
}
if(q==8){
  printf("program to search an element from the list given the index of the node\n");
  printf("enter the index of the node whose element is to be searched\n");
  int i2;
  scanf("%d",&i2);
  struct node * temp1;
  temp1=head;
  for(i=0;i<i2-1;i++)
  {
    temp1=temp1->next;
  }
  printf("the element is %d",temp1->data);
}
if(q==9){
  printf("program to get the nth node from the list\n");
  printf("inter the value of n\n");
  int i2;
  scanf("%d",&i2);
  struct node * temp1;
  temp1=head;
  for(i=0;i<i2-1;i++)
  {
    temp1=temp1->next;
  }
  printf("the element is %d",temp1->data);

}
if(q==10){
    printf("program to get the nth node from the end of the list\n");
    printf("enter the value of n \n");
    int i1,i2;
    scanf("%d",&i1);
    i2=n-i1;
    struct node * temp1;
    temp1=head;
    for(i=0;i<i2;i++)
    {
      temp1=temp1->next;
    }
    printf("the element is %d",temp1->data);

}
if(q==11){
  printf("programe to count the number of nodes of the list\n");
  struct node * temp1;
  temp1=head;
  int count=0;
  while(temp1->next!=NULL){
    count=count+1;
    temp1=temp1->next;
  }
  printf("number of nodes in the list are %d",count+1);
}
if(q==12){
  printf("program to get the middle element of the list\n");
  int i1,i2;
  if(n%2!=0)
  {
    i1=(n+1)/2;
    struct node * temp1;
    temp1=head;
    for(i=0;i<i1-1;i++){
      temp1=temp1->next;
    }
    printf("the value stored in the middle node is %d\n",temp1->data);
  }
  else{
    i1=n/2;
    i2=(n/2)+1;
    struct node * temp1;
    temp1=head;
    for(i=0;i<i1-1;i++){
      temp1=temp1->next;
    }
    struct node * temp2;
    temp2=head;
    for(i=0;i<i2-1;i++)
    {
      temp2=temp2->next;
    }
    printf("since the number of elements in the list is even, So there will be two middle elements\n");
    printf("The middle elements are %d and %d",temp1->data,temp2->data);
  }
}
if(q==13){
  printf("This program will print the list\n");
  printf("The printed list is\n");

  struct node * temp6;
  temp6=head;
  for(i=0;i<=n;i++){
    printf("%d\n",temp6->data);
    temp6=temp6->next;
}
}
if(q==14){
  printf("program to reverse the list");
  struct node * prev=NULL ;
  struct node * current;
  current=head;
  struct node * next=NULL;
  while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
    printf("x");
  }
  head=prev;
  printf("the updated list is\n" );
  struct node * temp3;
  temp3=head;
  for(i=0;i<=n;i++){
    printf("%d\n",temp3->data);
    temp3=temp3->next;

}
}
  return 0;
}
