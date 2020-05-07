#include <stdio.h>
#include <string.h>

int check(char arr[]);

int main(void) {
	int cnt=0, n;
	char arr[100][100];

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",arr[i]);
		cnt+=check(arr[i]);
	}
	printf("%d",cnt);
}

int check(char arr[]){
	int len;
	char arr2[26]={0};
	len=strlen(arr);
	for(int i=0;i<len;i++){
		if(arr2[arr[i]-97]!=0){
			if(i-arr2[arr[i]-97]!=0){
				return 0;
			}
		}
		arr2[arr[i]-97]=i+1;
	}
	return 1;
}
