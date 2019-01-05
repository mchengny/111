#include<stdio.h>
int a[101], n;

void quicksort(int left, int right){
	int i,j,t,temp;
	// 递归停止条件 
	if(left > right)
		return;
	// temp中即为基准数 
	i = left;
	j = right;
	temp = a[left];
	while(i!=j){
		// 顺序很重要，要先从右往左找 
		while(temp<a[j] && i<j){
			j--;
		}	
		// 再从左往右找 
		while(temp>a[i] && i<j){
			i++;
		}
		// 交换两数位置 
		if(i<j){
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	// 将基准书归为到中间 
	a[left] = a[i];
	a[i] = temp;
	// 递归处理左右两部分 
	quicksort(left, i-1);
	quicksort(i+1, right); 
	
	return;
} 

int main(){
	int i, j;
	// 读入数据
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	} 
	// 快速排序 
	quicksort(0,n-1);
	// 以此打印结果 
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
