### Bài 1: 
Sự khác nhau giữa ++x và x++ nằm ở cách chúng được xử lí: 
- ++x sẽ trả về ngay lập tức giá trị của x + 1
- x++ sẽ trả về giá trị của x, xong mới tăng x lên 1 đơn vị
Ví dụ như trong đoạn mã sau: 
```c
int x1 = 3, x2 = 3;
printf("%d\n", ++x1);
printf("%d\n", x2++);
printf("%d\n", x2);
```
Output:
```
4
3
4
```
Có thể thấy với ++x, giá trị của nó được tăng ngay. Còn x++ chỉ tăng sau khi giá trị gốc được tính toán trước

### Bài 2: 
Xem `e02.cpp`

### Bài 3: 
Xem `e03.cpp`
