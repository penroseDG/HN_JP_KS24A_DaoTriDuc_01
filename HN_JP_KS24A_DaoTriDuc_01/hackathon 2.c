#include<stdio.h> 
int main(){
	int choice ; 
	int arr[100]; 
	int n ;
	int sum ;  
	
	do{
    	printf("MENU\n");
    	printf("1. Nhap so phan tu va gia tri cho mang \n"); 
    	printf("2. In ra cac gia tri trong phan tu : \n");
    	printf("3. Gia tri nho nhat va lon nhat trong mang :\n");
    	printf("4. Tong gia tri cac phan tu \n");
    	printf("5. Them 1 phan tu vao cuoi mang \n");
    	printf("6. Xoa 1 phan tu \n");
    	printf("7. Sap xep mang theo thu tu tang dan \n");
    	printf("8. Tim kiem 1 phan tu \n");
    	printf("9. In ra so nguyen to trong mang \n");
    	printf("10. Sap xep mang theo thu tu tang dan \n");
    	printf("11. Thoat \n");
    	printf(" vui long chon 1 yeu cau : ");
    	scanf("%d", &choice );
    	
    	switch(choice){
    	 	case 1 : 
                printf("Nhap kich co mang : ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                     {
                        printf("Nhap arr[%d]: ", i);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
    	 	case 2 :
    	 		for(int i = 0; i < n ; i++ ){
    	 			printf("gia tri cac phan tu trong mang la arr[%d] = %d \n", i, arr[i] ) ;
				 }
    			break ;
			case 3 :
//				   
				    if(n > 0) {
				    int max , min = arr  [0];
					    for(int i = 0 ; i < n ; i ++ ){
					    	if ( arr[i]> max ){
					    		max= arr[i];
					    	}
//							}else if ( arr[i] < min );
//							{
//								min = arr[i];
//							}
						} 
						printf(" gia tri lon nhat cua mang : %d \n", max );
//						printf(" gia tri nho nhat cua mang : %d \n", min );

					} 
//					if (n > 0){
//					     int min = arr[0];
//					     for(int i = 0 ; i < n ; i-- ){
//					    	if ( arr[i] < min ){
//					    		min= arr[i];								}
//							} printf(" gia tri nho nhat cua mang : %d \n", min );
//						}
					    break ; 
    	 	case 4 : 
    	 	    for(int i = 0  ; i <= arr[i] ; i++){
    	 	    	 sum += arr[i]; 
				 }
				  printf("tong gia tri cac phan tu la : %d \n", sum );
			    break ; 
    	 	case 5 : 
			    break ; 
    	 	case 6 : 
			    break ; 
    	 	case 7 : 
			    break ; 
    	 	case 8 : 
			    break ; 
    	 	case 9 : 
			    break ; 
    	 	case 10 : 
			    break ; 
    	 	case 11 : 
			    break ;
		}
	} while(choice !=12 ); 
	printf (" moi ban nhap lai "); 
	return 0 ; 	
}
