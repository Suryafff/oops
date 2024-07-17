#include<stdio.h>
void main(){


int bmin;

int arr[6]={1,2,3,4,5,6};
int min = arr[0];
int sec =arr[0];
for(int i=0;i<=5;i++){
	if(arr[i]>min){
		min=arr[i];
	}

}

for(int i=0;i<=5;i++){
	if((arr[i]>sec)&&(arr[i]<min))
	{
		bmin=arr[i];
	}
}
printf("%d",bmin);
}