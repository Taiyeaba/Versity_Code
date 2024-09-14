//to search for an element in an array of integers using liner search.
#include<stdio.h>
int main(){
int num[]={10,2,15,20,35,46,85};
int value=20,pos=-1,i;

  printf("enter the value: ");
  scanf("%d",&value);

  for(i=0;i<7;i++){
  if(value==num[i]){
   pos=i+ 1;
    break;
  }
} if(pos==-1){
    printf("item is not found");
} else{
    printf("the value is found:%d position",pos);
}
return 0;

}
