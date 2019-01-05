#include<stdio.h>
int a[101], n;

void quicksort(int left, int right){
	int i,j,t,temp;
	// �ݹ�ֹͣ���� 
	if(left > right)
		return;
	// temp�м�Ϊ��׼�� 
	i = left;
	j = right;
	temp = a[left];
	while(i!=j){
		// ˳�����Ҫ��Ҫ�ȴ��������� 
		while(temp<a[j] && i<j){
			j--;
		}	
		// �ٴ��������� 
		while(temp>a[i] && i<j){
			i++;
		}
		// ��������λ�� 
		if(i<j){
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	// ����׼���Ϊ���м� 
	a[left] = a[i];
	a[i] = temp;
	// �ݹ鴦������������ 
	quicksort(left, i-1);
	quicksort(i+1, right); 
	
	return;
} 

int main(){
	int i, j;
	// ��������
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	} 
	// �������� 
	quicksort(0,n-1);
	// �Դ˴�ӡ��� 
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
