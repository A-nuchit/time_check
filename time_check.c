#include <stdio.h>
int main(int argc, char const *argv[])
{
	int Hs,Ms,He,Me,Hn,Mn;
	printf("Enter time start : ");
	scanf("%d:%d",&Hs,&Ms);
	printf("Enter time end : ");
	scanf("%d:%d",&He,&Me);
		for (int i = 0; i < 24; i++)
		{
			for (int j = 0; j < 60; j++)
			{
				printf("%d:%d",i,j);
				
					if(Hs<i && He>i)  //เมื่อรู้แน่ชัดว่าอยู่ในช่วงแน่นอนนในสภาวะปกติ
						printf("ON\n");
					else if(Hs==i){   //เมื่อเวลาเริ่มต้อนเท่ากับเวลาณขฯะนั้น
						if(Ms<=j){
							printf("ON\n");
						}
						else{
							printf("OFF\n");
						}
					}
					else if(He==i){
						if(Me>=j){
							printf("ON\n");
						}
						else{
							printf("OFF\n");
						}
					}
					else{
						printf("OFF\n");
					}
			}
		}

	return 0;
}