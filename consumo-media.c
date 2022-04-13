#include <stdio.h>
 
int main() {
 
	int X;
	double Y, media;
	scanf("%d %lf", &X, &Y);
	media = X / Y; 
	printf("%0.3lf km/l\n", media);
 
    return 0;
}
