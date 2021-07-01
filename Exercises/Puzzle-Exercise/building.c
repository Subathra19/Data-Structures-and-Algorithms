//Number of ways to construct a building for N section
#include<stdio.h>
int countBuilding(int n){
    //return 2 if we can place building in only one side
    //and return 4 if we can place buildings on both side
    if(n==1){
        return 4;
    }
    int building=1;
    int space=1;
    int prev_building=0;
    int prev_space=0;
    for(int i=2;i<=n;i++){
        prev_space=space;
        prev_building=building;
        //A space can be placed after building or space
        space=prev_space+prev_building;
        //A building can be placed only after space
        building=prev_space;
    }
    int total=space+building;//for one side;
    return (total*total);// for two side
}
int main(){
	int n=0;
	printf("Enter number of sections: ");
	scanf("%d",&n);
	int b=countBuilding(n); 
	printf("Number of ways to construct bulidingd for %d sections is: %d",n,b);
	return 0;
}
