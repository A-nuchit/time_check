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
				if(Hs < He || ( (Hs==He) && (Ms < Me))){
					if(Hs<i && He>i)  //เมื่อรู้แน่ชัดว่าอยู่ในช่วงแน่นอนนในสภาวะปกติ
						printf("+++++++++++\n");
					else if(Hs==i){   //เมื่อเวลาเริ่มต้อนเท่ากับเวลาณขฯะนั้น
						if(Ms<=j && Me>=j){
							printf(" ++++++++++ ( 1 )\n");
						}
						else{
							printf("OFF -- 1\n");
						}
					}
					else if(He==i){
						if(Me>=j){
							printf("++++++++++++( 2 )\n");
						}
						else{
							printf("OFF -- 2\n");
						}
					}
					else{
						printf("OFF -- 3\n");
					}
				}
				else
					printf("  >>  out case\n");
			}
		}

	return 0;
}