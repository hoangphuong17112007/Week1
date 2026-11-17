# XÁC ĐỊNH YÊU CẦU ĐỀ BÀI
- Đề bài yêu cầu đầu vào gồm có 3 thành phần đó là số phần tử của chuỗi (n), nhập vào chuỗi cần tìm (arr[]), nhập vào 
mục tiêu tổng của cặp phần tử thỏa mãn (target).
# GIẢI THUẬT
- Do bài toán chỉ yêu cầu tìm cặp phần tử thỏa mãn do đó có thể dùng cách đơn giản đó chính là dùng hai vòng lặp 
lồng nhau để duyệt từ đầu đến cuối mảng.
- Đầu tiên dùng 1 vòng lặp chạy từ phần tử i=0 chạy đến phần tử n-1 và vòng lặp thứ hai lồng trong vòng lặp thứ nhất từ  j=i+1 đến n để tránh tràn mảng
- Cộng hai phần tử lại với nhau, nếu tổng = target sẽ hiển thị ra cặp số vừa tìm được, nếu không thì in ra "Pair not found"
