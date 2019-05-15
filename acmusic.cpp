#include<cstdio>
int main(){
	int music,gao,num;
	float time,pai;
	freopen("code.txt","w",stdout);
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		while(1){
		scanf("%d %d %f",&music,&gao,&time);
		switch(music){
			case 0:
				printf("Sleep(%.2f*pai); ",time);
				break;
			case 1:
				printf("Beep(C%d,%.2f*pai); ",gao,time);
				break;
			case 2:
				printf("Beep(D%d,%.2f*pai); ",gao,time);
				break;
			case 3:
				printf("Beep(E%d,%.2f*pai); ",gao,time);
				break;
			case 4:
				printf("Beep(F%d,%.2f*pai); ",gao,time);
				break;
			case 5:
				printf("Beep(G%d,%.2f*pai); ",gao,time);
				break;
			case 6:
				printf("Beep(A%d,%.2f*pai); ",gao,time);
				break;
			case 7:
				printf("Beep(B%d,%.2f*pai); ",gao,time);
				break;
			default:
				printf("ERROR,%d\n",music);
				while(1);
				break;
		}
		pai+=time;if(pai==4) break;
	}
	printf("\n");
	pai=0;
	}
	
}
