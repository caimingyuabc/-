/*
直接插入排序，对数组a的下标位于[left,right)中的元素进行排序
2024/11/12 21:28
*/

void DirectInsert_sort(int a[],int left,int right){
    int i,j;
    for(i=left+1;i<right;i++){
        int temp=a[i];
        for(j=i-1;j>left;j--){
            if(a[j]<temp)
                a[j+1]=a[j];
            else
                break;
        a[j+1]=temp;
        }
    }
}