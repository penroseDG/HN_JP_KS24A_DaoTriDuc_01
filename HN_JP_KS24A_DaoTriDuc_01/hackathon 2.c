#include<stdio.h> 
int main(){
	int choice ; 
	int arr[100]; 
	int n ,x ;
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
				//if(n > 0) {
//				    int max , min = arr  [0];
//					    for(int i = 0 ; i < n ; i ++ ){
//					    	if ( arr[i]> max ){
//					    		max= arr[i];
//					    	}
////							}else if ( arr[i] < min );
////							{
////								min = arr[i];
////							}
//						} 
//						printf(" gia tri lon nhat cua mang : %d \n", max );
////						printf(" gia tri nho nhat cua mang : %d \n", min );
//
//					} 
////					if (n > 0){
////					     int min = arr[0];
////					     for(int i = 0 ; i < n ; i-- ){
////					    	if ( arr[i] < min ){
////					    		min= arr[i];								}
////							} printf(" gia tri nho nhat cua mang : %d \n", min );
////						}
//					    break ; 
//				   
				     if(n > 0) {
                    int max = arr[0], min = arr[0];
                    for(int i = 1; i < n; i++) {
                        if (arr[i] > max) {
                            max = arr[i];
                        }
                        if (arr[i] < min) {
                            min = arr[i];
                        }
                    }
                    printf("Gia tri lon nhat cua mang: %d \n", max);
                    printf("Gia tri nho nhat cua mang: %d \n", min);
                } else {
                    printf("khong co gia tri .\n");
                }
                break;
    	 	case 4 : 
    	 	    for(int i = 0  ; i <= arr[i] ; i++){
    	 	    	 sum += arr[i]; 
				 }
				  printf("tong gia tri cac phan tu la : %d \n", sum );
			    break ; 
    	 	case 5 : 
			 if (n < 100) {
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &x);
                    arr[n] = x;
                    n++;
                } else {
                    printf("Mang da day, khong the them phan tu.\n");
                }
                break;
    	 	case 6 : 
			    printf("Nhap vi tri can xoa: ");
                int delete;
                scanf("%d", &delete);
                if (delete >= 0 && delete < n) {
                    for (int i = delete; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Da xoa phan tu tai vi tri %d\n", delete);
                } else {
                    printf("Vi tri khong hop le.\n");
                }
                break;
    	 	case 7 : 
			  for (int i = 0; i < n-1; i++) {
                    for (int j = 0; j < n-i-1; j++) {
                        if (arr[j] > arr[j+1]) {
                            int temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;
                        }
                    }
                }
                printf("Mang da duoc sap xep theo thu tu tang dan.\n");
                break;
    	 	case 8 :  printf("Nhap phan tu can tim: ");
                scanf("%d", &x);
                int found = 0;
                for (int i = 0; i < n; i++) {
                {
                        if (arr[i] == x){
                            printf("Phan tu %d o vi tri a[%d]\n", x, i);
                            found = 1;
                            break;
                        }
                    }
                    if (found) break;
                }
                if (!found) {
                    printf("Khong tim thay phan tu %d\n", x);
                }
                break;
    	 	case 9 : 
			    break ; 
    	 	case 10 : 
			    break ; 
    	 	case 11 : 
			return 0;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
		}
	} while(choice !=12 ); 
	printf (" moi ban nhap lai "); 
	return 0 ; 	
}
