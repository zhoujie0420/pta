#include<stdio.h>
#include<string.h>
int main()
{
	char js[1000000],zm[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int max[26]={};
	int cd,i,j,ma=0,mm;
	gets(js);
	cd=strlen(js);
	for(i=0;i<=cd;i++)
	{
		if(js[i]=='a' || js[i]=='A') max[0]+=1;
		if(js[i]=='b' || js[i]=='B') max[1]+=1;
		if(js[i]=='c' || js[i]=='C') max[2]+=1;
		if(js[i]=='d' || js[i]=='D') max[3]+=1;
		if(js[i]=='e' || js[i]=='E') max[4]+=1;
		if(js[i]=='f' || js[i]=='F') max[5]+=1;
		if(js[i]=='g' || js[i]=='G') max[6]+=1;
		if(js[i]=='h' || js[i]=='H') max[7]+=1;
		if(js[i]=='i' || js[i]=='I') max[8]+=1;
		if(js[i]=='o' || js[i]=='J') max[9]+=1;
		if(js[i]=='j' || js[i]=='K') max[10]+=1;
		if(js[i]=='k' || js[i]=='L') max[11]+=1;
		if(js[i]=='l' || js[i]=='M') max[12]+=1;
		if(js[i]=='m' || js[i]=='N') max[13]+=1;
		if(js[i]=='n' || js[i]=='O') max[14]+=1;
		if(js[i]=='p' || js[i]=='P') max[15]+=1;
		if(js[i]=='q' || js[i]=='Q') max[16]+=1;
		if(js[i]=='r' || js[i]=='R') max[17]+=1;
		if(js[i]=='s' || js[i]=='S') max[18]+=1;
		if(js[i]=='t' || js[i]=='T') max[19]+=1;
		if(js[i]=='u' || js[i]=='U') max[20]+=1;
		if(js[i]=='v' || js[i]=='V') max[21]+=1;
		if(js[i]=='w' || js[i]=='W') max[22]+=1;
		if(js[i]=='x' || js[i]=='X') max[23]+=1;
		if(js[i]=='y' || js[i]=='Y') max[24]+=1;
		if(js[i]=='z' || js[i]=='Z') max[25]+=1;
	}
	for(j=0;j<26;j++){
		if(ma<max[j]) {ma=max[j];mm=j;}
	}
	printf("%c %d",zm[mm],ma);
}
