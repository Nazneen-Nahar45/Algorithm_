#include<stdio.h>
int main(){
   int n ;
    printf("Enter array size\n") ;
    scanf("%d",&n);
    int i =0 ;
     int arr[n] ;
    for(i = 0 ; i<n ; i++)
    {
      scanf("%d", &arr[i]) ;
    }

    int low = 0 , high = n-1 ,key , mid , flag=0 ;


  scanf("%d",&key) ;

  while(low<=high)

    {  mid = low +(high-low)/2 ;

      if(arr[mid]== key){
        flag = 1 ;
        break;
      }
      if(arr[mid]<key){

        low = mid +1 ;
      }
     else if (arr[mid]>key)
    {
        high = mid - 1 ;

   }
    }
   if(flag==1){
        printf("%d",mid );
    }
    else {
        printf("element not found") ;
    }

return 0 ;

}
