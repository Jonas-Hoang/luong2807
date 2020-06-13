#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
typedef struct employeeList
{
	char name[30];
	char province[50];
	int year;
}EL;
void typeOneEmployee(EL *e){
	fflush(stdin);
	printf("\n\t Nhap vao ten cua NV: ");
	fflush(stdin);
	gets(e->name);
	printf("\n\t Nhap vao tinh: ");
	fflush(stdin);
	gets(e->province);
	printf("\n\t Nhap nam sinh: ");
	scanf("%d",&(e->year));
	printf("\n");
}
void typeDataEmployee(EL e[], int n){
	for(int i = 0;i<n;i++){
		printf("\nNhap vao thong tin thu %d: ",i+1);
		typeOneEmployee(&e[i]);
//		for(int j=0; j<i;j++)
//			while (e[i].name == e[j].name);{
//				printf("Trung ten! Moi nhap lai ten");
//				typeOneEmployee(e[i]);
//			}
	}
}
void outPut1Data(EL *e){
	printf("|%-20s|%-20s|%-10d|\n", e->name, e->province,e->year);
	
}
void outPutAllData(EL e[], int n){
	printf("|----------------------------------------------------|\n");
	printf("|%-20s|%-20s|%-10s|\n","Ten","Tinh~","NamSinh");
	printf("|----------------------------------------------------|\n");
	for(int i = 0; i < n ;i++){
		outPut1Data((e+i));
	}
	printf("|----------------------------------------------------|\n\n");
}
void desSort(EL e[],int n)
{
	for(int i=0;i<=n;i++)
    for(int j=i+1;j<n;j++){
    	if(strcmp(e[i].province,e[j].province)<0){     
			EL k = e[i];
			e[i] = e[j];
			e[j] = k;    
        }
    }
	outPutAllData(e,n);
}
void searchByProvince(EL e[],int n){
	char prv[50];
	int found = 0 , i;
	printf("Dien ten tinh can tim: ");
    scanf("%s",prv);
    printf("|----------------------------------------------------|\n");
	printf("|%-20s|%-20s|%-10s|\n","Ten","Tinh~","NamSinh");
	printf("|----------------------------------------------------|\n");
    for(int i=0; i < n ;i++){
    	if(strcmp(prv,e[i].province) == 0)
        {
          found=1;
          outPut1Data(&e[i]);
        }
	} 
	if(found==0) printf("Not found\n");
	printf("|----------------------------------------------------|\n\n");
	
}
void ghiFile(EL e[], int n) {
	getchar();
	
	FILE* fOut = fopen("C:/Users/ACER/Desktop/Folder/test.dat", "a");
	int i;
	for(i = 0; i < n; i++) {
		EL el = e[i];
		fprintf(fOut, "%-10s %-20s %-10d \n",el.name,el.province,el.year);
	}
	fclose(fOut);
}
int main(){
	struct employeeList e[50];
	int pick = 0,n;
	do{
		system("cls");
		printf("\t\t\t======================MENU===========================\n");
		printf("\t|1. Nhap du lieu cua nhan vien                                            |\n");
		printf("\t|2. Sap xep, thong ke va hien thi thong tin cua nhan vien theo tinh (Z->A)|\n");
		printf("\t|3. Tim nhan vien theo tinh                                               |\n");
		printf("\t|4. Ghi vao tap tin nhi phan employee.dat                                 |\n");
		printf("\t|5. Thoat                                                                 |\n");	
		printf("\t\tMoi ban nhap so: ");
		scanf("%d", &pick);
		switch(pick)
		{
			case 1:
				printf("Nhap vao so luong nhan vien can nhap: ");
				scanf("%d",&n);
				typeDataEmployee(e,n);
				break;
			case 2:
				desSort(e,n);
				break;
			case 3:
				searchByProvince(e,n);
				break;
			case 4:
				ghiFile(e,n);
				break;
			case 5:
				break;
			default:
				printf("Khong co trong menu");
				break;	
		}
		system("pause");
	}
		while(pick!=0);
	return 0;
	
}
