#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char ch,filename[10];
	printf("请输入所用的文件名：");
	scanf("%s",filename);
	if((fp=fopen(filename,"a"))==NULL){
		printf("无法打开文件\n");
		exit(0);
	}
	ch=getchar();
	printf("请输入一个准备存储在磁盘的字符串（以#结束）：");
	ch=getchar();
	while(ch!='#'){
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
	} 
	fclose(fp);
	putchar(10);
	return 0;
}
