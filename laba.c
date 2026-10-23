#include <stdio.h>
#include <math.h>

int main(){
	double x,y,z,u;
	double min_u=999999;
	double min_x,min_y,min_z;
	
	for (x=1;x<=2;x=x+1){
		for (y=0.1;y<=0.7;y=y+0.7){
			for(z=1;z<=3;z=z+2){
			u=1/tan(pow(x,y)+3*pow(z,2))-log(fabs((pow(x,3)-y)/z));
			printf("x=%f, y=%f, z=%f, u=%f\n",x,y,z,u);

			if (u<min_u){
				min_u=u;
				min_x=x;
				min_y=y;
				min_z=z;
				}
			}
		}
	}
	printf("\n");
	printf("min u = %f\n", min_u);
	printf("x = %f\n", min_x);
	printf("y = %f\n", min_y);
	printf("z = %f\n", min_z);
	return 0;
}
