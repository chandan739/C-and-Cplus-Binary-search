/*Binary search will divide array in two parts
find middle index of the array
      m=(s+e)/2
        s=starting index of an array
        e=ending element of an array
check if (search element==arr[m])

 if not, make two parts of the array
  part 1 : s to m-1
  part 2 : m+1 to e
Decide which part may contain the search element
  if(search element < arr[m])
    (part 1 is selected)
  if(search element > arr[m])
    (part 2 is selected)*/
    #include<stdio.h>
    int main()
    {
      int n,a[50],i,x;
      printf("Enter the size of an array\n");
      scanf("%d",&n);
      int s=0,e=n-1,m;
      printf("enter the elements of an array\n");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      printf("Enter the element to search\n");
      scanf("%d",&x);
      while(s<=e)
      {
        m=(s+e)/2;
        if(x==a[m])
        {
          printf("Element is present at index %d\n",m);
          break;
        }
        else if(x>a[m])
        {
        s=m+1;
        }
        else if(x<a[m])
        {
        e=m-1;
      }
      else
      printf("Element is not found in array");
    }
return 0;
}
