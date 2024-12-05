#include <stdio.h>

int main(){
	int arr[100];
	int menu, n;
	int flag=-1;
	int INT_MAX=1;
	printf(" Menu\n");
	printf("1. Nhap so phan tu va gia tri cho mang\n");
	printf("2. In gia tri cac phan tu cua mang theo dang(arr[0] = 1, arr[1] = 5...\n");
	printf("3. Dem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no\n");
	printf("4. Tim gia tri nho thu 2 trong mang\n");
	printf("5. Them mot phan tu vao vi tri dau tien trong mang, phan tu moi them vao mang phai do nguoi dung nhap vao\n");
	printf("6. Xoa phan tu tai 1 vi tri cu the (nguoi dung nhap vi tri)\n");
	printf("7. Sap xep mang theo thu tu giam dan\n");
	printf("8. Tim kiem phan tu trong mang, phan tu tim kiem do nguoi dung nhap vao\n");
	printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc, so chan dung sau\n");
	printf("10. Dao nguoc thu tu cua cac phan tu co trong mang va hien thi ra toan bo phan tu co trong mang theo dang(arr[0] = 1 - le, arr[1] = 2 - chan...)\n");
	printf("11. Thoat\n");
	while(flag!=11){
		printf("Lua chon cua ban: ");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				printf("Moi ban nhap vao kich co phan tu cho mang: ");
				scanf("%d", &n);
				flag=1;
				for(int i=0;i<n;i++){
					printf("Moi ban nhap phan tu tai vi tri [%d] cua mang", i);
					scanf("%d", &arr[i]);
				}
				break;
			case 2:
				if(flag!=-1){
					for(int i=0;i<n;i++){
						printf("arr[%d]=%d\n",i, arr[i]);	
					}
				}else{
					printf("Ban chua nhap phan tu vao mang\n");
				}
				break;
			case 3:
				if (flag != -1) {
                    int count = 0;
                    int perfect(int num){
                        int sum = 0;
                        for (int i = 1; i <= num / 2; i++) {
                            if (num % i == 0) {
                                sum += i;
                            }
                        }
                        return sum == num;
                    }
                    for (int i = 0; i < n; i++) {
                        if (perfect(arr[i])) {
                            count++;
                        }
                    }
                    printf("So luong cac so hoan hao trong mang la: %d\n", count);
                } else {
                    printf("Ban chua nhap phan tu vao mang\n");
                }
				break;
			case 4:
				  if (flag != -1) { 
        				if (n < 2) {
            			printf("Mang phai co it nhat 2 phan tu de tim gia tri nho thu 2!\n");
        			} else {
            			int min1 = arr[0], min2 = INT_MAX;
            			for (int i = 1; i < n; i++) {
                			if (arr[i] < min1) {
                    			min2 = min1; 
                    			min1 = arr[i]; 
                			} else if (arr[i] > min1 && arr[i] < min2) {
                    			min2 = arr[i]; 
                		}
            		}
            		if (min2 == INT_MAX) {
                		printf("Khong co gia tri nho thu 2 trong mang (tat ca cac phan tu bang nhau)!\n");
            		} else {
                	printf("Gia tri nho thu hai trong mang la: %d\n", min2);
            		}
        		}
    		} else {
        		printf("Ban chua nhap phan tu vao mang!\n");
    		}
				break;
			case 5:
				if (flag != -1) { 
        			int value;
        			printf("Moi ban nhap vao phan tu muon them: ");
        			scanf("%d", &value);
        			for (int i = n; i > 0; i--) {
           				 arr[i] = arr[i - 1];
        			}
        			arr[0] = value;
        			n++;
        			printf("Them thanh cong! Mang sau khi them la:\n");
        			for (int i = 0; i < n; i++) {
            			printf("arr[%d] = %d\n", i, arr[i]);
        			}
    		} else {
        		printf("Ban chua nhap phan tu vao mang!\n");
    		}
				break;
			case 6:
				
				break;
			case 7:
				if(flag!=-1){
					int max7=0;
					for(int i=0;i<n;i++){
						if(arr[i]>max7){
							arr[i]=max7;
							max7=arr[i];
							
						}
					}
				}else{
					printf("Ban chua nhap phan tu vao mang\n");
				}
				break;
			case 8:
				
				break;
			case 9:
				
				break;
			case 10:
				
				break;
			case 11:
				flag=11;
				break;
			default:
                printf("Lua chon khong co trong MENU, moi ban chon lai\n ");	
		}
	}
	return 0;
}
