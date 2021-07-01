//Find if two rectangles overlap
/*
A rectangle can be represented by two coordinates, top left (lt) and bottom right (rb). Hence, we consider the  following four coordinates.
  lt1: Top Left coordinate of first rectangle.
  rb1: Bottom Right coordinate of first rectangle.
  lt2: Top Left coordinate of second rectangle.
  rb2: Bottom Right coordinate of second rectangle.
*/
#include<stdio.h>
//(x,y) coordinates
struct Point{
    int x;
    int y;
};
int checkOverlap(struct Point lt1,struct Point rb1, struct Point lt2, struct Point rb2){
    //If one rectangle is on left of other
    if(rb1.x<lt2.x || rb2.x< lt1.x){
        return 0;
    }
    //If one rectange is above other
    if(rb1.y>lt2.y || rb2.y>lt1.y){
        return 0;
    }
}
int main(){
    //Rectangle 1
    struct Point lt1= {0,10};
    struct Point rb1= {10,0};
    //Rectangle 2
    struct Point lt2={5,5};
    struct Point rb2={15,0};
    int check=checkOverlap(lt1,rb1,lt2,rb2);
    if(check){
        printf("Rectagles overlap");
    }else{
        printf("Rectangles don not overlap");
    }
    return 0;
}
