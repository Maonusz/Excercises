#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct
struct Ngay
{
	int ngay, thang, nam;
};
typedef struct Ngay Ngay;
struct SinhVien
{
	char maSV[8];
	char hoTen[50];
	int gioiTinh;
	Ngay ngaySinh;
	char diaChi[100];
	char lop[12];
	char khoa[7];
};
typedef struct SinhVien SinhVien;
struct Node
{
	SinhVien data;
	struct Node *link;
};
typedef struct Node Node;


// enter students' data
Node *Enter_Student(int n)
{
    Node *p = NULL;
    Node *head = NULL;
    Node *temp = NULL;

    for(int i=1; i<=n;i++) {

            temp = malloc(sizeof(struct Node));
            printf("Insert the data of the %d th student... \n", i);
            printf("\nStudent ID: ");scanf("%d", &temp->data.maSV);
            printf("\nName: ");scanf("%s", &temp->data.hoTen);
            printf("\nGender: ");scanf("%d", &temp->data.gioiTinh);
            printf("\nDate of birth: ");printf("\n");
            scanf("%d%d%d", &temp->data.ngaySinh.ngay, &temp->data.ngaySinh.thang, &temp->data.ngaySinh.nam);
            printf("\nAddress: ");scanf("%s", &temp->data.diaChi);
            printf("Class: ");scanf("%s", &temp->data.lop);
            printf("Khoa: ");scanf("%s", &temp->data.khoa);
            temp->link = NULL;

        if (head == NULL) {
            head = temp;
        }
        else {
                p = head;
                while(p-> link != NULL) {
                    p = p->link;
                }
                p->link= temp;
        }

    }
    return head;
}
// swap 2 nodes
void swap(Node *a, Node *b) {
    Node *k = Create(a->data);
    a->data = b->data;
    b->data = k->data;
}
// sort function
void Sort_List(int n, Node *head) {
    Node *p= NULL;
    p = head;
    Node *s = NULL;
    s = head;
    for(int i = 1; i < n; i++){
        if i == 1
            p = head;
        else p= p->link;
        s = p->link;
        for (int j = i+1; j<= n; j++) {
            if (p->data.maSV > s->data.maSV) {
                swap(s,p);
            }
            else {
            s = s->link;
            continue;
            }
    }
}
}
// lay dia chi cua node cuoi truoc khi them 1 node
Node Last_node_before_adding(Node *head) {
    Node *h= NULL;
    h = head;
    while (h != NULL) {
        h= h->link;
    }
    return h;
}

// print students' data
void Let_it_go(Node *head) {
    if (head == NULL) {
        printf("Linked list is empty.");
    }
    else {
    int k =0;
    Node *clk;
    clk = head;
    while (clk!= NULL) {
        k++;
        printf("\nStudent ID of the %d th is: %d", k,atoi(clk->data.maSV));
        clk = clk->link;
        }
    }
}

//delete

//

int main () {
//Nhap so sinh vien co trong danh sach
    int n;
    printf("Enter number of student: ");scanf("%d", &n);
    while( n <= 0) {
    printf("\nPlease enter again: ");scanf("%d", &n);
    }
    Node *head = NULL;
    Node *p = NULL;
    head = Enter_Student(n);
    p = head;
    Sort_List(n, head);
    Let_it_go(head);
    Node *last;

    last = Last_node_before_adding(p);
    //add a new student
    Node *new_boi = malloc(sizeof(struct Node)) ;
    printf("Insert a new student: \n");
    printf("Student ID: ");scanf("%d", new_boi->data.maSV);
    new_boi->link = NULL;

    last->link = new_boi;
    Sort_List(n, head);


}



