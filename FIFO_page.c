#include<stdio.h>
int frames,ref[100],k,f=0,i=0,len=0,hits=0;
int hit(int j,int ar[]){
	for(k=0;k<frames;k++){
		if(ar[k]==ref[j]){
			hits++;
			return 1;
		}
	}
}
int main(){
	int h=0;
	printf("Enter number of frames:");
	scanf("%d",&frames);
	int mem[frames];
	for(i=0;i<frames;i++){
		mem[i]=999;
	}
	printf("enter reference string length:");
	scanf("%d",&len);
	printf("Enter reference string:\n");
	for(i=0;i<len;i++){
		scanf("%d",&ref[i]);
	}
	for(i=0;i<len;i++){
		h=hit(i,mem);
		if(h!=1){
			mem[f++]=ref[i];
			if(f==frames){
				f=0;
			}
		}	
	}
	printf("hit: %d miss: %d",hits,len-hits);
}
