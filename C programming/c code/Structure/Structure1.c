//structure 1
#include<stdio.h>

struct rectangle {
float length;
 float width;
 float area;


};

int main()
{
    struct rectangle s;
    printf("Enter length : ");
    scanf("%f",&s.length);
    printf("Enter width : ");
    scanf("%f",&s.width);
    s.area = s.length * s.width;

   //printf("Length = %f\nWidth = %f\nArea = %f\n",s.length,s.width,s.area);
   printf("Length=%f\n",s.length);
   printf("Width=%f\n",s.width);
   printf("Area=%f\n",s.area);





  return 0;
}


