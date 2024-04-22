#include<stdio.h>
void main(){
	int user,mrp,qty,roti=5,paneer=20,biryani=50,rasgula=5;
	float tmrp;
	printf("------------MENU-------------\n1.roti=?5\n2.paneer=?20\n3.biryani=?50\n4.rasgula=?5\n");
	printf("enter your item:");
	scanf("%d",&user);
	switch(user){
		case 1:
			printf("enter quantity:");
			scanf("%d",&qty);
			mrp=roti*qty;
			tmrp=(mrp*0.18)+mrp;
			printf("Price: %d\ntotal price after 18%% GST: %.2f",mrp,tmrp);
			break;
		case 2:
			printf("enter quantity:");
			scanf("%d",&qty);
			mrp=paneer*qty;
			tmrp=(mrp*0.18)+mrp;
			printf("Price: %d\ntotal price after 18%% GST: %.2f",mrp,tmrp);
			break;
		case 3:
			printf("enter quantity:");
			scanf("%d",&qty);
			mrp=biryani*qty;
			tmrp=(mrp*0.18)+mrp;
			printf("Price: %d\ntotal price after 18%% GST: %.2f",mrp,tmrp);
			break;
		case 4:
			printf("enter quantity:");
			scanf("%d",&qty);
			mrp=rasgula*qty;
			tmrp=(mrp*0.18)+mrp;
			printf("Price: %d\ntotal price after 18%% GST: %.2f",mrp,tmrp);
			break;
		default:
			printf("error input");
    }
		
}