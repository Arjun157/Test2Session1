#include<math.h>
void input(float *x1,float *x2,float *y1,float *y2)
{
  printf("Enter four numbers\n");
  scanf("%f%f%f%f",x1,x2,y1,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *distance)
{
  *distance=sqrt(pow(x2-x1),2+pow(y2-y1),2);
}
void output(float x1,float y1,float x2,float y2,float distance)
{
  printf("the distance between two %f %f %f points is %f\n",x1,x2,y1,y2,distance);
}
int mainm()
{
  float x1,x2,y1,y2,distance;
  input(&x1,&x2,&y1,&y2);
  find_distance(x1,x2,y1,y2,&distance);
  output(x1,x2,y1,y2);
  return 0;
}