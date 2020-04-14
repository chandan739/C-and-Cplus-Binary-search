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
    #include<iostream>
    using namespace std;
    int main()
    {
      int n,a[50],i,x;
      cout<<"Enter the size of an array"<<endl;
      cin>>n;
      int s=0,e=n-1,m;
      cout<<"enter the elements of an array"<<endl;
      for(i=0;i<n;i++)
      {
        cin>>a[i];
      }
      cout<<"Enter the element to search"<<endl;
      scanf("%d",&x);
      while(s<=e)
      {
        m=(s+e)/2;
        if(x==a[m])
        {
          cout<<"Element is present at index"<<" "<<m<<endl;
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
      cout<<"Element is not found in array"<<endl;
    }
return 0;
}
