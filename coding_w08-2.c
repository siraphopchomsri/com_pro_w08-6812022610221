#include <stdio.h>
int main () {
    int start_num, stop_num; // ประกาศตัวแปร start_num เเละ stop_num เป็นจำนวนเต็ม

    printf("ใส่หมายเลขเริ่มต้น: ");// ใส่ค่า start_num
    scanf("%d", &start_num);
    printf("ป้อนหมายเลขหยุด: ");// ใส่ค่า stop_num
    scanf("%d", &stop_num);

    printf("Start number is %d and stop number is %d\n", start_num, stop_num);// แสดงค่าของ start_num เเละ stop_num ที่ผู้ใช้ป้อนเข้ามา
    printf("\n----------------------------------------------\n\n");
    printf("ลำดับจากจุดเริ่มต้นถึงจุดสิ้นสุด: ");

    while (start_num<=stop_num) {// กำหนดให้ while ทำงานในกรณีที่ start_num น้อยกว่าหรือเท่ากับ stop_num ที่ผู้ใช้กำหนดไว้
        printf("%d ", start_num);// แสดงค่า start_num จนกว่าค่าจะมากกว่า stop_num ที่ผู้ใช้กำหนดไว้
        start_num+=1;// ให้ค่าของ start_num บวกทีละหนึ่ง

    }

    printf("\nขอบคุณครับ.\n"); // แสดงข้อความขอบคุณ
    return 0;
}