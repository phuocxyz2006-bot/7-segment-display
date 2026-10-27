# 7-segment-display
# Arduino 7-Segment Display Counter (0 - 9)

Dự án điều khiển LED 7 đoạn (Katot chung - Common Cathode) hiển thị chuỗi số từ **0 đến 9** tự động lặp lại sau mỗi **1 giây** (1000ms).

## Sơ đồ kết nối chân (Pinout)

| Chân LED 7 đoạn | Chân Arduino |
| :---: | :---: |
| **A** | D5 |
| **B** | D6 |
| **DP** (Dấu chấm) | D7 |
| **C** | D8 |
| **D** | D9 |
| **E** | D10 |
| **F** | D11 |
| **G** | D12 |

## Phần cứng sử dụng
- **Vi điều khiển:** Arduino Uno / Nano / Mega
- **Hiển thị:** LED 7 đoạn (Common Cathode)
- **Khác:** Điện trở hạn dòng 220Ω (nếu cần), dây cắm, breadboard.

## Cách chạy dự án
1. Mở code bằng phần mềm **Arduino IDE**.
2. Kết nối Arduino với máy tính qua cổng USB.
3. Chọn đúng loại Board và cổng COM.
4. Bấm **Upload** để nạp code.
<img width="3000" height="2304" alt="circuit_image (1)" src="https://github.com/user-attachments/assets/ad6f70af-07db-44c5-8c87-29c5e6e96e22" />
