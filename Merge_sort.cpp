void merge(int a[],int low,int high,int mid)
{
	int i, j, k, temp[high-low+1];
    i = low;
	k = 0;
	j = mid + 1;
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}

}
void merge_sort(int arr[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }

    int mid=(si+ei)/2;
    merge_sort(arr,si,mid);
    merge_sort(arr,mid+1,ei);
    merge(arr,si,ei,mid);
}
void mergeSort(int input[], int size){
    if(size==0||size==1)
    {
        return ;
    }

    merge_sort(input,0,size-1);



}
int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
