#include<stdio.h>

void calculation(int a,int b,int c){
	printf("Cap so thu 1:\n");
	printf("%d * %d = %d\n",a,b,a*b);
	if(a>b){
		if(a%b==0){
			printf("%d chia het cho %d\n",a,b);
		}else{
			printf("%d khong chia het cho %d\n",a,b);
		}
	}else{
		if(b%a==0){
			printf("%d chia het cho %d\n",b,a);
		}else{
			printf("%d khong chia het cho %d\n",b,a);
		}
	}
	printf("Cap so thu 2:\n");
	printf ("%d*%d=%d\n",a ,c ,a*c);
	if (a>c){
		if(a%c==0){
			printf("%d/%d=%d\n", a, c,a/c);
		}else{
			printf("%d khong chia het cho %d\n",a,c);
		}	
	}else{
		if(c%a==0){
			printf("%d/%d=%d", c, a,c/a);
		}else{
			printf("%d khong chia het cho %d",c,a);
		}
	}printf ("cap so thu ba\n");
	printf ("%d*%d=%d\n",c ,b ,c*b);
	if (c>b){
		if(c%b==0){
			printf("%d/%d=%d\n", c, b,c/b);
		}else{
			printf("%d khong chia het cho %d\n",c,b);
		}	
	}else{
		if(b%c==0){
			printf("%d/%d=%d", b, c,b/c);
		}else{
			printf("%d khong chia het cho %d\n",b,c);
		}
	}
}

int main(){
	int a,b,c;
	printf("Nhap lan luot so a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	calculation(a,b,c);
}
